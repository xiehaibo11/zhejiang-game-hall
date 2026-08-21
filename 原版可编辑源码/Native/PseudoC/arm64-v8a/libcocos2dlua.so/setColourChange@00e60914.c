
/* cocos2d::PURibbonTrail::setColourChange(unsigned long, float, float, float, float) */

void __thiscall
cocos2d::PURibbonTrail::setColourChange
          (PURibbonTrail *this,ulong param_1,float param_2,float param_3,float param_4,float param_5
          )

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  
  lVar3 = *(long *)(this + 0x180);
  pfVar4 = (float *)(lVar3 + param_1 * 0x10);
  *pfVar4 = param_2;
  pfVar4[1] = param_3;
  pfVar4[2] = param_4;
  pfVar4[3] = param_5;
  lVar1 = *(long *)(this + 0x10);
  this[0x1d0] = (PURibbonTrail)0x0;
  if (lVar1 != 0) {
    pfVar2 = *(float **)(this + 0x1b0);
    pfVar4 = (float *)(lVar3 + 8);
    do {
                    /* try { // try from 00e60954 to 00f6095b has its CatchHandler @ 00e60ac0 */
                    /* try { // try from 00e60960 to 00f60963 has its CatchHandler @ 00e60aa4 */
                    /* try { // try from 00e60974 to 00f6097f has its CatchHandler @ 00e60ac0 */
      if ((((*pfVar2 != 0.0) || (pfVar4[-2] != Vec4::ZERO)) || (pfVar4[-1] != DAT_0178fbb4)) ||
         ((*pfVar4 != DAT_0178fbb8 || (pfVar4[1] != DAT_0178fbbc)))) {
        this[0x1d0] = (PURibbonTrail)0x1;
        return;
      }
                    /* try { // try from 00e60984 to 00f6099f has its CatchHandler @ 00e60aa0 */
      lVar1 = lVar1 + -1;
      pfVar4 = pfVar4 + 4;
      pfVar2 = pfVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

