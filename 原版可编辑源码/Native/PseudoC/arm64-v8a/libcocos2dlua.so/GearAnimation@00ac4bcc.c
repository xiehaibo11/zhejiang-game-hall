
/* fairygui::GearAnimation::GearAnimation(fairygui::GObject*) */

void __thiscall fairygui::GearAnimation::GearAnimation(GearAnimation *this,GObject *param_1)

{
                    /* try { // try from 00ac4bd4 to 00bc4c47 has its CatchHandler @ 00ac4bd4
                       catch() { ... } // from try @ 00ac4bd4 with catch @ 00ac4bd4
                       catch() { ... } // from try @ 00ac4c54 with catch @ 00ac4bd4 */
  GearBase::GearBase((GearBase *)this,param_1);
  this[0x48] = (GearAnimation)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined ***)this = &PTR__GearAnimation_016aad80;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}

