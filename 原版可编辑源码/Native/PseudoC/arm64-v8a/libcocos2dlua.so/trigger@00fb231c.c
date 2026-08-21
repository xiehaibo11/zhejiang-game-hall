
/* cocos2d::TimerTargetSelector::trigger(float) */

void cocos2d::TimerTargetSelector::trigger(float param_1)

{
  long in_x0;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  
  if (*(long *)(in_x0 + 0x50) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_x0 + 0x58);
    uVar1 = *(ulong *)(in_x0 + 0x60) & 1;
    if (uVar1 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar1 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(in_x0 + 0x50) + ((long)*(ulong *)(in_x0 + 0x60) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00fb2344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

