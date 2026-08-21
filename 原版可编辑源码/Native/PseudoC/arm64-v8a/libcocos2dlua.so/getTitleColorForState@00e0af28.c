
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::extension::ControlButton::getTitleColorForState(cocos2d::extension::Control::State)
   const */

uint __thiscall
cocos2d::extension::ControlButton::getTitleColorForState(ControlButton *this,int param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ulong *)(this + 0x3d8);
  if (uVar3 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (ulong)param_2;
    if (uVar4 < 2) {
      uVar6 = uVar3 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0x3d0) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == param_2) {
            uVar1 = *(undefined1 *)((long)plVar7 + 0x16);
            uVar9 = *(undefined2 *)((long)plVar7 + 0x14);
            goto LAB_00e0b06c;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar2 * uVar3;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    uVar5 = (ulong)(uVar3 != 0 && uVar3 - 1 != 0);
    if (uVar4 < 2) {
      uVar5 = (ulong)~(uint)uVar3 & 1;
    }
    plVar7 = *(long **)(*(long *)(this + 0x3d0) + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (uint)_WHITE;
          }
          uVar6 = plVar7[1];
          if (uVar6 != 1) break;
          if (*(int *)(plVar7 + 2) == 1) {
            uVar1 = *(undefined1 *)((long)plVar7 + 0x16);
            uVar9 = *(undefined2 *)((long)plVar7 + 0x14);
LAB_00e0b06c:
            return (uint)CONCAT12(uVar1,uVar9);
          }
        }
        if (uVar4 < 2) {
          uVar6 = uVar6 & uVar3 - 1;
        }
        else if (uVar3 <= uVar6) {
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = uVar6 / uVar3;
          }
          uVar6 = uVar6 - uVar8 * uVar3;
        }
      } while (uVar6 == uVar5);
    }
  }
  return (uint)_WHITE;
}

