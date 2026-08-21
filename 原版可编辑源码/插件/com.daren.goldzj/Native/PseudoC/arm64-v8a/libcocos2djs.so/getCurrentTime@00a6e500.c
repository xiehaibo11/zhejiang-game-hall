
/* cocos2d::AudioEngine::getCurrentTime(int) */

undefined1  [16] cocos2d::AudioEngine::getCurrentTime(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  
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
    plVar5 = *(long **)(_audioIDInfoMap + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
                    /* try { // try from 00a6e550 to 00b6e593 has its CatchHandler @ 00a6e5e8 */
          if (plVar5 == (long *)0x0) goto LAB_00a6e5b0;
          uVar6 = plVar5[1];
          if (uVar6 != uVar3) break;
          if (*(int *)(plVar5 + 2) == param_1) {
            if (*(int *)((long)plVar5 + 0x34) != 0) {
              AudioEngineImpl::getCurrentTime(_audioEngineImpl,param_1);
              auVar7._4_4_ = extraout_var;
              auVar7._0_4_ = extraout_s0;
              auVar7._8_8_ = extraout_var_00;
              return auVar7;
            }
            goto LAB_00a6e5b0;
          }
        }
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
      } while (uVar6 == uVar4);
    }
  }
LAB_00a6e5b0:
  return ZEXT816(0);
}

