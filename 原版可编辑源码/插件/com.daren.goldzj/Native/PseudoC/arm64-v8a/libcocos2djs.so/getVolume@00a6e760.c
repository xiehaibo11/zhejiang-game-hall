
/* cocos2d::AudioEngine::getVolume(int) */

undefined4 cocos2d::AudioEngine::getVolume(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
                    /* try { // try from 00a6e764 to 00b6e79f has its CatchHandler @ 00a6e898 */
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
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_00a6e7fc;
            uVar6 = plVar5[1];
            if (uVar6 != uVar3) break;
            if (*(int *)(plVar5 + 2) == param_1) {
              return *(undefined4 *)(plVar5 + 5);
            }
          }
          if ((uVar2 & DAT_01d38cc0) == 0) break;
          if (DAT_01d38cc0 <= uVar6) {
            uVar1 = 0;
            if (DAT_01d38cc0 != 0) {
              uVar1 = uVar6 / DAT_01d38cc0;
            }
            uVar6 = uVar6 - uVar1 * DAT_01d38cc0;
          }
          if (uVar6 != uVar4) goto LAB_00a6e7fc;
        }
      } while ((uVar6 & uVar2) == uVar4);
    }
  }
LAB_00a6e7fc:
  log("AudioEngine::getVolume-->The audio instance %d is non-existent");
                    /* try { // try from 00a6e810 to 00b6e853 has its CatchHandler @ 00a6e870 */
  return 0;
}

