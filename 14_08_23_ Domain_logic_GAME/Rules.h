#ifndef _RULES_H_
#define _RULES_H_

namespace GameLocic {

	class Rules // �������
	{
	private:

	public:
		// ���� ������ + ��������� ���

	};

	class Fool : public Rules // ���� �����
	{
	private:
		int m_numFool{ 36 };
	public:
		// �������� ���� ������ ������� ���� ������() ������� ������ ���� 24,36,54 �����. � �������� ����.
	};

	class Pharaon : public Rules // ���� ������
	{
	private:
		int m_numPharaon{ 54 };
	public:

	};
}

#endif // _RULES_H_