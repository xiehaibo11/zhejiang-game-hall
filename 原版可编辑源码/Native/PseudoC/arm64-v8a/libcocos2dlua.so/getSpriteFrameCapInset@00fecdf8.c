
/* cocos2d::Texture2D::getSpriteFrameCapInset(cocos2d::SpriteFrame*) const */

long __thiscall cocos2d::Texture2D::getSpriteFrameCapInset(Texture2D *this,SpriteFrame *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
                    /* try { // try from 00fece00 to 010ece0f has its CatchHandler @ 00fecf94 */
  lVar2 = *(long *)(this + 0x58);
  if ((param_1 != (SpriteFrame *)0x0) && (uVar3 = *(ulong *)(lVar2 + 0x18), uVar3 != 0)) {
    uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
                    /* try { // try from 00fece3c to 010ece43 has its CatchHandler @ 00fecf5c */
    uVar13 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar5 = (uVar5 ^ (ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar4 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar6 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar6 / uVar3;
    }
    if (uVar4 < 2) {
      uVar10 = uVar3 - 1 & uVar6;
    }
    else {
      uVar10 = uVar6;
                    /* try { // try from 00fece6c to 010ece9b has its CatchHandler @ 00fecf94 */
      if (uVar3 <= uVar6) {
        uVar10 = uVar6 - uVar5 * uVar3;
      }
    }
    lVar9 = *(long *)(lVar2 + 0x10);
    plVar7 = *(long **)(lVar9 + uVar10 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      uVar8 = uVar3 - 1;
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if ((SpriteFrame *)plVar7[2] == param_1) {
            if (uVar4 < 2) {
              uVar10 = uVar8 & uVar6;
                    /* try { // try from 00fecf14 to 010ecf1f has its CatchHandler @ 00fecf58 */
              plVar7 = *(long **)(lVar9 + uVar10 * 8);
            }
            else {
              uVar10 = uVar6;
              if (uVar3 <= uVar6) {
                uVar10 = uVar6 - uVar5 * uVar3;
              }
              plVar7 = *(long **)(lVar9 + uVar10 * 8);
            }
            if (plVar7 == (long *)0x0) goto LAB_00fecf70;
            goto LAB_00fecf2c;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar11 = uVar11 & uVar8;
          }
          else if (uVar3 <= uVar11) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar11 / uVar3;
            }
            uVar11 = uVar11 - uVar1 * uVar3;
          }
          if (uVar11 != uVar10) {
            return lVar2;
          }
        }
        plVar7 = (long *)*plVar7;
                    /* try { // try from 00feceac to 010eceaf has its CatchHandler @ 00fed044 */
      } while (plVar7 != (long *)0x0);
    }
  }
  return lVar2;
LAB_00fecf2c:
                    /* try { // try from 00fecf2c to 010ecf37 has its CatchHandler @ 00fecf3c */
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) goto LAB_00fecf70;
  uVar5 = plVar7[1];
                    /* try { // try from 00fecf38 to 010ed01b has its CatchHandler @ 00fecbac */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecf2c with catch @ 00fecf3c
                        */
  if (uVar5 == uVar6) {
                    /* try { // try from 00fecf20 to 010ecf2b has its CatchHandler @ 00fecf54 */
    if ((SpriteFrame *)plVar7[2] == param_1) {
      return (long)(plVar7 + 3);
    }
    goto LAB_00fecf2c;
  }
  if (uVar4 < 2) {
    uVar5 = uVar5 & uVar8;
  }
  else if (uVar3 <= uVar5) {
    uVar11 = 0;
    if (uVar3 != 0) {
      uVar11 = uVar5 / uVar3;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecf20 with catch @ 00fecf54
                        */
    uVar5 = uVar5 - uVar11 * uVar3;
  }
  if (uVar5 != uVar10) {
LAB_00fecf70:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecc54 with catch @ 00fecf74
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fecc8c with catch @ 00fecf78
                        */
    FUN_007d44e0("unordered_map::at: key not found");
  }
  goto LAB_00fecf2c;
}

