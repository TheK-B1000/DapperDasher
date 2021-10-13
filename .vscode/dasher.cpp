#include "raylib.h"

int main()
{
    int windowWidth = 512;
    int windowHeight = 380;
    InitWindow(windowWidth, windowHeight, "Dapper Dasher!");

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        // start drawing
        BeginDrawing();
        ClearBackground(WHITE);

        // stop drawing
        EndDrawing();
    }
    CloseWindow();
    return 0;
}