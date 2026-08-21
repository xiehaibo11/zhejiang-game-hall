
/* fairygui::GRoot::GRoot() */

void __thiscall fairygui::GRoot::GRoot(GRoot *this)

{
  GComponent::GComponent((GComponent *)this);
                    /* try { // try from 00a885e0 to 00b886bb has its CatchHandler @ 00a896b0 */
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined ***)this = &PTR__GRoot_016a65f8;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  return;
}

