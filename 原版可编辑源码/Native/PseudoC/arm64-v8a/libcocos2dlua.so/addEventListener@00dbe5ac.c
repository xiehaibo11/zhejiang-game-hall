
/* cocos2d::ui::ScrollView::addEventListener(std::__ndk1::function<void (cocos2d::Ref*,
   cocos2d::ui::ScrollView::EventType)> const&) */

void __thiscall cocos2d::ui::ScrollView::addEventListener(ScrollView *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
                    /* try { // try from 00dbe5d4 to 00ebe5e3 has its CatchHandler @ 00dbe878 */
    if ((long *)param_1 == plVar2) {
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
    }
    else {
                    /* try { // try from 00dbe5e8 to 00ebe5f7 has its CatchHandler @ 00dbe864 */
      local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  FUN_00dbf1f8(alStack_60,this + 0x880);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00dbe650;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00dbe650:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

