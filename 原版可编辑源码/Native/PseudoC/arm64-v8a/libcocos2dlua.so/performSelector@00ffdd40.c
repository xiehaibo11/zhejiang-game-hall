
/* cocos2d::NotificationObserver::performSelector(cocos2d::Ref*) */

void __thiscall
cocos2d::NotificationObserver::performSelector(NotificationObserver *this,Ref *param_1)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (*(long *)(this + 0x28) == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this + 0x30);
  uVar2 = *(ulong *)(this + 0x38);
  plVar1 = (long *)(*(long *)(this + 0x28) + ((long)uVar2 >> 1));
                    /* try { // try from 00ffdd54 to 010fddaf has its CatchHandler @ 00ffde5c */
  if (param_1 != (Ref *)0x0) {
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00ffdd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00ffdd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(this + 0x58));
  return;
}

