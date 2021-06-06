// CDialog1.cpp: 구현 파일
//

#include "pch.h"
#include "T-Rex_project.h"
#include "CDialog1.h"
#include "afxdialogex.h"


// CDialog1 대화 상자

IMPLEMENT_DYNAMIC(CDialog1, CDialogEx)

CDialog1::CDialog1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ScoreBox, pParent)
	, m_strname(_T(""))
	, m_strscore(_T(""))
{

}

CDialog1::~CDialog1()
{
}

void CDialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_strname);
	DDX_Text(pDX, IDC_EDIT2, m_strscore);
}


BEGIN_MESSAGE_MAP(CDialog1, CDialogEx)
END_MESSAGE_MAP()


// CDialog1 메시지 처리기
