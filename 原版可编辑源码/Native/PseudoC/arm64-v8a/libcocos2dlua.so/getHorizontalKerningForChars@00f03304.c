
/* cocos2d::FontFNT::getHorizontalKerningForChars(char32_t, char32_t) const */

undefined4 __thiscall
cocos2d::FontFNT::getHorizontalKerningForChars(FontFNT *this,wchar32 param_1,wchar32 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar3 = *(ulong *)(*(long *)(this + 0x28) + 0x88);
  if (uVar3 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    uVar1 = CONCAT44(param_1,param_2);
    if ((uVar9 & 0xffffffff) < 2) {
                    /* try { // try from 00f0334c to 01003363 has its CatchHandler @ 00f03644 */
      uVar4 = uVar3 - 1 & uVar1;
    }
    else {
                    /* try { // try from 00f03330 to 01003333 has its CatchHandler @ 00f03624 */
      uVar4 = uVar1;
      if (uVar3 <= uVar1) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar1 / uVar3;
        }
        uVar4 = uVar1 - uVar4 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(*(long *)(this + 0x28) + 0x80) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar1) {
          if (plVar5[2] == uVar1) {
                    /* try { // try from 00f033c4 to 010033d3 has its CatchHandler @ 00f03648 */
            return (int)plVar5[3];
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar3 - 1;
          }
          else if (uVar3 <= uVar6) {
                    /* try { // try from 00f0339c to 010033bf has its CatchHandler @ 00f0364c */
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar2 * uVar3;
          }
          if (uVar6 != uVar4) {
            return 0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return 0;
}

