
/* cocos2d::TMXTiledMap::getPropertiesForGID(int, cocos2d::Value**) */

undefined8 __thiscall
cocos2d::TMXTiledMap::getPropertiesForGID(TMXTiledMap *this,int param_1,Value **param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
                    /* try { // try from 00f4f17c to 0104f28b has its CatchHandler @ 00f4f064 */
  uVar2 = *(ulong *)(this + 0x358);
  if (uVar2 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar2 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar2))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    uVar3 = (ulong)param_1;
    uVar8 = 0;
    if (uVar2 != 0) {
      uVar8 = uVar3 / uVar2;
    }
    if ((uVar12 & 0xffffffff) < 2) {
      uVar7 = uVar2 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar2 <= uVar3) {
        uVar7 = uVar3 - uVar8 * uVar2;
      }
    }
    lVar6 = *(long *)(this + 0x350);
    plVar4 = *(long **)(lVar6 + uVar7 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      uVar5 = uVar2 - 1;
      do {
        uVar9 = plVar4[1];
        if (uVar9 == uVar3) {
          if ((int)plVar4[2] == param_1) {
            if ((uVar12 & 0xffffffff) < 2) {
              plVar4 = *(long **)(lVar6 + (uVar5 & uVar3) * 8);
              uVar8 = uVar5 & uVar3;
            }
            else if (uVar3 < uVar2) {
              plVar4 = *(long **)(lVar6 + uVar3 * 8);
              uVar8 = uVar3;
            }
            else {
              uVar8 = uVar3 - uVar8 * uVar2;
              plVar4 = *(long **)(lVar6 + uVar8 * 8);
            }
                    /* catch() { ... } // from try @ 00f4f174 with catch @ 00f4f278 */
            if (plVar4 != (long *)0x0) goto LAB_00f4f288;
            goto LAB_00f4f2d4;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar2 <= uVar9) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar9 / uVar2;
            }
            uVar9 = uVar9 - uVar1 * uVar2;
          }
          if (uVar9 != uVar7) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return 0;
LAB_00f4f288:
  plVar4 = (long *)*plVar4;
                    /* try { // try from 00f4f28c to 0104f307 has its CatchHandler @ 00f4f28c
                       catch() { ... } // from try @ 00f4f28c with catch @ 00f4f28c
                       catch() { ... } // from try @ 00f4f314 with catch @ 00f4f28c */
  if (plVar4 == (long *)0x0) goto LAB_00f4f2d4;
  uVar7 = plVar4[1];
  if (uVar7 != uVar3) {
    if ((uVar12 & 0xffffffff) < 2) {
      uVar7 = uVar7 & uVar5;
    }
    else if (uVar2 <= uVar7) {
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = uVar7 / uVar2;
      }
      uVar7 = uVar7 - uVar9 * uVar2;
    }
    if (uVar7 != uVar8) {
LAB_00f4f2d4:
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("unordered_map::at: key not found");
    }
    goto LAB_00f4f288;
  }
  if (*(int *)(plVar4 + 2) == param_1) {
    *param_2 = (Value *)(plVar4 + 3);
    return 1;
  }
  goto LAB_00f4f288;
}

