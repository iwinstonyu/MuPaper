// MuPaperDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MuPaper.h"
#include "MuPaperDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CMuPaperDlg 对话框




CMuPaperDlg::CMuPaperDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMuPaperDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	memset(m_num, 0, sizeof(m_num));
	memset(m_rate, 0, sizeof(m_rate));
	memset(m_count, 0, sizeof(m_count));
}

void CMuPaperDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	for( int i = 0; i < 100; ++i )
	{

		DDX_Control(pDX, IDC_STATIC_NUM_1, m_staticNum[1]);
		DDX_Control(pDX, IDC_STATIC_NUM_2, m_staticNum[2]);
		DDX_Control(pDX, IDC_STATIC_NUM_3, m_staticNum[3]);
		DDX_Control(pDX, IDC_STATIC_NUM_4, m_staticNum[4]);
		DDX_Control(pDX, IDC_STATIC_NUM_5, m_staticNum[5]);
		DDX_Control(pDX, IDC_STATIC_NUM_6, m_staticNum[6]);
		DDX_Control(pDX, IDC_STATIC_NUM_7, m_staticNum[7]);
		DDX_Control(pDX, IDC_STATIC_NUM_8, m_staticNum[8]);
		DDX_Control(pDX, IDC_STATIC_NUM_9, m_staticNum[9]);
		DDX_Control(pDX, IDC_STATIC_NUM_10, m_staticNum[10]);
		DDX_Control(pDX, IDC_STATIC_NUM_11, m_staticNum[11]);
		DDX_Control(pDX, IDC_STATIC_NUM_12, m_staticNum[12]);
		DDX_Control(pDX, IDC_STATIC_NUM_13, m_staticNum[13]);
		DDX_Control(pDX, IDC_STATIC_NUM_14, m_staticNum[14]);
		DDX_Control(pDX, IDC_STATIC_NUM_15, m_staticNum[15]);
		DDX_Control(pDX, IDC_STATIC_NUM_16, m_staticNum[16]);
		DDX_Control(pDX, IDC_STATIC_NUM_17, m_staticNum[17]);
		DDX_Control(pDX, IDC_STATIC_NUM_18, m_staticNum[18]);
		DDX_Control(pDX, IDC_STATIC_NUM_19, m_staticNum[19]);
		DDX_Control(pDX, IDC_STATIC_NUM_20, m_staticNum[20]);
		DDX_Control(pDX, IDC_STATIC_NUM_21, m_staticNum[21]);
		DDX_Control(pDX, IDC_STATIC_NUM_22, m_staticNum[22]);
		DDX_Control(pDX, IDC_STATIC_NUM_23, m_staticNum[23]);
		DDX_Control(pDX, IDC_STATIC_NUM_24, m_staticNum[24]);
		DDX_Control(pDX, IDC_STATIC_NUM_25, m_staticNum[25]);
		DDX_Control(pDX, IDC_STATIC_NUM_26, m_staticNum[26]);
		DDX_Control(pDX, IDC_STATIC_NUM_27, m_staticNum[27]);
		DDX_Control(pDX, IDC_STATIC_NUM_28, m_staticNum[28]);
		DDX_Control(pDX, IDC_STATIC_NUM_29, m_staticNum[29]);
		DDX_Control(pDX, IDC_STATIC_NUM_30, m_staticNum[30]);
		DDX_Control(pDX, IDC_STATIC_NUM_31, m_staticNum[31]);
		DDX_Control(pDX, IDC_STATIC_NUM_32, m_staticNum[32]);
		DDX_Control(pDX, IDC_STATIC_NUM_33, m_staticNum[33]);
		DDX_Control(pDX, IDC_STATIC_NUM_34, m_staticNum[34]);
		DDX_Control(pDX, IDC_STATIC_NUM_35, m_staticNum[35]);
		DDX_Control(pDX, IDC_STATIC_NUM_36, m_staticNum[36]);
		DDX_Control(pDX, IDC_STATIC_NUM_37, m_staticNum[37]);
		DDX_Control(pDX, IDC_STATIC_NUM_38, m_staticNum[38]);
		DDX_Control(pDX, IDC_STATIC_NUM_39, m_staticNum[39]);
		DDX_Control(pDX, IDC_STATIC_NUM_40, m_staticNum[40]);
		DDX_Control(pDX, IDC_STATIC_NUM_41, m_staticNum[41]);
		DDX_Control(pDX, IDC_STATIC_NUM_42, m_staticNum[42]);
		DDX_Control(pDX, IDC_STATIC_NUM_43, m_staticNum[43]);
		DDX_Control(pDX, IDC_STATIC_NUM_44, m_staticNum[44]);
		DDX_Control(pDX, IDC_STATIC_NUM_45, m_staticNum[45]);
		DDX_Control(pDX, IDC_STATIC_NUM_46, m_staticNum[46]);
		DDX_Control(pDX, IDC_STATIC_NUM_47, m_staticNum[47]);
		DDX_Control(pDX, IDC_STATIC_NUM_48, m_staticNum[48]);
		DDX_Control(pDX, IDC_STATIC_NUM_49, m_staticNum[49]);
		DDX_Control(pDX, IDC_STATIC_NUM_50, m_staticNum[50]);
	}


	DDX_Control(pDX, IDC_STATIC_RATE_1, m_staticRate[1]);
	DDX_Control(pDX, IDC_STATIC_RATE_2, m_staticRate[2]);
	DDX_Control(pDX, IDC_STATIC_RATE_3, m_staticRate[3]);
	DDX_Control(pDX, IDC_STATIC_RATE_4, m_staticRate[4]);
	DDX_Control(pDX, IDC_STATIC_RATE_5, m_staticRate[5]);
	DDX_Control(pDX, IDC_STATIC_RATE_6, m_staticRate[6]);
	DDX_Control(pDX, IDC_STATIC_RATE_7, m_staticRate[7]);
	DDX_Control(pDX, IDC_STATIC_RATE_8, m_staticRate[8]);
	DDX_Control(pDX, IDC_STATIC_RATE_9, m_staticRate[9]);
	DDX_Control(pDX, IDC_STATIC_RATE_10, m_staticRate[10]);
	DDX_Control(pDX, IDC_STATIC_RATE_11, m_staticRate[11]);
	DDX_Control(pDX, IDC_STATIC_RATE_12, m_staticRate[12]);
	DDX_Control(pDX, IDC_STATIC_RATE_13, m_staticRate[13]);
	DDX_Control(pDX, IDC_STATIC_RATE_14, m_staticRate[14]);
	DDX_Control(pDX, IDC_STATIC_RATE_15, m_staticRate[15]);
	DDX_Control(pDX, IDC_STATIC_RATE_16, m_staticRate[16]);
	DDX_Control(pDX, IDC_STATIC_RATE_17, m_staticRate[17]);
	DDX_Control(pDX, IDC_STATIC_RATE_18, m_staticRate[18]);
	DDX_Control(pDX, IDC_STATIC_RATE_19, m_staticRate[19]);
	DDX_Control(pDX, IDC_STATIC_RATE_20, m_staticRate[20]);
	DDX_Control(pDX, IDC_STATIC_RATE_21, m_staticRate[21]);
	DDX_Control(pDX, IDC_STATIC_RATE_22, m_staticRate[22]);
	DDX_Control(pDX, IDC_STATIC_RATE_23, m_staticRate[23]);
	DDX_Control(pDX, IDC_STATIC_RATE_24, m_staticRate[24]);
	DDX_Control(pDX, IDC_STATIC_RATE_25, m_staticRate[25]);
	DDX_Control(pDX, IDC_STATIC_RATE_26, m_staticRate[26]);
	DDX_Control(pDX, IDC_STATIC_RATE_27, m_staticRate[27]);
	DDX_Control(pDX, IDC_STATIC_RATE_28, m_staticRate[28]);
	DDX_Control(pDX, IDC_STATIC_RATE_29, m_staticRate[29]);
	DDX_Control(pDX, IDC_STATIC_RATE_30, m_staticRate[30]);
	DDX_Control(pDX, IDC_STATIC_RATE_31, m_staticRate[31]);
	DDX_Control(pDX, IDC_STATIC_RATE_32, m_staticRate[32]);
	DDX_Control(pDX, IDC_STATIC_RATE_33, m_staticRate[33]);
	DDX_Control(pDX, IDC_STATIC_RATE_34, m_staticRate[34]);
	DDX_Control(pDX, IDC_STATIC_RATE_35, m_staticRate[35]);
	DDX_Control(pDX, IDC_STATIC_RATE_36, m_staticRate[36]);
	DDX_Control(pDX, IDC_STATIC_RATE_37, m_staticRate[37]);
	DDX_Control(pDX, IDC_STATIC_RATE_38, m_staticRate[38]);
	DDX_Control(pDX, IDC_STATIC_RATE_39, m_staticRate[39]);
	DDX_Control(pDX, IDC_STATIC_RATE_40, m_staticRate[40]);
	DDX_Control(pDX, IDC_STATIC_RATE_41, m_staticRate[41]);
	DDX_Control(pDX, IDC_STATIC_RATE_42, m_staticRate[42]);
	DDX_Control(pDX, IDC_STATIC_RATE_43, m_staticRate[43]);
	DDX_Control(pDX, IDC_STATIC_RATE_44, m_staticRate[44]);
	DDX_Control(pDX, IDC_STATIC_RATE_45, m_staticRate[45]);
	DDX_Control(pDX, IDC_STATIC_RATE_46, m_staticRate[46]);
	DDX_Control(pDX, IDC_STATIC_RATE_47, m_staticRate[47]);
	DDX_Control(pDX, IDC_STATIC_RATE_48, m_staticRate[48]);
	DDX_Control(pDX, IDC_STATIC_RATE_49, m_staticRate[49]);
	DDX_Control(pDX, IDC_STATIC_RATE_50, m_staticRate[50]);
	DDX_Control(pDX, IDC_EDIT1, m_edit[1]);
	DDX_Control(pDX, IDC_EDIT2, m_edit[2]);
	DDX_Control(pDX, IDC_EDIT3, m_edit[3]);
	DDX_Control(pDX, IDC_EDIT4, m_edit[4]);
	DDX_Control(pDX, IDC_EDIT5, m_edit[5]);
	DDX_Control(pDX, IDC_EDIT6, m_edit[6]);
	DDX_Control(pDX, IDC_EDIT7, m_edit[7]);
	DDX_Control(pDX, IDC_EDIT8, m_edit[8]);
	DDX_Control(pDX, IDC_EDIT9, m_edit[9]);
	DDX_Control(pDX, IDC_EDIT10, m_edit[10]);
}

BOOL CMuPaperDlg::PreTranslateMessage(MSG* pMsg)
{
	if( pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN )
	{
		int nCtrlId = GetFocus()->GetDlgCtrlID();
		if( nCtrlId == IDC_EDIT1 )
		{
			m_count[1] = GetDlgItemInt(IDC_EDIT1);
			if(!m_count[1])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT2 )
		{
			m_count[2] = GetDlgItemInt(IDC_EDIT2);
			if(!m_count[2])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT3 )
		{
			m_count[3] = GetDlgItemInt(IDC_EDIT3);
			if(!m_count[3])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT4 )
		{
			m_count[4] = GetDlgItemInt(IDC_EDIT4);
			if(!m_count[4])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT5 )
		{
			m_count[5] = GetDlgItemInt(IDC_EDIT5);
			if(!m_count[5])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT6 )
		{
			m_count[6] = GetDlgItemInt(IDC_EDIT6);
			if(!m_count[6])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT7 )
		{
			m_count[7] = GetDlgItemInt(IDC_EDIT7);
			if(!m_count[7])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT8 )
		{
			m_count[8] = GetDlgItemInt(IDC_EDIT8);
			if(!m_count[8])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT9 )
		{
			m_count[9] = GetDlgItemInt(IDC_EDIT9);
			if(!m_count[9])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
		else if( nCtrlId == IDC_EDIT10 )
		{
			m_count[10] = GetDlgItemInt(IDC_EDIT10);
			if(!m_count[10])
				GetDlgItem(nCtrlId)->SetWindowText(CString(""));
			CalcData();
			return TRUE;
		}
	}

	return CDialog::PreTranslateMessage(pMsg);
}

BEGIN_MESSAGE_MAP(CMuPaperDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON_PLUS_1, &CMuPaperDlg::OnBnClickedButtonPlus1)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_2, &CMuPaperDlg::OnBnClickedButtonPlus2)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_3, &CMuPaperDlg::OnBnClickedButtonPlus3)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_4, &CMuPaperDlg::OnBnClickedButtonPlus4)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_5, &CMuPaperDlg::OnBnClickedButtonPlus5)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_6, &CMuPaperDlg::OnBnClickedButtonPlus6)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_7, &CMuPaperDlg::OnBnClickedButtonPlus7)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_8, &CMuPaperDlg::OnBnClickedButtonPlus8)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_9, &CMuPaperDlg::OnBnClickedButtonPlus9)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_10, &CMuPaperDlg::OnBnClickedButtonPlus10)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_11, &CMuPaperDlg::OnBnClickedButtonPlus11)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_12, &CMuPaperDlg::OnBnClickedButtonPlus12)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_13, &CMuPaperDlg::OnBnClickedButtonPlus13)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_14, &CMuPaperDlg::OnBnClickedButtonPlus14)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_15, &CMuPaperDlg::OnBnClickedButtonPlus15)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_16, &CMuPaperDlg::OnBnClickedButtonPlus16)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_17, &CMuPaperDlg::OnBnClickedButtonPlus17)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_18, &CMuPaperDlg::OnBnClickedButtonPlus18)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_19, &CMuPaperDlg::OnBnClickedButtonPlus19)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_20, &CMuPaperDlg::OnBnClickedButtonPlus20)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_21, &CMuPaperDlg::OnBnClickedButtonPlus21)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_22, &CMuPaperDlg::OnBnClickedButtonPlus22)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_23, &CMuPaperDlg::OnBnClickedButtonPlus23)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_24, &CMuPaperDlg::OnBnClickedButtonPlus24)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_25, &CMuPaperDlg::OnBnClickedButtonPlus25)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_26, &CMuPaperDlg::OnBnClickedButtonPlus26)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_27, &CMuPaperDlg::OnBnClickedButtonPlus27)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_28, &CMuPaperDlg::OnBnClickedButtonPlus28)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_29, &CMuPaperDlg::OnBnClickedButtonPlus29)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_30, &CMuPaperDlg::OnBnClickedButtonPlus30)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_31, &CMuPaperDlg::OnBnClickedButtonPlus31)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_32, &CMuPaperDlg::OnBnClickedButtonPlus32)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_33, &CMuPaperDlg::OnBnClickedButtonPlus33)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_34, &CMuPaperDlg::OnBnClickedButtonPlus34)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_35, &CMuPaperDlg::OnBnClickedButtonPlus35)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_36, &CMuPaperDlg::OnBnClickedButtonPlus36)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_37, &CMuPaperDlg::OnBnClickedButtonPlus37)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_38, &CMuPaperDlg::OnBnClickedButtonPlus38)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_39, &CMuPaperDlg::OnBnClickedButtonPlus39)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_40, &CMuPaperDlg::OnBnClickedButtonPlus40)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_41, &CMuPaperDlg::OnBnClickedButtonPlus41)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_42, &CMuPaperDlg::OnBnClickedButtonPlus42)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_43, &CMuPaperDlg::OnBnClickedButtonPlus43)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_44, &CMuPaperDlg::OnBnClickedButtonPlus44)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_45, &CMuPaperDlg::OnBnClickedButtonPlus45)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_46, &CMuPaperDlg::OnBnClickedButtonPlus46)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_47, &CMuPaperDlg::OnBnClickedButtonPlus47)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_48, &CMuPaperDlg::OnBnClickedButtonPlus48)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_49, &CMuPaperDlg::OnBnClickedButtonPlus49)
	ON_BN_CLICKED(IDC_BUTTON_PLUS_50, &CMuPaperDlg::OnBnClickedButtonPlus50)

	ON_BN_CLICKED(IDC_BUTTON_MINUS_1, &CMuPaperDlg::OnBnClickedButtonMinus1)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_2, &CMuPaperDlg::OnBnClickedButtonMinus2)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_3, &CMuPaperDlg::OnBnClickedButtonMinus3)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_4, &CMuPaperDlg::OnBnClickedButtonMinus4)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_5, &CMuPaperDlg::OnBnClickedButtonMinus5)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_6, &CMuPaperDlg::OnBnClickedButtonMinus6)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_7, &CMuPaperDlg::OnBnClickedButtonMinus7)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_8, &CMuPaperDlg::OnBnClickedButtonMinus8)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_9, &CMuPaperDlg::OnBnClickedButtonMinus9)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_10, &CMuPaperDlg::OnBnClickedButtonMinus10)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_11, &CMuPaperDlg::OnBnClickedButtonMinus11)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_12, &CMuPaperDlg::OnBnClickedButtonMinus12)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_13, &CMuPaperDlg::OnBnClickedButtonMinus13)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_14, &CMuPaperDlg::OnBnClickedButtonMinus14)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_15, &CMuPaperDlg::OnBnClickedButtonMinus15)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_16, &CMuPaperDlg::OnBnClickedButtonMinus16)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_17, &CMuPaperDlg::OnBnClickedButtonMinus17)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_18, &CMuPaperDlg::OnBnClickedButtonMinus18)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_19, &CMuPaperDlg::OnBnClickedButtonMinus19)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_20, &CMuPaperDlg::OnBnClickedButtonMinus20)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_21, &CMuPaperDlg::OnBnClickedButtonMinus21)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_22, &CMuPaperDlg::OnBnClickedButtonMinus22)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_23, &CMuPaperDlg::OnBnClickedButtonMinus23)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_24, &CMuPaperDlg::OnBnClickedButtonMinus24)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_25, &CMuPaperDlg::OnBnClickedButtonMinus25)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_26, &CMuPaperDlg::OnBnClickedButtonMinus26)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_27, &CMuPaperDlg::OnBnClickedButtonMinus27)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_28, &CMuPaperDlg::OnBnClickedButtonMinus28)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_29, &CMuPaperDlg::OnBnClickedButtonMinus29)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_30, &CMuPaperDlg::OnBnClickedButtonMinus30)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_31, &CMuPaperDlg::OnBnClickedButtonMinus31)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_32, &CMuPaperDlg::OnBnClickedButtonMinus32)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_33, &CMuPaperDlg::OnBnClickedButtonMinus33)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_34, &CMuPaperDlg::OnBnClickedButtonMinus34)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_35, &CMuPaperDlg::OnBnClickedButtonMinus35)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_36, &CMuPaperDlg::OnBnClickedButtonMinus36)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_37, &CMuPaperDlg::OnBnClickedButtonMinus37)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_38, &CMuPaperDlg::OnBnClickedButtonMinus38)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_39, &CMuPaperDlg::OnBnClickedButtonMinus39)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_40, &CMuPaperDlg::OnBnClickedButtonMinus40)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_41, &CMuPaperDlg::OnBnClickedButtonMinus41)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_42, &CMuPaperDlg::OnBnClickedButtonMinus42)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_43, &CMuPaperDlg::OnBnClickedButtonMinus43)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_44, &CMuPaperDlg::OnBnClickedButtonMinus44)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_45, &CMuPaperDlg::OnBnClickedButtonMinus45)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_46, &CMuPaperDlg::OnBnClickedButtonMinus46)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_47, &CMuPaperDlg::OnBnClickedButtonMinus47)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_48, &CMuPaperDlg::OnBnClickedButtonMinus48)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_49, &CMuPaperDlg::OnBnClickedButtonMinus49)
	ON_BN_CLICKED(IDC_BUTTON_MINUS_50, &CMuPaperDlg::OnBnClickedButtonMinus50)

	ON_BN_CLICKED(IDC_BUTTON_CLEAR_1, &CMuPaperDlg::OnBnClickedButtonClear1)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_4, &CMuPaperDlg::OnBnClickedButtonClear4)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_2, &CMuPaperDlg::OnBnClickedButtonClear2)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_3, &CMuPaperDlg::OnBnClickedButtonClear3)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_5, &CMuPaperDlg::OnBnClickedButtonClear5)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_6, &CMuPaperDlg::OnBnClickedButtonClear6)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_7, &CMuPaperDlg::OnBnClickedButtonClear7)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_8, &CMuPaperDlg::OnBnClickedButtonClear8)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_9, &CMuPaperDlg::OnBnClickedButtonClear9)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR_10, &CMuPaperDlg::OnBnClickedButtonClear10)
	ON_EN_CHANGE(IDC_EDIT1, &CMuPaperDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CMuPaperDlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CMuPaperDlg::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &CMuPaperDlg::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, &CMuPaperDlg::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &CMuPaperDlg::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &CMuPaperDlg::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &CMuPaperDlg::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT9, &CMuPaperDlg::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT10, &CMuPaperDlg::OnEnChangeEdit10)
	END_MESSAGE_MAP()


// CMuPaperDlg 消息处理程序

BOOL CMuPaperDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMuPaperDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMuPaperDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMuPaperDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMuPaperDlg::OnBnClickedButtonPlus1()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[1]);
}
void CMuPaperDlg::OnBnClickedButtonPlus2()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[2]);
}
void CMuPaperDlg::OnBnClickedButtonPlus3()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[3]);
}
void CMuPaperDlg::OnBnClickedButtonPlus4()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[4]);
}
void CMuPaperDlg::OnBnClickedButtonPlus5()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[5]);
}
void CMuPaperDlg::OnBnClickedButtonPlus6()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[6]);
}
void CMuPaperDlg::OnBnClickedButtonPlus7()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[7]);
}
void CMuPaperDlg::OnBnClickedButtonPlus8()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[8]);
}
void CMuPaperDlg::OnBnClickedButtonPlus9()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[9]);
}
void CMuPaperDlg::OnBnClickedButtonPlus10()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[10]);
}
void CMuPaperDlg::OnBnClickedButtonPlus11()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[11]);
}
void CMuPaperDlg::OnBnClickedButtonPlus12()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[12]);
}
void CMuPaperDlg::OnBnClickedButtonPlus13()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[13]);
}
void CMuPaperDlg::OnBnClickedButtonPlus14()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[14]);
}
void CMuPaperDlg::OnBnClickedButtonPlus15()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[15]);
}
void CMuPaperDlg::OnBnClickedButtonPlus16()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[16]);
}
void CMuPaperDlg::OnBnClickedButtonPlus17()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[17]);
}
void CMuPaperDlg::OnBnClickedButtonPlus18()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[18]);
}
void CMuPaperDlg::OnBnClickedButtonPlus19()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[19]);
}
void CMuPaperDlg::OnBnClickedButtonPlus20()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[20]);
}
void CMuPaperDlg::OnBnClickedButtonPlus21()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[21]);
}
void CMuPaperDlg::OnBnClickedButtonPlus22()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[22]);
}
void CMuPaperDlg::OnBnClickedButtonPlus23()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[23]);
}
void CMuPaperDlg::OnBnClickedButtonPlus24()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[24]);
}
void CMuPaperDlg::OnBnClickedButtonPlus25()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[25]);
}
void CMuPaperDlg::OnBnClickedButtonPlus26()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[26]);
}
void CMuPaperDlg::OnBnClickedButtonPlus27()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[27]);
}
void CMuPaperDlg::OnBnClickedButtonPlus28()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[28]);
}
void CMuPaperDlg::OnBnClickedButtonPlus29()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[29]);
}
void CMuPaperDlg::OnBnClickedButtonPlus30()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[30]);
}
void CMuPaperDlg::OnBnClickedButtonPlus31()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[31]);
}
void CMuPaperDlg::OnBnClickedButtonPlus32()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[32]);
}
void CMuPaperDlg::OnBnClickedButtonPlus33()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[33]);
}
void CMuPaperDlg::OnBnClickedButtonPlus34()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[34]);
}
void CMuPaperDlg::OnBnClickedButtonPlus35()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[35]);
}
void CMuPaperDlg::OnBnClickedButtonPlus36()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[36]);
}
void CMuPaperDlg::OnBnClickedButtonPlus37()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[37]);
}
void CMuPaperDlg::OnBnClickedButtonPlus38()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[38]);
}
void CMuPaperDlg::OnBnClickedButtonPlus39()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[39]);
}
void CMuPaperDlg::OnBnClickedButtonPlus40()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[40]);
}
void CMuPaperDlg::OnBnClickedButtonPlus41()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[41]);
}
void CMuPaperDlg::OnBnClickedButtonPlus42()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[42]);
}
void CMuPaperDlg::OnBnClickedButtonPlus43()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[43]);
}
void CMuPaperDlg::OnBnClickedButtonPlus44()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[44]);
}
void CMuPaperDlg::OnBnClickedButtonPlus45()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[45]);
}
void CMuPaperDlg::OnBnClickedButtonPlus46()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[46]);
}
void CMuPaperDlg::OnBnClickedButtonPlus47()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[47]);
}
void CMuPaperDlg::OnBnClickedButtonPlus48()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[48]);
}
void CMuPaperDlg::OnBnClickedButtonPlus49()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[49]);
}
void CMuPaperDlg::OnBnClickedButtonPlus50()
{
	// TODO: 在此添加控件通知处理程序代码
	IncValue(m_num[50]);
}

void CMuPaperDlg::OnBnClickedButtonMinus1()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[1]);
}
void CMuPaperDlg::OnBnClickedButtonMinus2()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[2]);
}
void CMuPaperDlg::OnBnClickedButtonMinus3()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[3]);
}
void CMuPaperDlg::OnBnClickedButtonMinus4()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[4]);
}
void CMuPaperDlg::OnBnClickedButtonMinus5()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[5]);
}
void CMuPaperDlg::OnBnClickedButtonMinus6()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[6]);
}
void CMuPaperDlg::OnBnClickedButtonMinus7()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[7]);
}
void CMuPaperDlg::OnBnClickedButtonMinus8()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[8]);
}
void CMuPaperDlg::OnBnClickedButtonMinus9()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[9]);
}
void CMuPaperDlg::OnBnClickedButtonMinus10()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[10]);
}
void CMuPaperDlg::OnBnClickedButtonMinus11()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[11]);
}
void CMuPaperDlg::OnBnClickedButtonMinus12()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[12]);
}
void CMuPaperDlg::OnBnClickedButtonMinus13()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[13]);
}
void CMuPaperDlg::OnBnClickedButtonMinus14()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[14]);
}
void CMuPaperDlg::OnBnClickedButtonMinus15()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[15]);
}
void CMuPaperDlg::OnBnClickedButtonMinus16()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[16]);
}
void CMuPaperDlg::OnBnClickedButtonMinus17()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[17]);
}
void CMuPaperDlg::OnBnClickedButtonMinus18()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[18]);
}
void CMuPaperDlg::OnBnClickedButtonMinus19()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[19]);
}
void CMuPaperDlg::OnBnClickedButtonMinus20()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[20]);
}
void CMuPaperDlg::OnBnClickedButtonMinus21()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[21]);
}
void CMuPaperDlg::OnBnClickedButtonMinus22()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[22]);
}
void CMuPaperDlg::OnBnClickedButtonMinus23()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[23]);
}
void CMuPaperDlg::OnBnClickedButtonMinus24()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[24]);
}
void CMuPaperDlg::OnBnClickedButtonMinus25()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[25]);
}
void CMuPaperDlg::OnBnClickedButtonMinus26()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[26]);
}
void CMuPaperDlg::OnBnClickedButtonMinus27()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[27]);
}
void CMuPaperDlg::OnBnClickedButtonMinus28()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[28]);
}
void CMuPaperDlg::OnBnClickedButtonMinus29()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[29]);
}
void CMuPaperDlg::OnBnClickedButtonMinus30()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[30]);
}
void CMuPaperDlg::OnBnClickedButtonMinus31()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[31]);
}
void CMuPaperDlg::OnBnClickedButtonMinus32()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[32]);
}
void CMuPaperDlg::OnBnClickedButtonMinus33()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[33]);
}
void CMuPaperDlg::OnBnClickedButtonMinus34()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[34]);
}
void CMuPaperDlg::OnBnClickedButtonMinus35()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[35]);
}
void CMuPaperDlg::OnBnClickedButtonMinus36()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[36]);
}
void CMuPaperDlg::OnBnClickedButtonMinus37()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[37]);
}
void CMuPaperDlg::OnBnClickedButtonMinus38()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[38]);
}
void CMuPaperDlg::OnBnClickedButtonMinus39()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[39]);
}
void CMuPaperDlg::OnBnClickedButtonMinus40()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[40]);
}
void CMuPaperDlg::OnBnClickedButtonMinus41()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[41]);
}
void CMuPaperDlg::OnBnClickedButtonMinus42()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[42]);
}
void CMuPaperDlg::OnBnClickedButtonMinus43()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[43]);
}
void CMuPaperDlg::OnBnClickedButtonMinus44()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[44]);
}
void CMuPaperDlg::OnBnClickedButtonMinus45()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[45]);
}
void CMuPaperDlg::OnBnClickedButtonMinus46()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[46]);
}
void CMuPaperDlg::OnBnClickedButtonMinus47()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[47]);
}
void CMuPaperDlg::OnBnClickedButtonMinus48()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[48]);
}
void CMuPaperDlg::OnBnClickedButtonMinus49()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[49]);
}
void CMuPaperDlg::OnBnClickedButtonMinus50()
{
	// TODO: 在此添加控件通知处理程序代码
	DecValue(m_num[50]);
}

void CMuPaperDlg::IncValue(int& num)
{
	++num;
	CalcData();
}

void CMuPaperDlg::DecValue(int &num)
{
	if(num)
	{
		--num;
		CalcData();
	}
}

void CMuPaperDlg::OnBnClickedButtonClear1()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(1, 5);
	m_count[1] = 0;
	m_edit[1].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear2()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(6, 10);
	m_count[2] = 0;
	m_edit[2].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear3()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(11, 15);
	m_count[3] = 0;
	m_edit[3].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear4()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(16, 20);
	m_count[4] = 0;
	m_edit[4].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear5()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(21, 25);
	m_count[5] = 0;
	m_edit[5].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear6()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(26, 30);
	m_count[6] = 0;
	m_edit[6].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear7()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(31, 35);
	m_count[7] = 0;
	m_edit[7].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear8()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(36, 40);
	m_count[8] = 0;
	m_edit[8].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear9()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(41, 45);
	m_count[9] = 0;
	m_edit[9].SetWindowText(CString(""));
}

void CMuPaperDlg::OnBnClickedButtonClear10()
{
	// TODO: 在此添加控件通知处理程序代码
	ClearData(46, 50);
	m_count[10] = 0;
	m_edit[10].SetWindowText(CString(""));
}

void CMuPaperDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CMuPaperDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CMuPaperDlg::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CMuPaperDlg::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMuPaperDlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMuPaperDlg::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMuPaperDlg::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMuPaperDlg::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMuPaperDlg::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMuPaperDlg::OnEnChangeEdit10()
{
	// TODO:  如果该控件是 RICHEDIT 控件，则它将不会
	// 发送该通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CMuPaperDlg::CalcData()
{
	for(int i=1; i<=50; ++i)
	{
		int nBeg = ( i - 1 ) / 5 * 5 + 1;
		int nCount = 0;
		if( m_count[( i - 1 ) / 5 + 1] )
			nCount = m_count[( i - 1 ) / 5 + 1];
		else
			nCount = m_num[nBeg]+m_num[nBeg+1]+m_num[nBeg+2]+m_num[nBeg+3]+m_num[nBeg+4];

		if( nCount )
			m_rate[i] = m_num[i] * 1.f / nCount;
		else 
			m_rate[i] = 0;

		m_rate[i] *= 100;
		if(m_rate[i] > 100 )
			m_rate[i] = 100;
	}

	for(int i=1; i<=50; ++i)
	{
		CString strNum;
		CString strRate;

		strNum.Format(_T("%d"), m_num[i]);
		m_staticNum[i].SetWindowText(strNum);
		strRate.Format(_T("%2.2f%%"), m_rate[i]);
		m_staticRate[i].SetWindowText(strRate);
	}
}

void CMuPaperDlg::ClearData(int nBeg, int nEnd)
{
	for(int i=nBeg; i<=nEnd; ++i)
	{
		m_num[i] = 0;
	}

	CalcData();
}