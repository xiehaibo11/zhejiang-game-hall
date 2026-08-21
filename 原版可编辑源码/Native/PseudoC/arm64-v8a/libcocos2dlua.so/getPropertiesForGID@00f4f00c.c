
/* cocos2d::TMXTiledMap::getPropertiesForGID(int) const */

void cocos2d::TMXTiledMap::getPropertiesForGID(int param_1)

{
  ulong uVar1;
  int in_w1;
  Value *in_x8;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  uVar5 = *(ulong *)((ulong)(uint)param_1 + 0x358);
  if (uVar5 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    uVar2 = (ulong)in_w1;
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar2 / uVar5;
    }
    if ((uVar12 & 0xffffffff) < 2) {
      uVar7 = uVar5 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = uVar2 - uVar8 * uVar5;
      }
    }
    lVar6 = *(long *)((ulong)(uint)param_1 + 0x350);
                    /* catch() { ... } // from try @ 00f4f0b8 with catch @ 00f4f064
                       catch() { ... } // from try @ 00f4f17c with catch @ 00f4f064 */
    plVar3 = *(long **)(lVar6 + uVar7 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      uVar4 = uVar5 - 1;
      do {
        uVar9 = plVar3[1];
        if (uVar9 == uVar2) {
          if ((int)plVar3[2] == in_w1) {
            if ((uVar12 & 0xffffffff) < 2) {
              plVar3 = *(long **)(lVar6 + (uVar4 & uVar2) * 8);
              uVar8 = uVar4 & uVar2;
            }
            else if (uVar2 < uVar5) {
              plVar3 = *(long **)(lVar6 + uVar2 * 8);
              uVar8 = uVar2;
            }
            else {
              uVar8 = uVar2 - uVar8 * uVar5;
              plVar3 = *(long **)(lVar6 + uVar8 * 8);
            }
            if (plVar3 == (long *)0x0) goto LAB_00f4f164;
            goto LAB_00f4f120;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar4;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
                    /* try { // try from 00f4f0b0 to 0104f0b7 has its CatchHandler @ 00f4f25c */
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  cocos2d::Value::Value(in_x8);
  return;
LAB_00f4f120:
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) goto LAB_00f4f164;
  uVar7 = plVar3[1];
  if (uVar7 == uVar2) {
    if (*(int *)(plVar3 + 2) == in_w1) {
                    /* try { // try from 00f4f174 to 0104f17b has its CatchHandler @ 00f4f278 */
      cocos2d::Value::Value(in_x8,(Value *)(plVar3 + 3));
      return;
    }
    goto LAB_00f4f120;
  }
  if ((uVar12 & 0xffffffff) < 2) {
    uVar7 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar7) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar7 / uVar5;
    }
    uVar7 = uVar7 - uVar9 * uVar5;
  }
  if (uVar7 != uVar8) {
LAB_00f4f164:
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("unordered_map::at: key not found");
  }
  goto LAB_00f4f120;
}

