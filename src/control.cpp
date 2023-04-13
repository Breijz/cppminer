#include <iostream>

#include "raylib.h"

#include "control.h"

using namespace std;

void updatePosition(Vector3 &v3Position, Vector3 &v3Rotation, float &fZoom ) {

	if(IsKeyReleased(KEY_SPACE) == true) {
		v3Position.y += 1.0f;
	} else if(IsKeyReleased(KEY_LEFT_CONTROL) == true) {
		v3Position.y -= 1.0f;
	}

	if(IsKeyReleased(KEY_W) == true) {
		v3Position.z += 1.0f;
	}

	if(IsKeyReleased(KEY_S) == true) {
		v3Position.z -= 1.0f;
	}

	if(IsKeyReleased(KEY_A) == true) {
		v3Position.x += 1.0f;
	}

	if(IsKeyReleased(KEY_D) == true) {
		v3Position.x -= 1.0f;
	}

	if(IsKeyReleased(KEY_Z) == true) {
		if(fZoom == 0.0f) {
			fZoom = 1.0f;
		} /*else if(fZoom == 1.0f) {
			fZoom = 0.0f;
		}*/ else {
			fZoom = 0.0f;
		}
	}
}
