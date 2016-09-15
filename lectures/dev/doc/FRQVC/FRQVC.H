// frqvc.h : main header file for the FRQVC application
//

#if !defined(AFX_FRQVC_H__1522E7D9_ECD4_11D2_8802_008048FB814F__INCLUDED_)
#define AFX_FRQVC_H__1522E7D9_ECD4_11D2_8802_008048FB814F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "Zf1_mw.h"
#include"SIZE.h"
#include"R.h"
#include"C.h"
#include"L.h"
#include"F.h"
#include"IO.h"

/////////////////////////////////////////////////////////////////////////////
// CFrqvcApp:
// See frqvc.cpp for the implementation of this class
//

class CFrqvcApp : public CWinApp
{
public:
	CFrqvcApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFrqvcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFrqvcApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRQVC_H__1522E7D9_ECD4_11D2_8802_008048FB814F__INCLUDED_)
