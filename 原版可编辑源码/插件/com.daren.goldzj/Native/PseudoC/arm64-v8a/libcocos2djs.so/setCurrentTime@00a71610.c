
/* cocos2d::AudioEngineImpl::setCurrentTime(int, float) */

undefined8 cocos2d::AudioEngineImpl::setCurrentTime(int param_1,float param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)((ulong)(uint)param_1 + 0x30);
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    uVar5 = (ulong)in_w1;
                    /* try { // try from 00a71624 to 00b7163b has its CatchHandler @ 00a7185c */
    if ((uVar4 & uVar3) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
                    /* try { // try from 00a71644 to 00b7164f has its CatchHandler @ 00a71858 */
    plVar7 = *(long **)(*(long *)((ulong)(uint)param_1 + 0x28) + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
                    /* try { // try from 00a71650 to 00b7165b has its CatchHandler @ 00a71854 */
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              return 0;
            }
            uVar8 = plVar7[1];
                    /* try { // try from 00a7165c to 00b71663 has its CatchHandler @ 00a7186c */
            if (uVar8 != uVar5) break;
            if (*(int *)(plVar7 + 2) == in_w1) {
                    /* WARNING: Could not recover jumptable at 0x00a716b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar2 = (**(code **)(*(long *)plVar7[3] + 0x90))();
              return uVar2;
            }
          }
          if ((uVar4 & uVar3) == 0) break;
          if (uVar3 <= uVar8) {
                    /* try { // try from 00a71680 to 00b71687 has its CatchHandler @ 00a7183c */
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
                    /* try { // try from 00a7168c to 00b716ab has its CatchHandler @ 00a71838 */
          if (uVar8 != uVar6) {
            return 0;
          }
        }
      } while ((uVar8 & uVar4) == uVar6);
    }
  }
  return 0;
}

