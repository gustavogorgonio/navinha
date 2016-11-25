#include "raylib.h"
#include "navinha_mover.c"
#include "navinha_mover.h"

int main()
{
    // Initialization

    int screenWidth = 800;
    int screenHeight = 450;

    Vector2 posicaoNave = { (float)screenWidth/2, (float)screenHeight/2 };

    Vector2 *nav;
    nav = &posicaoNave;

    InitWindow(screenWidth, screenHeight, "Star Treko"); //nome na barra
    SetTargetFPS(60); //configura o fps

    // Main game loop
    while (!WindowShouldClose()) {    // Detect window close button or ESC key

        navinha_mover(nav); //move a nave

        // Draw

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawCircleV(posicaoNave, 10, MAROON);

        EndDrawing();

    }

    // De-Initialization
 
    CloseWindow();        // Close window and OpenGL context


    return 0;
}