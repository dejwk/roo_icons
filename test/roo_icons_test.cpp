#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "roo_display/core/offscreen.h"
#include "roo_display/ui/tile.h"
#include "roo_icons/filled/18/hardware.h"

namespace roo_display {

#define B(x) \
  roo::byte { 0x##x }

void drawIcon(DrawingContext& dc, const Pictogram& icon, Color color) {
  Pictogram my_icon = icon;
  my_icon.color_mode().setColor(color);
  dc.draw(Tile(&my_icon, my_icon.anchorExtents(), kNoAlign), 0, 0);
}

TEST(RooIcons, ExampleIcon) {
  roo::byte data[9 * 18];
  Offscreen<Grayscale4> screen(18, 18, (roo::byte*)data);
  {
    DrawingContext dc(screen);
    dc.setBackgroundColor(color::Black);
    dc.clear();
    drawIcon(dc, ic_filled_18_hardware_laptop(), color::White);
  }

  EXPECT_THAT(
      data,
      ::testing::ElementsAre(
          B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), 
          B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00),
          B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), 
          B(02), B(DF), B(FF), B(FF), B(FF), B(FF), B(FF), B(FD), B(20),
          B(07), B(F7), B(77), B(77), B(77), B(77), B(77), B(7F), B(70),
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70), 
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70),
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70),
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70),
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70),
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70),
          B(07), B(F0), B(00), B(00), B(00), B(00), B(00), B(0F), B(70),
          B(05), B(FF), B(FF), B(FF), B(FF), B(FF), B(FF), B(FF), B(50),
          B(77), B(DF), B(FF), B(FF), B(FF), B(FF), B(FF), B(FD), B(77),
          B(FF), B(FF), B(FF), B(FF), B(FF), B(FF), B(FF), B(FF), B(FF),
          B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00),
          B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00),
          B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00), B(00)));
}

}  // namespace roo_display