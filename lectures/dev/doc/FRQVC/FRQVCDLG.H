// frqvcDlg.h : header file
//

#if !defined(AFX_FRQVCDLG_H__1522E7DB_ECD4_11D2_8802_008048FB814F__INCLUDED_)
#define AFX_FRQVCDLG_H__1522E7DB_ECD4_11D2_8802_008048FB814F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


/////////////////////////////////////////////////////////////////////////////
// CFrqvcDlg dialog

class CFrqvcDlg : public CDialog
{
// Construction
public:
	CFrqvcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFrqvcDlg)
	enum { IDD = IDD_FRQVC_DIALOG };
	CListBox	m_lst;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFrqvcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFrqvcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCons();
	afx_msg void OnF();
	afx_msg void OnIo();
	afx_msg void OnCalc();
	afx_msg void OnExit();
	afx_msg void OnFile();
	afx_msg void OnRed();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRQVCDLG_H__1522E7DB_ECD4_11D2_8802_008048FB814F__INCLUDED_)
