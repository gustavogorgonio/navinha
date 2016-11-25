#include "raylib.h"

void navinha_mover (Vector2 *nav) {

	Vector2 posNave = {400, 225};

    if (IsKeyDown(KEY_RIGHT)) posNave.x += 40.0f;
    if (IsKeyDown(KEY_LEFT)) posNave.x -= 40.0f;
    if (IsKeyDown(KEY_UP)) posNave.y -= 40.0f;
    if (IsKeyDown(KEY_DOWN)) posNave.y += 40.0f;

    *nav = posNave;

}