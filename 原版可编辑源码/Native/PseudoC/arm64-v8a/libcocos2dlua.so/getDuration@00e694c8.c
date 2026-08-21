
/* cocos2d::experimental::AudioEngine::getDuration(int) */

undefined1  [16] cocos2d::experimental::AudioEngine::getDuration(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  fVar6 = -1.0;
  uVar8 = 0;
  uVar9 = 0;
  if (DAT_0178f2d0 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(DAT_0178f2d0 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_0178f2d0 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_0178f2d0 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_0178f2d0 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_0178f2d0 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_0178f2d0 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_0178f2d0 >> 8)),POPCOUNT((char)DAT_0178f2d0)))
                                                  )))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    uVar2 = (ulong)param_1;
    if ((uVar12 & 0xffffffff) < 2) {
      uVar3 = DAT_0178f2d0 - 1 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (DAT_0178f2d0 <= uVar2) {
        uVar3 = 0;
        if (DAT_0178f2d0 != 0) {
          uVar3 = uVar2 / DAT_0178f2d0;
        }
        uVar3 = uVar2 - uVar3 * DAT_0178f2d0;
      }
    }
    plVar4 = *(long **)(_audioIDInfoMap + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar5 = plVar4[1];
        if (uVar5 == uVar2) {
          if ((int)plVar4[2] == param_1) {
            if (*(int *)((long)plVar4 + 0x34) != 0) {
              fVar6 = *(float *)(plVar4 + 6);
              uVar8 = 0;
              uVar9 = 0;
              if (fVar6 == -1.0) {
                AudioEngineImpl::getDuration(_audioEngineImpl,param_1);
                *(float *)(plVar4 + 6) = extraout_s0;
                fVar6 = extraout_s0;
                uVar8 = extraout_var;
                uVar9 = extraout_var_00;
              }
            }
            break;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar5 = uVar5 & DAT_0178f2d0 - 1;
          }
          else if (DAT_0178f2d0 <= uVar5) {
            uVar1 = 0;
            if (DAT_0178f2d0 != 0) {
              uVar1 = uVar5 / DAT_0178f2d0;
            }
            uVar5 = uVar5 - uVar1 * DAT_0178f2d0;
          }
          if (uVar5 != uVar3) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  auVar7._4_4_ = uVar8;
  auVar7._0_4_ = fVar6;
  auVar7._8_8_ = uVar9;
  return auVar7;
}

