#include <iostream>
using namespace std;
enum eDir {STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6};
class cBall
{
private:
    int x, y;
    int originalX, originalY;
     eDir direction;
public:
    cBall(int posX, int posY)
    {
        originalX = posX;
        originalY = posY;
        x = posX; y = posY;
        direction = STOP;
    }
    void Reset()
    {
        x = originalX; y = originalY;
        direction =  STOP;
    }
    void changeDirection(eDir d)
    {
        direction = d;
    }
    void randomDirection()
    {
        direction = (eDir)((rand() %6) + 1);
    }
    inline int getX() { return x; }
    inline int getY() { return x; }
    inline eDir getDirection() { return direction; }
    void Move()
    {
        switch(direction)
        {
        case STOP:
             break;
        case LEFT:
             x--;
             break;
        }
    }
};

int main()
{

    return 0;
}