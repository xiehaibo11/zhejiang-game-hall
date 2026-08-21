
/* cocos2d::AudioEngine::getDuration(int) */

undefined1  [16] cocos2d::AudioEngine::getDuration(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float extraout_s0;
  undefined4 uVar9;
  undefined4 extraout_var;
  undefined8 uVar10;
  undefined1 auVar8 [16];
  undefined8 extraout_var_00;
  
  fVar7 = -1.0;
  uVar9 = 0;
  uVar10 = 0;
  if (DAT_01d38cc0 != 0) {
    uVar2 = DAT_01d38cc0 - 1;
    uVar3 = (ulong)param_1;
    if ((uVar2 & DAT_01d38cc0) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (DAT_01d38cc0 <= uVar3) {
        uVar4 = 0;
        if (DAT_01d38cc0 != 0) {
          uVar4 = uVar3 / DAT_01d38cc0;
        }
        uVar4 = uVar3 - uVar4 * DAT_01d38cc0;
      }
    }
                    /* catch() { ... } // from try @ 00a6e274 with catch @ 00a6e36c */
                    /* catch() { ... } // from try @ 00a6e268 with catch @ 00a6e370 */
    plVar5 = *(long **)(_audioIDInfoMap + uVar4 * 8);
                    /* catch() { ... } // from try @ 00a6e248 with catch @ 00a6e374 */
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
                    /* catch() { ... } // from try @ 00a6e280 with catch @ 00a6e384 */
        if (uVar6 == uVar3) {
          if (*(int *)(plVar5 + 2) == param_1) {
            if (*(int *)((long)plVar5 + 0x34) != 0) {
                    /* try { // try from 00a6e3dc to 00b6e42f has its CatchHandler @ 00a6e3dc
                       catch() { ... } // from try @ 00a6e3dc with catch @ 00a6e3dc
                       catch() { ... } // from try @ 00a6e594 with catch @ 00a6e3dc */
              fVar7 = *(float *)(plVar5 + 6);
              uVar9 = 0;
              uVar10 = 0;
              if (fVar7 == -1.0) {
                AudioEngineImpl::getDuration(_audioEngineImpl,param_1);
                *(float *)(plVar5 + 6) = extraout_s0;
                fVar7 = extraout_s0;
                uVar9 = extraout_var;
                uVar10 = extraout_var_00;
              }
            }
            break;
          }
        }
        else {
          if ((uVar2 & DAT_01d38cc0) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (DAT_01d38cc0 <= uVar6) {
            uVar1 = 0;
            if (DAT_01d38cc0 != 0) {
              uVar1 = uVar6 / DAT_01d38cc0;
            }
            uVar6 = uVar6 - uVar1 * DAT_01d38cc0;
          }
          if (uVar6 != uVar4) break;
        }
      }
    }
  }
  auVar8._4_4_ = uVar9;
  auVar8._0_4_ = fVar7;
  auVar8._8_8_ = uVar10;
  return auVar8;
}

