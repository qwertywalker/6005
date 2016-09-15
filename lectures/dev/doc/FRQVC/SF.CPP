//SF.CPP

#include "stdafx.h"
#include "frqvc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

void st()
{complex c,t,cn(0,0);
 double g;
 int l;
 for(int k=n; k>=3; k--)
	{l=k;
	 g=0.001;
	 while(abs(w[l][k])<=g)
	   {l=l-1;
		if(l==2) {l=k; g=0.1*g;}
	   }
	 if(l!=k)
		 for(int j=k; j<=n; j++)
			 {t=w[k][j];
			  w[k][j]=w[l][j];
			  w[l][j]=t;
			 }
	 for(int i=k-1; i>=1; i--)
		{if(w[i][k]==cn) continue;
		 c=w[i][k]/w[k][k];
		 for(int j=1; j<=k-1; j++)
			 if(w[k][j]!=cn)
				w[i][j]-=c*w[k][j];
		}
	}
 }


void sf1(int kf)
  {complex ku,ri,ro,d;
   ku=-w[2][1]/w[2][2];
   d=w[1][1]*w[2][2]-w[2][1]*w[1][2];
   ri=w[2][2]/d;
   ro=w[1][1]/d;
   kum[kf]=abs(ku);
   kua[kf]=arg(ku)*180./3.1416;
   rim[kf]=abs(ri);
   ria[kf]=arg(ri)*180./3.1416;
   rom[kf]=abs(ro);
   roa[kf]=arg(ro)*180./3.1416;
 }


void gauss_c()
  {int i,j,k,l;
   complex c,d,t,cn(0,0);
   for(k=1; k<n; k++)
	{
	  l=k;
	  for(i=k+1; i<=n; i++)
		 if(abs(w[i][k])>abs(w[l][k]))
		   l=i;
	  if(l!=k)
		 for(j=0; j<=n; j++)
		  if(j==0||j>=k)
		   {t=w[k][j];
			w[k][j]=w[l][j];
			w[l][j]=t;
		   }
	  d=1./w[k][k];
	  for(i=k+1; i<=n; i++)
		 {if(w[i][k]==cn) continue;
			c=w[i][k]*d;
		  for(j=k+1; j<=n; j++)
			if(w[k][j]!=cn)
			  w[i][j]-=c*w[k][j];
		  if(w[k][0]!=cn) w[i][0]-=c*w[k][0];
		 }
	 }
  w[0][n]=-w[n][0]/w[n][n];
  for(i=n-1; i>=1; i--)
	 {t=w[i][0];
	  for(j=i+1; j<=n; j++)
		t+=w[i][j]*w[0][j];
	  w[0][i]=-t/w[i][i];
	 }
}



  void sf2(int kf)
	{complex ku, ri;
	 ri=w[0][lp]-w[0][lm];
	 ku=(w[0][kp]-w[0][km])/ri;
	 kum[kf]=abs(ku);
	 kua[kf]=arg(ku)*180./3.1416;
	 rim[kf]=abs(ri);
	 ria[kf]=arg(ri)*180./3.1416;
	}
/*
  void write_out()
   {FILE*out;
	int a=(lp==1)&&(lm==0)&&(kp==2)&&(km==0);
	 out=fopen("PR.TXT","a+");
	 if(out==NULL)
		{AfxMessageBox("Файл не открыть");
		 exit(1);}
	 fprintf(out,"\nОписание компонентов\n");
	 if(nr!=0){
	  fprintf(out,"\nРезисторы\n");
	  fprintf(out,"\n            n+        n-        R(ком)\n");
	   for(int kr=1;kr<=nr;kr++)
		fprintf(out,"\n R%2d%10d%10d%10.2f",kr,in_r[kr][0],in_r[kr][1],
		 z_r[kr]);}
	 //...
	 fprintf(out,"\nРезультаты моделирования\п\n");
	fprintf(out,"\n      f кгц     kum       kua град  rim ком   ria град");
		 if(a!=0)
		 fprintf(out,"  rom ком   roa град");
	 for(int kf=1; kf<=nf; kf++)
		{fprintf(out,"\n\n%10.2f%10.2e%10.2f%10.2e%10.2f",f[kf],
		 kum[kf],kua[kf],rim[kf],ria[kf]);
		 if(a!=0)
			fprintf(out,"%10.2e%10.2f",rom[kf],roa[kf]);
		}
	 fclose(out);
	}

  */
 void write_out()
 { CFile out("PR.DOC",
		CFile::modeNoTruncate|CFile::modeCreate|CFile::modeWrite);
    out.SeekToEnd();
    int g=(lp==1)&&(lm==0)&&(kp==2)&&(km==0);
    CString buf,str;
    buf.Format("\n\n\nОписание компонентов\n");
    //Описание резисторов
    if(nr!=0)
      { str.Format("\nРезисторы\n"
	                 "            n+        n-        R(ком)\n");
         buf+=str;
        for(int kr=1;kr<=nr;kr++)
	  {str.Format("\n R%2d%10d%10d%10.2f",kr,in_r[kr][0],in_r[kr][1],z_r[kr]);
              buf+=str;
	  }
        }
     
     str.Format("\n\nРезультаты моделирования\n"
	            "\n f кгц       kum      kua град   rim ком   ria град");
     buf+=str;
     if(g!=0)
       { str.Format("  rom ком   roa град");
	buf+=str;
        }
     for(int kf=1; kf<=nf; kf++)
      {str.Format("\n\n%.2f%15.2e%10.2f%13.2e%8.2f",
                           f[kf],kum[kf],kua[kf],rim[kf],ria[kf]);
         buf+=str;
         if(g!=0)
	 {str.Format("%12.2e%8.2f",rom[kf],roa[kf]);
	   buf+=str;
            }
        }
      out.Write(buf.GetBuffer(0),buf.GetLength());
      out.Close();
      AfxMessageBox("Описание и результаты выведены в файл  PR.DOC");
 }

