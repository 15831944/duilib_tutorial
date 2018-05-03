#pragma once

class MainWndFrame : public WindowImplBase
{
protected:
	virtual CDuiString GetSkinFolder() override;				// ��ȡƤ���ļ���Ŀ¼������ж��Ŀ¼�����������
	virtual CDuiString GetSkinFile() override;					// ����Ƥ���ļ�����
	virtual LPCTSTR GetWindowClassName(void) const override;	// ���õ�ǰ���ڵ� class name

	virtual UILIB_RESOURCETYPE GetResourceType() const override;// ������Դ����
	virtual LPCTSTR GetResourceID() const override;				// �����ZIP��Դ��������ԴID

	virtual void InitWindow() override;							// ���ڳ�ʼ������
	virtual void Notify(TNotifyUI& msg) override;				// ֪ͨ�¼�������

	DUI_DECLARE_MESSAGE_MAP()
	virtual LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled) override;
public:
	static const LPCTSTR	kClassName;
	static const LPCTSTR	kMainWndFrame;

private:
	CButtonUI*				m_pMinBtn = nullptr;
	CButtonUI*				m_pMaxBtn = nullptr;
	CButtonUI*				m_pRestoreBtn = nullptr;
	CButtonUI*				m_pCloseBtn = nullptr;

	CListUI*				m_pMainWndList = nullptr;
	CDialogBuilder			m_pBuilder;
};
