
/* cocos2d::AudioEngine::isLoop(int) */

bool cocos2d::AudioEngine::isLoop(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (DAT_01d38cc0 != 0) {
    uVar2 = DAT_01d38cc0 - 1;
    uVar3 = (ulong)param_1;
    if ((uVar2 & DAT_01d38cc0) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
                    /* try { // try from 00a6e6bc to 00b6e6d3 has its CatchHandler @ 00a6e888 */
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
                    /* try { // try from 00a6e6dc to 00b6e6e7 has its CatchHandler @ 00a6e86c */
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_00a6e730;
                    /* try { // try from 00a6e6e8 to 00b6e6f3 has its CatchHandler @ 00a6e868 */
            uVar6 = plVar5[1];
            if (uVar6 != uVar3) break;
                    /* try { // try from 00a6e6f4 to 00b6e733 has its CatchHandler @ 00a6e898 */
            if (*(int *)(plVar5 + 2) == param_1) {
              return *(char *)((long)plVar5 + 0x2c) != '\0';
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
          if (uVar6 != uVar4) goto LAB_00a6e730;
        }
      } while ((uVar6 & uVar2) == uVar4);
    }
  }
LAB_00a6e730:
                    /* try { // try from 00a6e734 to 00b6e747 has its CatchHandler @ 00a6e870 */
  log("AudioEngine::isLoop-->The audio instance %d is non-existent");
  return false;
}

