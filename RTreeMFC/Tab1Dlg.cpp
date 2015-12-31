// Tab1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RTreeMFC.h"
#include "Tab1Dlg.h"
#include "afxdialogex.h"


// CTab1Dlg 对话框

IMPLEMENT_DYNAMIC(CTab1Dlg, CDialogEx)

CTab1Dlg::CTab1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAB1DLG, pParent)
{

}

CTab1Dlg::~CTab1Dlg()
{
}

void CTab1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTab1Dlg, CDialogEx)
END_MESSAGE_MAP()


// CTab1Dlg 消息处理程序
