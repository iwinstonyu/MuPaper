// MuPaperDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMuPaperDlg 对话框
class CMuPaperDlg : public CDialog
{
// 构造
public:
	CMuPaperDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MUPAPER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	virtual BOOL PreTranslateMessage(MSG* pMsg);

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonPlus1();
	afx_msg void OnBnClickedButtonPlus2();
	afx_msg void OnBnClickedButtonPlus3();
	afx_msg void OnBnClickedButtonPlus4();
	afx_msg void OnBnClickedButtonPlus5();
	afx_msg void OnBnClickedButtonPlus6();
	afx_msg void OnBnClickedButtonPlus7();
	afx_msg void OnBnClickedButtonPlus8();
	afx_msg void OnBnClickedButtonPlus9();
	afx_msg void OnBnClickedButtonPlus10();
	afx_msg void OnBnClickedButtonPlus11();
	afx_msg void OnBnClickedButtonPlus12();
	afx_msg void OnBnClickedButtonPlus13();
	afx_msg void OnBnClickedButtonPlus14();
	afx_msg void OnBnClickedButtonPlus15();
	afx_msg void OnBnClickedButtonPlus16();
	afx_msg void OnBnClickedButtonPlus17();
	afx_msg void OnBnClickedButtonPlus18();
	afx_msg void OnBnClickedButtonPlus19();
	afx_msg void OnBnClickedButtonPlus20();
	afx_msg void OnBnClickedButtonPlus21();
	afx_msg void OnBnClickedButtonPlus22();
	afx_msg void OnBnClickedButtonPlus23();
	afx_msg void OnBnClickedButtonPlus24();
	afx_msg void OnBnClickedButtonPlus25();
	afx_msg void OnBnClickedButtonPlus26();
	afx_msg void OnBnClickedButtonPlus27();
	afx_msg void OnBnClickedButtonPlus28();
	afx_msg void OnBnClickedButtonPlus29();
	afx_msg void OnBnClickedButtonPlus30();
	afx_msg void OnBnClickedButtonPlus31();
	afx_msg void OnBnClickedButtonPlus32();
	afx_msg void OnBnClickedButtonPlus33();
	afx_msg void OnBnClickedButtonPlus34();
	afx_msg void OnBnClickedButtonPlus35();
	afx_msg void OnBnClickedButtonPlus36();
	afx_msg void OnBnClickedButtonPlus37();
	afx_msg void OnBnClickedButtonPlus38();
	afx_msg void OnBnClickedButtonPlus39();
	afx_msg void OnBnClickedButtonPlus40();
	afx_msg void OnBnClickedButtonPlus41();
	afx_msg void OnBnClickedButtonPlus42();
	afx_msg void OnBnClickedButtonPlus43();
	afx_msg void OnBnClickedButtonPlus44();
	afx_msg void OnBnClickedButtonPlus45();
	afx_msg void OnBnClickedButtonPlus46();
	afx_msg void OnBnClickedButtonPlus47();
	afx_msg void OnBnClickedButtonPlus48();
	afx_msg void OnBnClickedButtonPlus49();
	afx_msg void OnBnClickedButtonPlus50();

	afx_msg void OnBnClickedButtonMinus1();
	afx_msg void OnBnClickedButtonMinus2();
	afx_msg void OnBnClickedButtonMinus3();
	afx_msg void OnBnClickedButtonMinus4();
	afx_msg void OnBnClickedButtonMinus5();
	afx_msg void OnBnClickedButtonMinus6();
	afx_msg void OnBnClickedButtonMinus7();
	afx_msg void OnBnClickedButtonMinus8();
	afx_msg void OnBnClickedButtonMinus9();
	afx_msg void OnBnClickedButtonMinus10();
	afx_msg void OnBnClickedButtonMinus11();
	afx_msg void OnBnClickedButtonMinus12();
	afx_msg void OnBnClickedButtonMinus13();
	afx_msg void OnBnClickedButtonMinus14();
	afx_msg void OnBnClickedButtonMinus15();
	afx_msg void OnBnClickedButtonMinus16();
	afx_msg void OnBnClickedButtonMinus17();
	afx_msg void OnBnClickedButtonMinus18();
	afx_msg void OnBnClickedButtonMinus19();
	afx_msg void OnBnClickedButtonMinus20();
	afx_msg void OnBnClickedButtonMinus21();
	afx_msg void OnBnClickedButtonMinus22();
	afx_msg void OnBnClickedButtonMinus23();
	afx_msg void OnBnClickedButtonMinus24();
	afx_msg void OnBnClickedButtonMinus25();
	afx_msg void OnBnClickedButtonMinus26();
	afx_msg void OnBnClickedButtonMinus27();
	afx_msg void OnBnClickedButtonMinus28();
	afx_msg void OnBnClickedButtonMinus29();
	afx_msg void OnBnClickedButtonMinus30();
	afx_msg void OnBnClickedButtonMinus31();
	afx_msg void OnBnClickedButtonMinus32();
	afx_msg void OnBnClickedButtonMinus33();
	afx_msg void OnBnClickedButtonMinus34();
	afx_msg void OnBnClickedButtonMinus35();
	afx_msg void OnBnClickedButtonMinus36();
	afx_msg void OnBnClickedButtonMinus37();
	afx_msg void OnBnClickedButtonMinus38();
	afx_msg void OnBnClickedButtonMinus39();
	afx_msg void OnBnClickedButtonMinus40();
	afx_msg void OnBnClickedButtonMinus41();
	afx_msg void OnBnClickedButtonMinus42();
	afx_msg void OnBnClickedButtonMinus43();
	afx_msg void OnBnClickedButtonMinus44();
	afx_msg void OnBnClickedButtonMinus45();
	afx_msg void OnBnClickedButtonMinus46();
	afx_msg void OnBnClickedButtonMinus47();
	afx_msg void OnBnClickedButtonMinus48();
	afx_msg void OnBnClickedButtonMinus49();
	afx_msg void OnBnClickedButtonMinus50();

	afx_msg void OnBnClickedButtonClear1();
	afx_msg void OnBnClickedButtonClear4();
	afx_msg void OnBnClickedButtonClear2();
	afx_msg void OnBnClickedButtonClear3();
	afx_msg void OnBnClickedButtonClear5();
	afx_msg void OnBnClickedButtonClear6();
	afx_msg void OnBnClickedButtonClear7();
	afx_msg void OnBnClickedButtonClear8();
	afx_msg void OnBnClickedButtonClear9();
	afx_msg void OnBnClickedButtonClear10();

	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit10();

private:
	void IncValue(int& num);
	void DecValue(int &num);
	void CalcData();
	void ClearData(int nBeg, int nEnd);

private:
	CStatic m_staticNum[100];
	CStatic m_staticRate[100];
	CEdit m_edit[20];
	int m_num[100];
	float m_rate[100];
	int m_count[20];
};
