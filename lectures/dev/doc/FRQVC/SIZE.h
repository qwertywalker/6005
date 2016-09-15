#if !defined(AFX_SIZE_H__1522E7E3_ECD4_11D2_8802_008048FB814F__INCLUDED_)
#define AFX_SIZE_H__1522E7E3_ECD4_11D2_8802_008048FB814F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// SIZE.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSIZE dialog

class CSIZE : public CDialog
{
// Construction
public:
	CSIZE(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSIZE)
	enum { IDD = IDD_SIZE };
	CString	m_nc;
	CString	m_nl;
	CString	m_nr;
	CString	m_nv;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSIZE)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSIZE)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIZE_H__1522E7E3_ECD4_11D2_8802_008048FB814F__INCLUDED_)
