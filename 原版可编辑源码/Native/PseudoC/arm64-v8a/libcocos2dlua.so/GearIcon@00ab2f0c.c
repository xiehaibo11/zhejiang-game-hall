
/* fairygui::GearIcon::GearIcon(fairygui::GObject*) */

void __thiscall fairygui::GearIcon::GearIcon(GearIcon *this,GObject *param_1)

{
  GearBase::GearBase((GearBase *)this,param_1);
                    /* try { // try from 00ab2f30 to 00bb2f63 has its CatchHandler @ 00ab3030 */
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined ***)this = &PTR__GearIcon_016aa278;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}

