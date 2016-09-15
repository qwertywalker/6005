#if !defined(AFX_L_H__5795D108_6AB4_4B6E_93C8_7AD1B738DA60__INCLUDED_)
#define AFX_L_H__5795D108_6AB4_4B6E_93C8_7AD1B738DA60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// L.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CL dialog

class CL : public CDialog
{
// Construction
public:
	CL(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CL)
	enum { IDD = IDD_L };
	int		m_nextl;
	CString	m_nml;
	CString	m_npl;
	CString	m_zl;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CL)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CL)
	afx_msg void OnNextlButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_L_H__5795D108_6AB4_4B6E_93C8_7AD1B738DA60__INCLUDED_)
