
/* cocos2d::LabelBMFont::setOpacityModifyRGB(bool) */

void __thiscall cocos2d::LabelBMFont::setOpacityModifyRGB(LabelBMFont *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(**(long **)(this + 800) + 0x4e0))(*(long **)(this + 800),param_1);
  puVar1 = *(undefined8 **)(this + 0x180);
                    /* try { // try from 00f11e3c to 01011f3b has its CatchHandler @ 00f11e3c
                       catch() { ... } // from try @ 00f11e3c with catch @ 00f11e3c
                       catch() { ... } // from try @ 00f11f84 with catch @ 00f11e3c
                       catch() { ... } // from try @ 00f12128 with catch @ 00f11e3c */
  for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x4e0))((long *)*puVar2,param_1);
  }
  return;
}

