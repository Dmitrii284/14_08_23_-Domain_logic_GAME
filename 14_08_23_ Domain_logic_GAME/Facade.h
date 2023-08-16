#ifndef _FACADE_H_
#define _FACADE_H_

#include"Dealer.h"
#include"Deck.h"


namespace GameLocic {

    class Facade // Фасад делаем для того чтобы оградить информацию Крупье от остальных и чтобы он мог считывать информацию 
        // Он должен знать Добавить игроа + Начать игру. Что с игрокам (комп или живой) Можем позволить набор void методов (Сделать одно второе третее)
    {
    private:      
      Dealler* m_dealler;
      Deck* m_deck;     
    public:
     auto GetDealler() { return m_dealler; }
     auto GetDeck() { return m_deck; }

    };
}

#endif // !_FACADE_H_

/*
* 
* myclass.h:

class MyClass
{
public:
    virtual void method() = 0;
};
* 
* 
* 
* myclass_facade.h:
#include "myclass.h"

class MyClassFacade : public MyClass
{
private:
    MyClass *impl;

public:
    // Конструктор принимает указатель на экземпляр базового класса
    MyClassFacade(const MyClass &impl) : impl(&impl)
    {
    }

    // Вызывает метод базового класса через указатель
    void method() override
    {
        impl->method();
    }
};
*/