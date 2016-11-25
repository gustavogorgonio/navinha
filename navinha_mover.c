#include "raylib.h"

void navinha_mover (Vector2 *nav, Vector2 posicaoNave) {

    if (IsKeyDown(KEY_RIGHT)) posicaoNave.x += 4.0f;
    if (IsKeyDown(KEY_LEFT)) posicaoNave.x -= 4.0f;
    if (IsKeyDown(KEY_UP)) posicaoNave.y -= 4.0f;
	if (IsKeyDown(KEY_DOWN)) posicaoNave.y += 4.0f;

	*nav = posicaoNave;

}