#include "raylib.h"
#include "vector"

int globalhappinessmin;
int width = 500;
int hight = 500;
int titlescreenstate;

struct kid
{
    int x;
    int y;
    int strenght;
    int animalid;
    int targstatid;
    int ridestatid;
    int happiness;
    int anim;
    int animd;
};

struct traincar
{
    int x;
    int y;
    int animframe;
    int rotation;
};

struct tile
{
    int x;
    int y;
    int id;
    int anim;
};

std::vector <tile> tilelist;
void tiledraw(std::vector <tile> todraw)
{
    int skip;
    int best;
    int check;
    int checking;
    int drawmax = todraw.size() + 1;
    std::vector<int> skiplist;
    while(drawmax > 0)
    {
        best = 0;
        check = drawmax;
        while(check > 0)
        {
            checking = check;
            skip = skiplist.size();
            while(skip > 0)
            {
                if(checking == skiplist[skip])
                {
                    checking -= 1;
                    skip = 0;
                }
            }
            if(checking == check)
            {
                if(tilelist[check].y < tilelist[best].y)
                {
                    best = check;
                }
                check -= 1;
            }
        }
        drawmax -= 1;
    }
}
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
