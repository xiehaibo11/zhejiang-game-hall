
/* cocos2d::ui::RadioButton::addEventListener(std::__ndk1::function<void (cocos2d::ui::RadioButton*,
   cocos2d::ui::RadioButton::EventType)> const&) */

void __thiscall cocos2d::ui::RadioButton::addEventListener(RadioButton *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
                    /* try { // try from 00dc5c00 to 00ec5c13 has its CatchHandler @ 00dc5ed0 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_00dc6b40(alStack_60,this + 0x5c0);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
                    /* try { // try from 00dc5c78 to 00ec5c7f has its CatchHandler @ 00dc5e88 */
    if (local_40 == (long *)0x0) goto LAB_00dc5c94;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00dc5c94:
                    /* try { // try from 00dc5c98 to 00ec5ca3 has its CatchHandler @ 00dc5e8c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

