// frqvcDlg.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "frqvcDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////
//Объявление глобальных переменных
int nv,n,nr,nc,nl,nf,lp,lm,kp,km,k;
int in_r[MR+1][2],in_c[MC+1][2],in_l[ML+1][2];
float z_r[MR+1], z_c[MC+1], z_l[ML+1];
float f[MF+1];
complex s, w[M+1][M+1];
float kum[MF+1], kua[MF+1], rim[MF+1], ria[MF+1], rom[MF+1], roa[MF+1];

/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// CFrqvcDlg dialog

CFrqvcDlg::CFrqvcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFrqvcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFrqvcDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require g subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}


void CFrqvcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFrqvcDlg)
	DDX_Control(pDX, IDC_LST, m_lst);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CFrqvcDlg, CDialog)
	//{{AFX_MSG_MAP(CFrqvcDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_CONS, OnCons)
	ON_COMMAND(ID_F, OnF)
	ON_COMMAND(ID_IO, OnIo)
	ON_COMMAND(ID_CALC, OnCalc)
	ON_COMMAND(ID_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFrqvcDlg message handlers

BOOL CFrqvcDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not g dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to g control
}

// If you add g minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CFrqvcDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CFrqvcDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CFrqvcDlg::OnCons() 
{
	// TODO: Add your command handler code here
	CSIZE size;
	int result;
	result=size.DoModal();
	if(result==IDOK)
	{   nv=atoi(size.m_nv);
       	nr=atoi(size.m_nr);
		nc=atoi(size.m_nc);
		nl=atoi(size.m_nl);
        //...
	}
  	if(nr)
	{   CR ir;
	    ir.DoModal();	  
	}
	if(nc)
	{   CC ic;
	    ic.DoModal();	  
	}
    	if(nl)
	{   CL il;
	    il.DoModal();	 
	}
	//...
	        
    CF f;
	f.DoModal();

	CIO io;
    io.DoModal();
       
	OnCalc();  
}

void CFrqvcDlg::OnF() 
{
	// TODO: Add your command handler code here
	CF f;
	f.DoModal();
	MessageBox("Выберите в меню дальнейший режим работы",
						"Режим работы",MB_OK);
}

void CFrqvcDlg::OnIo() 
{
	// TODO: Add your command handler code here
	CIO io;
	io.DoModal();
	MessageBox("Выберите в меню дальнейший режим работы",
						"Режим работы",MB_OK);
}

void CFrqvcDlg::OnCalc() 
{
	// TODO: Add your command handler code here
   for(int kf=1;kf<=nf;kf++)
	{    s=complex(0.0,2*3.141593*f[kf]);
         for(int i=0;i<=M;i++)
			  for(int j=0;j<=M;j++)
				w[i][j]=0;
         n=nv;
		 form_d(in_r, z_r, nr, 'R');
		 form_d(in_c, z_c, nc, 'C');
		 form_d(in_l, z_l, nl, 'L');
         
         //... 		
	 	 form_s();
       if((lp==1)&&(lm==0)&&(kp==2)&&(km==0))
			{st();
			 sf1(kf);}
		 else
			{gauss_c();
			 sf2(kf);}
	}

  //Вывод результатов моделирования
    char out[200];
	int g=(lp==1)&&(lm==0)&&(kp==2)&&(km==0);
    sprintf(out,"Результаты моделирования");
	m_lst.AddString(out);
	if(g==0)
	{sprintf(out,"          f кГц        kum            kua град     rim ком         ria град");
	 m_lst.AddString(out);
	}
	else
	{sprintf(out,"          f кГц        kum            kua град     rim ком         ria град     rom ком       roa град");
	 m_lst.AddString(out);
	}
	 for( kf=1; kf<=nf; kf++)
		{if(g==0)
		 {sprintf(out,"%15.2f%15.2e%13.2f%15.2e%13.2f",f[kf],
		  kum[kf],kua[kf],rim[kf],ria[kf]);
          m_lst.AddString(out);
	 }
	 else
	 {sprintf(out,"%15.2f%15.2e%13.2f%15.2e%13.2f%15.2e%13.2f",
		          f[kf],kum[kf],kua[kf],rim[kf],ria[kf],rom[kf],roa[kf]);
		  m_lst.AddString(out);
	 }
	}  
	    
}


void CFrqvcDlg::OnExit() 
{
	// TODO: Add your command handler code here
	 OnOK();	
}

