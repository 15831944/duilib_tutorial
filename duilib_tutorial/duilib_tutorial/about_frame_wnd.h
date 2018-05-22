#pragma once
class AboutFrameWnd : public WindowImplBase
{
protected:
	virtual CDuiString GetSkinFolder() override;				// ��ȡƤ���ļ���Ŀ¼������ж��Ŀ¼�����������
	virtual CDuiString GetSkinFile() override;					// ����Ƥ���ļ�����
	virtual LPCTSTR GetWindowClassName(void) const override;	// ���õ�ǰ���ڵ� class name

	virtual UILIB_RESOURCETYPE GetResourceType() const override;// ������Դ����
	virtual LPCTSTR GetResourceID() const override;				// �����ZIP��Դ��������ԴID

	virtual void InitWindow() override;							// ���ڳ�ʼ������
	virtual void Notify(TNotifyUI& msg) override;				// ֪ͨ�¼�������

public:
	static const LPCTSTR	kClassName;
	static const LPCTSTR	kAboutWndFrame;

private:
	CButtonUI*				m_pCloseBtn = nullptr;
};

