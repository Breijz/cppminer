# Specs
This is a list of notes / thoughts as to how to best implement stuff

## Chunks

### Chunk definition
to begin with Chunks themselves should probably be implemented as non-cubic, being 16x16x128 (128 is a random number but it should be > 100)
once cubic chunks are implemented then theyll be 16x16x16

### Chunk saving
Only chunks that arent empty should be saved, this only applies with cubic chunks as non-cubic chunks will never be empty due to bedrock

### Rendering
Fluids(Water/Lava) need to be rendered seperately from the terrain.

Both Fluids AND Terrain ought to be meshes instead of individual cubes as to improve performance.

Further away chunks should be rendered first, Raylib ought to handle this on its own.

## Blocks

### Block Usage
Most blocks do not have any functionality and are purely decorative, for this purpose we dont need to store any special information for them but can just store a reference to them,
as we dont want to duplicate the properties (ie what textures it uses, how long it takes to break, etc) each time we create a block.

### Block States
Extending from above section, the one exception to what was mentioned above is functional blocks such as Furnaces, Chests, Beds, etc, for these we need to store individual „states” they are in.

### Block/Chunk Updates
in (most) cases a block/chunk update will only be called when a single block breaks, as it is impossible for the player to directly destroy more than one block at a time.
For explosives however this will need to be changed.

Whenever a chunk update occurs we'll need to recreate the mesh the chunk uses (either water, lava, or terrain depending on which was changed), if this ends up being too taxing then we should be able
to modify the current mesh with the changes needed.
