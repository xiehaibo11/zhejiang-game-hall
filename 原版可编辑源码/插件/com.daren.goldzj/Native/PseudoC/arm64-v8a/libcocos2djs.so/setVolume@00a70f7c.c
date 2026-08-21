
/* cocos2d::AudioEngineImpl::setVolume(int, float) */

void cocos2d::AudioEngineImpl::setVolume(int param_1,float param_2)

{
  ulong uVar1;
  int in_w1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
                    /* try { // try from 00a70f7c to 00b70f87 has its CatchHandler @ 00a71084 */
  uVar2 = *(ulong *)((ulong)(uint)param_1 + 0x30);
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
                    /* try { // try from 00a70f88 to 00b70f93 has its CatchHandler @ 00a71080 */
    uVar4 = (ulong)in_w1;
    if ((uVar3 & uVar2) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
                    /* try { // try from 00a70f94 to 00b7100b has its CatchHandler @ 00a71098 */
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)((ulong)(uint)param_1 + 0x28) + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) {
              return;
            }
            uVar7 = plVar6[1];
            if (uVar7 != uVar4) break;
            if (*(int *)(plVar6 + 2) == in_w1) {
                    /* WARNING: Could not recover jumptable at 0x00a7101c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x58))();
              return;
            }
          }
          if ((uVar3 & uVar2) == 0) break;
          if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return;
          }
        }
      } while ((uVar7 & uVar3) == uVar5);
    }
  }
                    /* try { // try from 00a7100c to 00b710ef has its CatchHandler @ 00a70f08 */
  return;
}

