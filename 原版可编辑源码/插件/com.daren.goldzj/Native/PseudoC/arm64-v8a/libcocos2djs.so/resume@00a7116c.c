
/* cocos2d::AudioEngineImpl::resume(int) */

void __thiscall cocos2d::AudioEngineImpl::resume(AudioEngineImpl *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(this + 0x30);
                    /* try { // try from 00a71170 to 00b7117b has its CatchHandler @ 00a7152c */
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
                    /* try { // try from 00a7117c to 00b71187 has its CatchHandler @ 00a71528 */
    uVar4 = (ulong)param_1;
    if ((uVar3 & uVar2) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
                    /* try { // try from 00a71188 to 00b7118f has its CatchHandler @ 00a71578 */
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0x28) + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar6 = (long *)*plVar6;
                    /* try { // try from 00a711b0 to 00b711b7 has its CatchHandler @ 00a71524 */
            if (plVar6 == (long *)0x0) {
              return;
            }
            uVar7 = plVar6[1];
            if (uVar7 != uVar4) break;
            if (*(int *)(plVar6 + 2) == param_1) {
                    /* try { // try from 00a71200 to 00b71207 has its CatchHandler @ 00a71500 */
                    /* try { // try from 00a71208 to 00b71213 has its CatchHandler @ 00a71508 */
                    /* WARNING: Could not recover jumptable at 0x00a7120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x40))();
              return;
            }
          }
          if ((uVar3 & uVar2) == 0) break;
                    /* try { // try from 00a711d4 to 00b711db has its CatchHandler @ 00a71530 */
          if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
                    /* try { // try from 00a711e0 to 00b711f7 has its CatchHandler @ 00a71520 */
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return;
          }
        }
      } while ((uVar7 & uVar3) == uVar5);
    }
  }
  return;
}

