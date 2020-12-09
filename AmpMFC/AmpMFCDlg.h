
// AmpMFCDlg.h : header file
//

#pragma once


// CAmpMFCDlg dialog
class CAmpMFCDlg : public CDialogEx
{
// Construction
public:
	CAmpMFCDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AMPMFC_DIALOG };
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
	afx_msg void OnBnClickedButton1();
};

//#pragma comment(lib, "Tutorial01.lib")
//#pragma comment(lib, "Delayimp.lib")
//#pragma comment(linker, "/DELAYLOAD:Tutorial01.dll")
//extern "C" _declspec(dllimport) void tstlib(HINSTANCE hInstance, int nCmdShow);
