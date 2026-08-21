
/* cocos2d::AudioEngine::resume(int) */

void cocos2d::AudioEngine::resume(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
                    /* try { // try from 00a6dbe8 to 00b6dbf3 has its CatchHandler @ 00a6dd58 */
  if (DAT_01d38cc0 != 0) {
    uVar2 = DAT_01d38cc0 - 1;
    uVar3 = (ulong)param_1;
                    /* try { // try from 00a6dc04 to 00b6dc17 has its CatchHandler @ 00a6dd6c */
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
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
                    /* try { // try from 00a6dc44 to 00b6dc7f has its CatchHandler @ 00a6ddbc */
          if (*(int *)(plVar5 + 2) == param_1) {
            if (*(int *)((long)plVar5 + 0x34) != 2) {
              return;
            }
            AudioEngineImpl::resume(_audioEngineImpl,param_1);
            *(undefined4 *)((long)plVar5 + 0x34) = 1;
            return;
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
          if (uVar6 != uVar4) {
            return;
          }
        }
      }
    }
  }
  return;
}

