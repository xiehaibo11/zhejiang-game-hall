
/* cocos2d::__CCCallFuncO::execute() */

void __thiscall cocos2d::__CCCallFuncO::execute(__CCCallFuncO *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0xa8);
  uVar2 = *(ulong *)(this + 0xb0) & 1;
  if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(*(long *)(this + 0x58) + ((long)*(ulong *)(this + 0xb0) >> 1));
    if (uVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00edb488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined8 *)(this + 0xa0));
    return;
  }
  return;
}

