#ifndef _FACADE_H_
#define _FACADE_H_

#include"Dealer.h"
#include"Deck.h"


namespace GameLocic {

    class Facade // ����� ������ ��� ���� ����� �������� ���������� ������ �� ��������� � ����� �� ��� ��������� ���������� 
        // �� ������ ����� �������� ����� + ������ ����. ��� � ������� (���� ��� �����) ����� ��������� ����� void ������� (������� ���� ������ ������)
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
    // ����������� ��������� ��������� �� ��������� �������� ������
    MyClassFacade(const MyClass &impl) : impl(&impl)
    {
    }

    // �������� ����� �������� ������ ����� ���������
    void method() override
    {
        impl->method();
    }
};
*/