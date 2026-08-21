
/* cocos2d::AudioEngineImpl::getCurrentTime(int) */

undefined1  [16] __thiscall
cocos2d::AudioEngineImpl::getCurrentTime(AudioEngineImpl *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar8 [16];
  
                    /* catch() { ... } // from try @ 00a71150 with catch @ 00a71568 */
  uVar2 = *(ulong *)(this + 0x30);
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
                    /* catch() { ... } // from try @ 00a71188 with catch @ 00a71578
                       catch() { ... } // from try @ 00a712c0 with catch @ 00a71578
                       catch() { ... } // from try @ 00a713e0 with catch @ 00a71578 */
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
            if (plVar6 == (long *)0x0) goto LAB_00a715f8;
            uVar7 = plVar6[1];
            if (uVar7 != uVar4) break;
            if (*(int *)(plVar6 + 2) == param_1) {
                    /* WARNING: Could not recover jumptable at 0x00a7160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x88))();
              auVar8._4_4_ = extraout_var;
              auVar8._0_4_ = extraout_s0;
              auVar8._8_8_ = extraout_var_00;
              return auVar8;
            }
          }
          if ((uVar3 & uVar2) == 0) break;
                    /* try { // try from 00a715d0 to 00b71623 has its CatchHandler @ 00a715d0
                       catch() { ... } // from try @ 00a715d0 with catch @ 00a715d0
                       catch() { ... } // from try @ 00a717c4 with catch @ 00a715d0 */
          if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) goto LAB_00a715f8;
        }
      } while ((uVar7 & uVar3) == uVar5);
    }
  }
LAB_00a715f8:
  return ZEXT816(0);
}

