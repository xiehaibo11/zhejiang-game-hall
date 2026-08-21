
/* cocos2d::AudioEngine::setVolume(int, float) */

void cocos2d::AudioEngine::setVolume(int param_1,float param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  
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
                    /* catch() { ... } // from try @ 00a6d898 with catch @ 00a6d9f8 */
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if (*(int *)(plVar5 + 2) == param_1) {
            fVar7 = 0.0;
            if ((0.0 <= param_2) && (fVar7 = param_2, 1.0 < param_2)) {
              fVar7 = 1.0;
            }
                    /* try { // try from 00a6da6c to 00b6da83 has its CatchHandler @ 00a6ddac */
            if (*(float *)(plVar5 + 5) == fVar7) {
              return;
            }
            AudioEngineImpl::setVolume((int)_audioEngineImpl,fVar7);
            *(float *)(plVar5 + 5) = fVar7;
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
                    /* try { // try from 00a6da8c to 00b6da97 has its CatchHandler @ 00a6dd90 */
                    /* try { // try from 00a6da98 to 00b6daa3 has its CatchHandler @ 00a6dd8c */
  return;
}

