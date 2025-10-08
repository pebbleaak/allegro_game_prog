#include "allegro.h"
#include <stdlib.h>

int main(void) {

  allegro_init();
  install_keyboard();

  set_color_depth(32);

  if (set_gfx_mode(GFX_SAFE, 640, 480, 0, 0) != 0) {

    allegro_message("Unable to set graphics mode!\n%s", allegro_error);
    return 1;
  }

  clear_to_color(screen, makecol(0, 0, 0));
  textout_ex(screen, font, "Hello World!", 10, 10, makecol(255, 255, 255), -1);
  textout_ex(screen, font, "Press Escape to quit.", 10, 25,
             makecol(255, 255, 255), -1);
  while (!key[KEY_ESC]) {
    rest(10);
  }

  return 0;
}
END_OF_MAIN()
