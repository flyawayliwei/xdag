
// cheatcoinwalletDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CcheatcoinwalletDlg dialog
class CcheatcoinwalletDlg : public CDialog
{
// Construction
public:
	CcheatcoinwalletDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHEATCOINWALLET_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButton1();
	CEdit pooladdr;
	CEdit nthreads;
private:
	static int inputPassword(const char *prompt, char *buf, unsigned size);
	static int showState(const char *state, const char *balance, const char *address);

public:
	CEdit balance;
	CEdit address;
	CEdit amount;
	CEdit transfer;
	afx_msg void OnClickedButton2();
};

extern CcheatcoinwalletDlg *g_dlg;
