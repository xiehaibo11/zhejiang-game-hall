
/* cocos2d::EventDispatcher::pauseEventListenersForTarget(cocos2d::Node*, bool) */

void __thiscall
cocos2d::EventDispatcher::pauseEventListenersForTarget
          (EventDispatcher *this,Node *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  uVar5 = *(ulong *)(this + 0x80);
  if (uVar5 != 0) {
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar15 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar8 = (uVar7 ^ (ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar5 - 1 & uVar8;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
                    /* catch() { ... } // from try @ 00f9dee4 with catch @ 00f9e008 */
        uVar9 = uVar8 - uVar9 * uVar5;
                    /* catch() { ... } // from try @ 00f9df58 with catch @ 00f9e00c */
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0x78) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar12 = plVar10[1];
        if (uVar12 == uVar8) {
          if ((Node *)plVar10[2] == param_1) {
            plVar6 = *(long **)plVar10[3];
            plVar10 = (long *)((long *)plVar10[3])[1];
            if (plVar6 != plVar10) {
                    /* catch() { ... } // from try @ 00f9de7c with catch @ 00f9e09c */
              uVar5 = ((ulong)((long)plVar10 + (-8 - (long)plVar6)) >> 3) + 1;
              if (1 < uVar5) {
                uVar8 = uVar5 & 0x3ffffffffffffffe;
                plVar11 = plVar6 + 1;
                plVar6 = plVar6 + uVar8;
                uVar7 = uVar8;
                do {
                  plVar1 = plVar11 + -1;
                  lVar2 = *plVar11;
                  uVar7 = uVar7 - 2;
                  plVar11 = plVar11 + 2;
                  *(undefined1 *)(*plVar1 + 0x90) = 1;
                  *(undefined1 *)(lVar2 + 0x90) = 1;
                } while (uVar7 != 0);
                if (uVar5 == uVar8) break;
              }
              do {
                plVar11 = plVar6 + 1;
                *(undefined1 *)(*plVar6 + 0x90) = 1;
                plVar6 = plVar11;
              } while (plVar10 != plVar11);
            }
            break;
          }
        }
        else {
                    /* catch() { ... } // from try @ 00f9df20 with catch @ 00f9e054 */
          if (uVar7 < 2) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else {
                    /* catch() { ... } // from try @ 00f9df0c with catch @ 00f9e060 */
            if (uVar5 <= uVar12) {
              uVar4 = 0;
              if (uVar5 != 0) {
                uVar4 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar4 * uVar5;
            }
          }
          if (uVar12 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar6 = *(long **)(this + 0xf8);
  for (plVar10 = *(long **)(this + 0xf0); plVar10 != plVar6; plVar10 = plVar10 + 1) {
    if (*(Node **)(*plVar10 + 0x88) == param_1) {
      *(undefined1 *)(*plVar10 + 0x90) = 1;
    }
  }
  if (param_2) {
    plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    puVar3 = (undefined8 *)plVar10[1];
    for (puVar13 = (undefined8 *)*plVar10; puVar13 != puVar3; puVar13 = puVar13 + 1) {
                    /* catch() { ... } // from try @ 00f9de2c with catch @ 00f9e14c */
      pauseEventListenersForTarget(this,(Node *)*puVar13,true);
    }
  }
  return;
}

