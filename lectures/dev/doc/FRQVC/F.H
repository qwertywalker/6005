#if !defined(AFX_F_H__5EE9AA83_F25C_11D2_880A_008048FB814F__INCLUDED_)
#define AFX_F_H__5EE9AA83_F25C_11D2_880A_008048FB814F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// F.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CF dialog

class CF : public CDialog
{
// Construction
public:
	CF(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CF)
	enum { IDD = IDD_F };
	int		m_f;
	CString	m_f1;
	CString	m_f2;
	CString	m_f3;
	CString	m_t1;
	CString	m_t2;
	CString	m_t3;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CF)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CF)
	afx_msg void OnF();
	afx_msg void OnDf();
	afx_msg void OnKf();
	afx_msg void OnFokButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_F_H__5EE9AA83_F25C_11D2_880A_008048FB814F__INCLUDED_)
