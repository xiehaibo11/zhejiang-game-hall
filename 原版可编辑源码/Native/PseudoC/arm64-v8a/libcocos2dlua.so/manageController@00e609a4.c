
/* cocos2d::PURibbonTrail::manageController() */

void __thiscall cocos2d::PURibbonTrail::manageController(PURibbonTrail *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 00e609a4 to 00f609b3 has its CatchHandler @ 00e60a9c */
  this[0x1d0] = (PURibbonTrail)0x0;
  if (*(ulong *)(this + 0x10) != 0) {
    lVar1 = 0;
                    /* try { // try from 00e609c8 to 00f609d7 has its CatchHandler @ 00e60a3c */
    uVar2 = 0;
    do {
                    /* try { // try from 00e609d8 to 00f60aeb has its CatchHandler @ 00e608ec */
      if ((((*(float *)(*(long *)(this + 0x1b0) + uVar2 * 4) != 0.0) ||
           (lVar3 = *(long *)(this + 0x180), *(float *)(lVar3 + lVar1) != Vec4::ZERO)) ||
          (*(float *)(lVar3 + lVar1 + 4) != DAT_0178fbb4)) ||
         ((*(float *)(lVar3 + lVar1 + 8) != DAT_0178fbb8 ||
          (*(float *)(lVar3 + lVar1 + 0xc) != DAT_0178fbbc)))) {
        this[0x1d0] = (PURibbonTrail)0x1;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(this + 0x10));
  }
  return;
}

