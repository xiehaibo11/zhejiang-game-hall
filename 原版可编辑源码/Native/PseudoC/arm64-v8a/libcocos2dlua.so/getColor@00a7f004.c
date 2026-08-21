
/* fairygui::GLoader::getColor() const */

ulong __thiscall fairygui::GLoader::getColor(GLoader *this)

{
  uint3 *puVar1;
  
                    /* try { // try from 00a7f004 to 00b7f01f has its CatchHandler @ 00a7f09c */
  puVar1 = (uint3 *)(**(code **)(**(long **)(this + 0x220) + 0x4b0))();
                    /* try { // try from 00a7f020 to 00b7f0d3 has its CatchHandler @ 00a7efb8 */
  return (ulong)*puVar1;
}

