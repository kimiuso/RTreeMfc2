#pragma once


// CTab1Dlg �Ի���

class CTab1Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTab1Dlg)

public:
	CTab1Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTab1Dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB1DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

public:
	CRect m_paintarea;
};
