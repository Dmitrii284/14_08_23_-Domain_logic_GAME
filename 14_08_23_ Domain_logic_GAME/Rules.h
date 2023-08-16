#ifndef _RULES_H_
#define _RULES_H_

namespace GameLocic {

	class Rules // Правила
	{
	private:

	public:
		// дать Колоду + проверить ход

	};

	class Fool : public Rules // Игра Дурак
	{
	private:
		int m_numFool{ 36 };
	public:
		// Шестерки всех мастей Семерки всех мастей() Создать Шаблон карт 24,36,54 карты. И выводить сюда.
	};

	class Pharaon : public Rules // Игра Фараон
	{
	private:
		int m_numPharaon{ 54 };
	public:

	};
}

#endif // _RULES_H_