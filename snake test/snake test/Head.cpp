#include "Head.h"
#include <conio.h>
#include "ConsoleEngineCore.h"

Head::Head()
{
    SetChar('H');
    SetPos({ 0,0 });
}

Head::~Head()
{
}

void Head::Tick(float _Time)
{
    ConsoleEngineCore::Screen.SetPixel(GetPos(), 'H');

    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };


    bool isLeftToRight = (lastMovePos == int4::Left && Select == 'd');
    bool isRightToLeft = (lastMovePos == int4::Right && Select == 'a');
    bool isUpToDown = (lastMovePos == int4::Up && Select == 's');
    bool isDownToUp = (lastMovePos == int4::Down && Select == 'w');

    switch (Select)
    {
    case 'a':
        if (!isRightToLeft)
        {
            MovePos = int4::Left;
        }
        break;
    case 'd':
        if (!isLeftToRight)
        {
            MovePos = int4::Right;
        }
        break;
    case 'w':
        if (!isDownToUp)
        {
            MovePos = int4::Up;
        }
        break;
    case 's':
        if (!isUpToDown)
        {
            MovePos = int4::Down;
        }
        break;
    case 'q':
        ConsoleEngineCore::EngineOff();
        break;
    default:
        break;
    }
    if (true)
        SetPos(GetPos() + MovePos);

    lastMovePos = MovePos;

}


    







