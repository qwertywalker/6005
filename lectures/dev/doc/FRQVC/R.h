#if !defined(AFX_R_H__1522E7E4_ECD4_11D2_8802_008048FB814F__INCLUDED_)
#define AFX_R_H__1522E7E4_ECD4_11D2_8802_008048FB814F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// R.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CR dialog

class CR : public CDialog
{
// Construction
public:
	CR(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CR)
	enum { IDD = IDD_R };
	int		m_nextr;
	CString	m_npr;
	CString	m_zr;
	CString	m_nmr;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CR)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CR)
	afx_msg void OnNextrButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_R_H__1522E7E4_ECD4_11D2_8802_008048FB814F__INCLUDED_)
