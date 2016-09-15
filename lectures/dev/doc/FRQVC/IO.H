#if !defined(AFX_IO_H__A1E3BC63_F7DA_11D2_BD34_008048FB787A__INCLUDED_)
#define AFX_IO_H__A1E3BC63_F7DA_11D2_BD34_008048FB787A__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// IO.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CIO dialog

class CIO : public CDialog
{
// Construction
public:
	CIO(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CIO)
	enum { IDD = IDD_IO };
	CString	m_km;
	CString	m_kp;
	CString	m_lm;
	CString	m_lp;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIO)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CIO)
	afx_msg void OnIookButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IO_H__A1E3BC63_F7DA_11D2_BD34_008048FB787A__INCLUDED_)
