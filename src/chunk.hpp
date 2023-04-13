#pragma once

#include <iostream>

#include "block.hpp"

#include "raylib.h"

struct {
	// X  Y   Z
	// 16 128 16
	Block BlockArray[16][128][16];
	// Store the Terrain Mesh
	// Store the Water Mesh
	// Store the Lava(?) Mesh
	// i believe we just need to store block data, and Chunk Meshes
} Chunk;

