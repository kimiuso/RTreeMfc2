
// RTreeMFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRTreeMFCApp: 
// �йش����ʵ�֣������ RTreeMFC.cpp
//

class CRTreeMFCApp : public CWinApp
{
public:
	CRTreeMFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRTreeMFCApp theApp;