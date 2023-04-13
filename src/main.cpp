#include <iostream>

//#include "chunk.hpp"
#include "control.h"

using namespace std;

int main(void) {
	InitWindow(1920, 1080, "cppcrafter");

	Camera Cam3D;

	Vector3 position = (Vector3){0.0, 1.57, 0.0};
	Vector3 rotation = (Vector3){0.0, 0.0, 0.0};
	float fZoom = 0.0f;
	Cam3D.target = (Vector3){0.0, 1.57, 0.0};
	Cam3D.up = (Vector3){0.0, 1.0, 0.0};
	Cam3D.projection = CAMERA_PERSPECTIVE;
	Cam3D.fovy = 120;

	DisableCursor();
	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		updatePosition(position, rotation, fZoom);	
		UpdateCameraPro(&Cam3D, position, rotation, fZoom);
		
		BeginDrawing();

			ClearBackground(RAYWHITE);

			BeginMode3D(Cam3D);

				DrawGrid(10, 1.0f);
				DrawCube((Vector3){0.0f, 0.0f, 0.0f}, 1.0, 1.0, 1.0, DARKGREEN);

			EndMode3D();

		EndDrawing();
	}

	return EXIT_SUCCESS;
}
