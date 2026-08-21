
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeKeyEvent
               (undefined8 param_1,undefined8 param_2,int param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  EventKeyboard aEStack_78 [64];
  long local_38;
  ulong uVar12;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::Director::getInstance();
  if (DAT_01781cd8 != 0) {
    uVar3 = CONCAT17(POPCOUNT((char)(DAT_01781cd8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_01781cd8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_01781cd8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_01781cd8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_01781cd8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_01781cd8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_01781cd8 >> 8)),POPCOUNT((char)DAT_01781cd8)))
                                                  )))));
    uVar11 = NEON_uaddlv(uVar3,1);
    uVar12 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar11);
    uVar5 = (ulong)param_3;
    uVar9 = 0;
    if (DAT_01781cd8 != 0) {
      uVar9 = uVar5 / DAT_01781cd8;
    }
    if ((uVar12 & 0xffffffff) < 2) {
      uVar8 = DAT_01781cd8 - 1 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (DAT_01781cd8 <= uVar5) {
        uVar8 = uVar5 - uVar9 * DAT_01781cd8;
      }
    }
    plVar6 = *(long **)(DAT_01781cd0 + uVar8 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      uVar7 = DAT_01781cd8 - 1;
      do {
        uVar10 = plVar6[1];
        if (uVar10 == uVar5) {
          if ((int)plVar6[2] == param_3) {
            if ((uVar12 & 0xffffffff) < 2) {
              plVar6 = *(long **)(DAT_01781cd0 + (uVar7 & uVar5) * 8);
              uVar9 = uVar7 & uVar5;
            }
            else if (uVar5 < DAT_01781cd8) {
              plVar6 = *(long **)(DAT_01781cd0 + uVar5 * 8);
              uVar9 = uVar5;
            }
            else {
              uVar9 = uVar5 - uVar9 * DAT_01781cd8;
              plVar6 = *(long **)(DAT_01781cd0 + uVar9 * 8);
            }
            if (plVar6 == (long *)0x0) goto LAB_007cf3fc;
            goto LAB_007cf3b0;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar10 = uVar10 & uVar7;
          }
          else if (DAT_01781cd8 <= uVar10) {
            uVar1 = 0;
            if (DAT_01781cd8 != 0) {
              uVar1 = uVar10 / DAT_01781cd8;
            }
            uVar10 = uVar10 - uVar1 * DAT_01781cd8;
          }
          if (uVar10 != uVar8) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  uVar3 = 0;
LAB_007cf344:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
LAB_007cf3b0:
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) goto LAB_007cf3fc;
  uVar8 = plVar6[1];
  if (uVar8 == uVar5) {
    if (*(int *)(plVar6 + 2) == param_3) {
      cocos2d::EventKeyboard::EventKeyboard
                (aEStack_78,*(undefined4 *)((long)plVar6 + 0x14),param_4 != '\0');
      lVar4 = cocos2d::Director::getInstance();
      cocos2d::EventDispatcher::dispatchEvent
                (*(EventDispatcher **)(lVar4 + 0xb0),(Event *)aEStack_78);
      cocos2d::Event::~Event((Event *)aEStack_78);
      uVar3 = 1;
      goto LAB_007cf344;
    }
    goto LAB_007cf3b0;
  }
  if ((uVar12 & 0xffffffff) < 2) {
    uVar8 = uVar8 & uVar7;
  }
  else if (DAT_01781cd8 <= uVar8) {
    uVar10 = 0;
    if (DAT_01781cd8 != 0) {
      uVar10 = uVar8 / DAT_01781cd8;
    }
    uVar8 = uVar8 - uVar10 * DAT_01781cd8;
  }
  if (uVar8 != uVar9) {
LAB_007cf3fc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  goto LAB_007cf3b0;
}

