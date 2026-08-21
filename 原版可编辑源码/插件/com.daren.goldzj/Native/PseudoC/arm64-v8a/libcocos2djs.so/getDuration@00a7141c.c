
/* cocos2d::AudioEngineImpl::getDuration(int) */

undefined1  [16] __thiscall cocos2d::AudioEngineImpl::getDuration(AudioEngineImpl *this,int param_1)

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
  
                    /* try { // try from 00a7141c to 00b715cf has its CatchHandler @ 00a710f0 */
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
            if (plVar6 == (long *)0x0) goto LAB_00a714ac;
            uVar7 = plVar6[1];
            if (uVar7 != uVar4) break;
            if (*(int *)(plVar6 + 2) == param_1) {
                    /* catch() { ... } // from try @ 00a71258 with catch @ 00a714bc */
                    /* WARNING: Could not recover jumptable at 0x00a714c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)plVar6[3] + 0x80))();
              auVar8._4_4_ = extraout_var;
              auVar8._0_4_ = extraout_s0;
              auVar8._8_8_ = extraout_var_00;
              return auVar8;
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
          if (uVar7 != uVar5) goto LAB_00a714ac;
        }
      } while ((uVar7 & uVar3) == uVar5);
    }
  }
LAB_00a714ac:
                    /* catch() { ... } // from try @ 00a71274 with catch @ 00a714ac */
  return ZEXT816(0);
}

