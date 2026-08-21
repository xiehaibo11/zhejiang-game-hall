
/* cocos2d::AudioEngine::getProfile(int) */

long cocos2d::AudioEngine::getProfile(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (DAT_01d38cc0 == 0) {
    return 0;
  }
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
                    /* try { // try from 00a6e944 to 00b6e95b has its CatchHandler @ 00a6eb2c */
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      uVar6 = plVar5[1];
      if (uVar6 == uVar3) {
        if ((int)plVar5[2] == param_1) {
          return plVar5[4];
        }
      }
      else {
        if ((uVar2 & DAT_01d38cc0) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else {
                    /* try { // try from 00a6e970 to 00b6e97b has its CatchHandler @ 00a6eb0c */
          if (DAT_01d38cc0 <= uVar6) {
            uVar1 = 0;
            if (DAT_01d38cc0 != 0) {
              uVar1 = uVar6 / DAT_01d38cc0;
            }
            uVar6 = uVar6 - uVar1 * DAT_01d38cc0;
                    /* try { // try from 00a6e97c to 00b6e983 has its CatchHandler @ 00a6eb3c */
          }
        }
        if (uVar6 != uVar4) {
          return 0;
        }
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
                    /* try { // try from 00a6e9a0 to 00b6e9cb has its CatchHandler @ 00a6eb14 */
        return 0;
      }
    } while( true );
  }
  return 0;
}

