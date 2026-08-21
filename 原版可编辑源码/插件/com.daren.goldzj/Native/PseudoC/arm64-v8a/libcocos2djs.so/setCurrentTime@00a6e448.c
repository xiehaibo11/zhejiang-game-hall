
/* cocos2d::AudioEngine::setCurrentTime(int, float) */

undefined8 cocos2d::AudioEngine::setCurrentTime(int param_1,float param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
                    /* try { // try from 00a6e450 to 00b6e45b has its CatchHandler @ 00a6e5e4 */
  if (DAT_01d38cc0 != 0) {
                    /* try { // try from 00a6e45c to 00b6e467 has its CatchHandler @ 00a6e5e0 */
    uVar3 = DAT_01d38cc0 - 1;
    uVar4 = (ulong)param_1;
                    /* try { // try from 00a6e468 to 00b6e46f has its CatchHandler @ 00a6e610 */
    if ((uVar3 & DAT_01d38cc0) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (DAT_01d38cc0 <= uVar4) {
        uVar5 = 0;
        if (DAT_01d38cc0 != 0) {
          uVar5 = uVar4 / DAT_01d38cc0;
        }
        uVar5 = uVar4 - uVar5 * DAT_01d38cc0;
      }
    }
                    /* try { // try from 00a6e48c to 00b6e49f has its CatchHandler @ 00a6e5e8 */
    plVar6 = *(long **)(_audioIDInfoMap + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar6[1];
          if (uVar7 != uVar4) break;
          if (*(int *)(plVar6 + 2) == param_1) {
            if (*(int *)((long)plVar6 + 0x34) == 0) {
              return 0;
            }
            uVar2 = AudioEngineImpl::setCurrentTime((int)_audioEngineImpl,param_2);
            return uVar2;
          }
        }
        if ((uVar3 & DAT_01d38cc0) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else {
                    /* try { // try from 00a6e4c0 to 00b6e517 has its CatchHandler @ 00a6e610 */
          if (DAT_01d38cc0 <= uVar7) {
            uVar1 = 0;
            if (DAT_01d38cc0 != 0) {
              uVar1 = uVar7 / DAT_01d38cc0;
            }
            uVar7 = uVar7 - uVar1 * DAT_01d38cc0;
          }
        }
      } while (uVar7 == uVar5);
    }
  }
  return 0;
}

