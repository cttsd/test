// Snake.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include "ConsoleEngineCore.h"
#include "Head.h"

int main()
{
    ConsoleEngineCore::CreateObject<Head>();


    // �� �Լ����� ������ �����ؾ� �մϴ�.
    ConsoleEngineCore::EngineStart(int4{ 3, 3 });
}
