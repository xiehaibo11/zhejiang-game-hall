
/* cocos2d::AudioEngineImpl::stop(int) */

void __thiscall cocos2d::AudioEngineImpl::stop(AudioEngineImpl *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(this + 0x30);
                    /* try { // try from 00a71214 to 00b71223 has its CatchHandler @ 00a714fc */
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    uVar4 = (ulong)param_1;
    if ((uVar3 & uVar2) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
                    /* try { // try from 00a71228 to 00b71233 has its CatchHandler @ 00a714f4 */
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
                    /* try { // try from 00a71234 to 00b71243 has its CatchHandler @ 00a714dc */
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
                    /* try { // try from 00a71248 to 00b71253 has its CatchHandler @ 00a714cc */
    plVar6 = *(long **)(*(long *)(this + 0x28) + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) {
              return;
            }
                    /* try { // try from 00a71258 to 00b7125f has its CatchHandler @ 00a714bc */
            uVar7 = plVar6[1];
            if (uVar7 != uVar4) break;
            if (*(int *)(plVar6 + 2) == param_1) {
                    /* WARNING: Could not recover jumptable at 0x00a712b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x48))();
              return;
            }
          }
                    /* try { // try from 00a71274 to 00b7127f has its CatchHandler @ 00a714ac */
          if ((uVar3 & uVar2) == 0) break;
          if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
                    /* try { // try from 00a71284 to 00b7128b has its CatchHandler @ 00a7149c */
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

