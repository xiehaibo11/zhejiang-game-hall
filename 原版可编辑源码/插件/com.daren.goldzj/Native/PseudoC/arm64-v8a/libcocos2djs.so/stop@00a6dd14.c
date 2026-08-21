
/* cocos2d::AudioEngine::stop(int) */

void cocos2d::AudioEngine::stop(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (DAT_01d38cc0 != 0) {
    uVar2 = DAT_01d38cc0 - 1;
                    /* try { // try from 00a6dd38 to 00b6dd4b has its CatchHandler @ 00a6da14 */
    uVar3 = (ulong)param_1;
    if ((uVar2 & DAT_01d38cc0) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
                    /* try { // try from 00a6dd4c to 00b6dd53 has its CatchHandler @ 00a6dd54 */
      uVar4 = uVar3;
      if (DAT_01d38cc0 <= uVar3) {
        uVar4 = 0;
        if (DAT_01d38cc0 != 0) {
          uVar4 = uVar3 / DAT_01d38cc0;
        }
                    /* catch() { ... } // from try @ 00a6dbbc with catch @ 00a6dd54
                       catch() { ... } // from try @ 00a6dd4c with catch @ 00a6dd54
                       try { // try from 00a6dd54 to 00b6de13 has its CatchHandler @ 00a6da14 */
        uVar4 = uVar3 - uVar4 * DAT_01d38cc0;
                    /* catch() { ... } // from try @ 00a6dbe8 with catch @ 00a6dd58 */
      }
    }
    plVar5 = *(long **)(_audioIDInfoMap + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
                    /* catch() { ... } // from try @ 00a6dc04 with catch @ 00a6dd6c
                       catch() { ... } // from try @ 00a6dcf4 with catch @ 00a6dd6c */
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) {
              return;
            }
            uVar6 = plVar5[1];
            if (uVar6 != uVar3) break;
            if (*(int *)(plVar5 + 2) == param_1) {
              AudioEngineImpl::stop(_audioEngineImpl,param_1);
              remove(param_1);
              return;
            }
          }
                    /* catch() { ... } // from try @ 00a6da8c with catch @ 00a6dd90 */
          if ((uVar2 & DAT_01d38cc0) == 0) break;
                    /* catch() { ... } // from try @ 00a6dac8 with catch @ 00a6dd94
                       catch() { ... } // from try @ 00a6db30 with catch @ 00a6dd94 */
          if (DAT_01d38cc0 <= uVar6) {
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
      } while ((uVar6 & uVar2) == uVar4);
    }
  }
                    /* catch() { ... } // from try @ 00a6daa4 with catch @ 00a6ddbc
                       catch() { ... } // from try @ 00a6db10 with catch @ 00a6ddbc
                       catch() { ... } // from try @ 00a6dc44 with catch @ 00a6ddbc */
  return;
}

