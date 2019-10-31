// 4Dlg.h : header file
//

#if !defined(AFX_4DLG_H__9B83B9B0_D3EC_4A79_B5E6_8DA91CCBE0D8__INCLUDED_)
#define AFX_4DLG_H__9B83B9B0_D3EC_4A79_B5E6_8DA91CCBE0D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy4Dlg dialog

class CMy4Dlg : public CDialog
{
// Construction
public:
	CMy4Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMy4Dlg)
	enum { IDD = IDD_MY4_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy4Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy4Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_4DLG_H__9B83B9B0_D3EC_4A79_B5E6_8DA91CCBE0D8__INCLUDED_)
