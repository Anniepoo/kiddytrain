#include <raylib.h>
int width = 500;
int hight = 500;
int state;
int main()
{
    InitWindow(width,hight,"test window");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        if(state == 1 && IsKeyDown(KEY_SPACE))
        {
            state = 2;
        }
        BeginDrawing();
        if(state == 1)
        {
            DrawText("press space",250,250,5,GRAY);
        }
        if(state == 2)
        {
            DrawRectangle(250,250,10,10,RED);
        }
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
}
