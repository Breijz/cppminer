#pragma once

#include <iostream>

#include "block.hpp"

#include "raylib.h"


// NOTE: Filler, may or may not be used and as a result shouldnt be used in code.
enum {
	BT_air,
	BT_grass,
} BlockType;



struct {
	BlockType Type = BT_air;

	// Never access either of these variables if Type isnt checked, for example if the block is dirt then one doesnt used State, and only used Properties.
	// If the block is a Furnace then one does use both, State AND Properties, 
	BlockState &State;			// NOTE: Used only for interactive blocks (For example Furnaces, Chests, etc)
	nonActBlockProperties &Properties;	// NOTE: Used only for non-interactive blocks (For example Wood, Stone, etc)
} Block;


// NOTE: This should only be used for ActBlocks
struct {
	//ActBlockType Type;
	//bool bTransparent = false;	// To be used for stuff that one can see through, for example Glass
	//uint uBreakTime = 0;		// Time (in ticks) it should take to break the block. for now we have it at 0 since we dont got a tick system
	// TODO: Create a array(size: 6) of pointers to the various textures used for the sides of the block
	// TODO: Create a array of light values for each side here
} BlockState;


// NOTE: This should only be used for nonActBlocks
struct {
	bool bTransparent = false;	// To be used for stuff that one can see through, for example Glass
	uint uBreakTime = 0;		// Time (in ticks) it should take to break the block. for now we have it at 0 since we dont got a tick system
	// TODO: Create a array(size: 6) of pointers to the various textures used for the sides of the block
	// TODO: Create a array of light values for each side here
} nonActBlockProperties;
