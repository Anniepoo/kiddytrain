#include <raylib.h>
int width = 500;
int hight = 500;
int main()
{
    InitWindow(width,hight,"test window");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        DrawRectangle(250,250,10,10,RED);
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
}
