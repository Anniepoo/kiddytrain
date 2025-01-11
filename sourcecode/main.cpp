#include <raylib.h>
#include "vector"
int width = 500;
int hight = 500;
int titlescreenstate;

struct kid
{
    int x;
    int y;
    int strenght;
    int animalid;
    int stationid;
    int happiness;
    int animframe;
    int animdesync;
};

struct traincar
{
    int x;
    int y;
    int animframe;
    int rotation;
};

int main()
{
    InitWindow(width,hight,"test window");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        if(titlescreenstate == 1 && IsKeyDown(KEY_SPACE))
        {
            titlescreenstate = 2;
        }
        BeginDrawing();
        if(titlescreenstate == 1)
        {
            DrawText("press space",250,250,5,GRAY);
        }
        if(titlescreenstate == 2)
        {
            DrawRectangle(250,250,10,10,RED);
        }
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
}
