
/* cocos2d::PURibbonTrail::setWidthChange(unsigned long, float) */

void __thiscall
cocos2d::PURibbonTrail::setWidthChange(PURibbonTrail *this,ulong param_1,float param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x1b0);
  *(float *)(lVar2 + param_1 * 4) = param_2;
  lVar3 = *(long *)(this + 0x10);
  this[0x1d0] = (PURibbonTrail)0x0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
                    /* catch() { ... } // from try @ 00e609a4 with catch @ 00e60a9c */
                    /* catch() { ... } // from try @ 00e60984 with catch @ 00e60aa0 */
                    /* catch() { ... } // from try @ 00e60960 with catch @ 00e60aa4 */
      if ((((*(float *)(lVar2 + lVar4) != 0.0) ||
           (lVar5 = *(long *)(this + 0x180), *(float *)(lVar5 + lVar4 * 4) != Vec4::ZERO)) ||
          (lVar1 = lVar5 + lVar4 * 4, *(float *)(lVar1 + 4) != DAT_0178fbb4)) ||
         ((*(float *)(lVar1 + 8) != DAT_0178fbb8 ||
          (*(float *)(lVar5 + lVar4 * 4 + 0xc) != DAT_0178fbbc)))) {
                    /* catch() { ... } // from try @ 00e60954 with catch @ 00e60ac0
                       catch() { ... } // from try @ 00e60974 with catch @ 00e60ac0 */
        this[0x1d0] = (PURibbonTrail)0x1;
        return;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 4;
    } while (lVar3 != 0);
  }
  return;
}

