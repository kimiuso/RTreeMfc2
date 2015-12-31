#pragma once


// CTab1Dlg 对话框

class CTab1Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTab1Dlg)

public:
	CTab1Dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTab1Dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB1DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:
	CRect m_paintarea;
};
