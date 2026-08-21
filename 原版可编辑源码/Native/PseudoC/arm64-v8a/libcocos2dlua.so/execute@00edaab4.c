
/* cocos2d::CallFunc::execute() */

void __thiscall cocos2d::CallFunc::execute(CallFunc *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x60);
  uVar1 = *(ulong *)(this + 0x68) & 1;
  if (uVar1 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (uVar1 != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE +
                     *(long *)(*(long *)(this + 0x58) + ((long)*(ulong *)(this + 0x68) >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00edaad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(long **)(this + 0x90) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00edaaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x90) + 0x30))();
    return;
  }
  return;
}

