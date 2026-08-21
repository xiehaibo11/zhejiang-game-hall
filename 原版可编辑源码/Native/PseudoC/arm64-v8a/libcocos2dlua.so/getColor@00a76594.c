
/* fairygui::GImage::getColor() const */

ulong __thiscall fairygui::GImage::getColor(GImage *this)

{
  uint3 *puVar1;
  
                    /* try { // try from 00a76598 to 00b765c7 has its CatchHandler @ 00a76510 */
  puVar1 = (uint3 *)(**(code **)(**(long **)(this + 0x1d8) + 0x4b0))();
  return (ulong)*puVar1;
}

