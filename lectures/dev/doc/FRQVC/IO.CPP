// IO.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "IO.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIO dialog


CIO::CIO(CWnd* pParent /*=NULL*/)
	: CDialog(CIO::IDD, pParent)
{
	//{{AFX_DATA_INIT(CIO)
	m_km = _T("");
	m_kp = _T("");
	m_lm = _T("");
	m_lp = _T("");
	//}}AFX_DATA_INIT
}


void CIO::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIO)
	DDX_Text(pDX, IDC_KM_EDIT, m_km);
	DDX_Text(pDX, IDC_KP_EDIT, m_kp);
	DDX_Text(pDX, IDC_LM_EDIT, m_lm);
	DDX_Text(pDX, IDC_LP_EDIT, m_lp);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CIO, CDialog)
	//{{AFX_MSG_MAP(CIO)
	ON_BN_CLICKED(IDC_IOOK_BUTTON, OnIookButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIO message handlers

void CIO::OnIookButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	lp=atoi(m_lp);
	lm=atoi(m_lm);
	kp=atoi(m_kp);
	km=atoi(m_km);
	OnOK();
}
