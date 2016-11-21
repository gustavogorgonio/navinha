#include "raylib.h"

int main()
{
    // Initialization

    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "navinha"); //nome na barra
    
    SetTargetFPS(60); //configura o fps

    Vector2 posicaoNave = { (float)screenWidth/2, (float)screenHeight/2 };

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update

        if (IsKeyDown(KEY_RIGHT)) posicaoNave.x += 4.0f;
        if (IsKeyDown(KEY_LEFT)) posicaoNave.x -= 4.0f;
        if (IsKeyDown(KEY_UP)) posicaoNave.y -= 4.0f;
        if (IsKeyDown(KEY_DOWN)) posicaoNave.y += 4.0f;



        // Draw

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY);

            DrawCircleV(posicaoNave, 10, MAROON);

        EndDrawing();

    }

    // De-Initialization
 
    CloseWindow();        // Close window and OpenGL context


    return 0;
}
