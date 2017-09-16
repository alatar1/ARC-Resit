#include <genesis.h>

int main()
{

	/*
	const u32 tile[8] =
		{
			0x00111100,
			0x01144110,
			0x11244211,
			0x11244211,
			0x11222211,
			0x11222211,
			0x01122110,
			0x00111100};

	//PAL2 = green pal
	// 0 = low priority
	// 1 = vflip
	// 0 = no hflip
	// 1 = tile 1
	VDP_setTileMapXY(BPLAN, TILE_ATTR_FULL(PAL2, 0, 1, 0, 1), 6, 5);
*/
	VDP_drawText("Hello ma bite World!", 10, 13);

	while (1)
	{
		//read input
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		VDP_waitVSync();
	}
	return (0);
}
