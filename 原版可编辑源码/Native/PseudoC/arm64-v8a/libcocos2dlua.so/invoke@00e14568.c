
/* cocos2d::extension::Invocation::invoke(cocos2d::Ref*) */

void __thiscall cocos2d::extension::Invocation::invoke(Invocation *this,Ref *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  if (*(long *)(this + 0x38) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x28);
    uVar2 = *(ulong *)(this + 0x30) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      plVar1 = (long *)(*(long *)(this + 0x38) + ((long)*(ulong *)(this + 0x30) >> 1));
      if (uVar2 != 0) {
                    /* try { // try from 00e1458c to 00f1459b has its CatchHandler @ 00e14790 */
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00e14598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,param_1,*(undefined4 *)(this + 0x40));
      return;
    }
  }
  return;
}

