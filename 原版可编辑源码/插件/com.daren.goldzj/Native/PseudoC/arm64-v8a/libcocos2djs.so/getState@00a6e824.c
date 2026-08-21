
/* cocos2d::AudioEngine::getState(int) */

undefined4 cocos2d::AudioEngine::getState(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (DAT_01d38cc0 == 0) {
    return 0xffffffff;
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
                    /* try { // try from 00a6e854 to 00b6e8ef has its CatchHandler @ 00a6e668 */
      uVar4 = uVar3 - uVar4 * DAT_01d38cc0;
    }
  }
                    /* catch() { ... } // from try @ 00a6e6e8 with catch @ 00a6e868 */
                    /* catch() { ... } // from try @ 00a6e6dc with catch @ 00a6e86c */
  plVar5 = *(long **)(_audioIDInfoMap + uVar4 * 8);
                    /* catch() { ... } // from try @ 00a6e734 with catch @ 00a6e870
                       catch() { ... } // from try @ 00a6e810 with catch @ 00a6e870 */
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return 0xffffffff;
    }
    do {
      uVar6 = plVar5[1];
      if (uVar6 == uVar3) {
                    /* catch() { ... } // from try @ 00a6e6bc with catch @ 00a6e888 */
        if ((int)plVar5[2] == param_1) {
          return *(undefined4 *)((long)plVar5 + 0x34);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a6e6f4 with catch @ 00a6e898
                       catch() { ... } // from try @ 00a6e764 with catch @ 00a6e898 */
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
                    /* try { // try from 00a6e8f0 to 00b6e943 has its CatchHandler @ 00a6e8f0
                       catch() { ... } // from try @ 00a6e8f0 with catch @ 00a6e8f0
                       catch() { ... } // from try @ 00a6eac0 with catch @ 00a6e8f0 */
          return 0xffffffff;
        }
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return 0xffffffff;
      }
    } while( true );
  }
  return 0xffffffff;
}

