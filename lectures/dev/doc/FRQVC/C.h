#if !defined(AFX_C_H__0098F284_B6AA_46F0_A2A1_211EB5211158__INCLUDED_)
#define AFX_C_H__0098F284_B6AA_46F0_A2A1_211EB5211158__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// C.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CC dialog

class CC : public CDialog
{
// Construction
public:
	CC(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CC)
	enum { IDD = IDD_C };
	CString	m_nmc;
	CString	m_npc;
	int		m_nextc;
	CString	m_zc;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CC)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CC)
	afx_msg void OnNextcButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_C_H__0098F284_B6AA_46F0_A2A1_211EB5211158__INCLUDED_)
