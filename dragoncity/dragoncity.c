#include <gb/gb.h>
#include "socialpoint.c"
#include "socialpoint_map.c"
#include "blank.c"

void init();
void draw();

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
    set_bkg_data(0, 47, socialpoint);

    // draw a blank screen
    set_bkg_tiles(0, 0, 20, 18, blank_screen);

    // draw socialpoint logo!
    set_bkg_tiles(0, 0, 34, 10, socialpoint_map);
}

void draw()
{
    SHOW_SPRITES;
    SHOW_BKG;
}
