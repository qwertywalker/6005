	//FORM.CPP

#include "stdafx.h"
#include "frqvc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

void form_d(int in_d[][2], float z_d[], int nd, char td)
  {
   int i,j,g;
	for(int kd=1;kd<=nd;kd++)
		 for(int l=0;l<=1;l++)
		   { i=in_d[kd][l];
			 if(i==0) continue;
			 for(int m=0;m<=1;m++)
			  { j=in_d[kd][m];
				if(j==0) continue;
				g=(1-2*l)*(1-2*m);
				switch(td)
				{
				  case 'R': w[i][j]+=g/z_d[kd]; break;
				  case 'C': w[i][j]+=g*s*z_d[kd];break;
				  case 'L': w[i][j]+=g/(s*z_d[kd]); 
				  
				  }
			   }
			}
   }

  void form_s()
  {for(int i=1; i<=n; i++)
	 w[i][0]=0;
   if((lp!=0)&&(lm!=0))
	  {w[lp][0]=-1;
	   w[lm][0]=1;}
   else if(lm==0)
		   w[lp][0]=-1;
		else w[lm][0]=1;
  }

