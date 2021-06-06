// CySocketCore.cpp: 구현 파일
//

#include "pch.h"
#include "T-Rex_project.h"
#include "CySocketCore.h"
#include "CySocketDataT1.h"
#include "mysql.h"
MYSQL m_mysql;
// CCySocketCore

CCySocketCore::CCySocketCore()
{
}

CCySocketCore::~CCySocketCore()
{
}

// CCySocketCore 멤버 함수


void CCySocketCore::OnClose(int nErrorCode)
{
	AfxMessageBox(_T("OnClode "));
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	CSocket::OnClose(nErrorCode);
}


void CCySocketCore::OnReceive(int nErrorCode)
{
	
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	CSocket::OnReceive(nErrorCode);
	char szBuff[1024];
	CString strMessage(szBuff);
	if(strMessage.Left(3)==_T("");
}

int CCySocketCore::SocketSendData(CCySocketDataT1 *p_data_send)
{
	CArchive* m_pArchiveOut = NULL;
	if (m_pArchiveOut != NULL)
	{
		p_data_send->Serialize(*m_pArchiveOut);
		m_pArchiveOut->Flush();
	}
	return 1;
}