
/* cocos2d::PUNoise3D::PUNoise3D() */

void __thiscall cocos2d::PUNoise3D::PUNoise3D(PUNoise3D *this)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 00e40a48 to 00f40ad7 has its CatchHandler @ 00e40a48
                       catch(type#1 @ 00000000) { ... } // from try @ 00e40a48 with catch @ 00e40a48
                        */
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(undefined2 *)(this + 0x808) = 2;
  *(long *)(this + 0x818) = auVar1._8_8_;
  *(long *)(this + 0x810) = auVar1._0_8_;
  *(undefined ***)this = &PTR__PUNoise3D_016f1fb0;
  *(undefined8 *)(this + 0x820) = 0x3ff0000000000000;
  return;
}

