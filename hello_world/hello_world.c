#include <gb/gb.h>
#include "tileset.c"

void init();
void draw();

// this tilemap contains our "hello world"
unsigned char hello_world_map[] =
{
    0x18,0x15,0x1C,0x1C,0x1F,
    0x27,0x1F,0x22,0x1C,0x14,
};

void main()
{
    init();

    while(1) {
        draw();
        wait_vbl_done();
    }
}

// use this function to initialize various things in the GameBoy
// like the display, sound, serial port, sprites, tiles, etc.
void init()
{
    DISPLAY_ON;

    // load alphabet tilemap into memory
    set_bkg_data(0, 47, alphabet);

    // draw a blank screen
    set_bkg_tiles(0, 0, 20, 18, blank_screen);

    // draw hello world!
    set_bkg_tiles(7, 7, 5, 2, hello_world_map);
}

void draw()
{
    SHOW_SPRITES;
    SHOW_BKG;
}
