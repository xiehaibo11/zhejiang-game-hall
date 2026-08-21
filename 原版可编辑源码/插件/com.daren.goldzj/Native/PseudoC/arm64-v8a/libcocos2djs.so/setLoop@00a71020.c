
/* cocos2d::AudioEngineImpl::setLoop(int, bool) */

void __thiscall cocos2d::AudioEngineImpl::setLoop(AudioEngineImpl *this,int param_1,bool param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(this + 0x30);
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    uVar4 = (ulong)param_1;
    if ((uVar3 & uVar2) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
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
            if (plVar6 == (long *)0x0) {
              return;
            }
            uVar7 = plVar6[1];
            if (uVar7 != uVar4) break;
            if (*(int *)(plVar6 + 2) == param_1) {
                    /* WARNING: Could not recover jumptable at 0x00a710c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x70))((long *)plVar6[3],param_2);
              return;
            }
          }
                    /* catch() { ... } // from try @ 00a70f7c with catch @ 00a71084 */
          if ((uVar3 & uVar2) == 0) break;
                    /* catch() { ... } // from try @ 00a70f5c with catch @ 00a71088 */
          if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
                    /* catch() { ... } // from try @ 00a70f94 with catch @ 00a71098 */
          if (uVar7 != uVar5) {
            return;
          }
        }
      } while ((uVar7 & uVar3) == uVar5);
    }
  }
  return;
}

