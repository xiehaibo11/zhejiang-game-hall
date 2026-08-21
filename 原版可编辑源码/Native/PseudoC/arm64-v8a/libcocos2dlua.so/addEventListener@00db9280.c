
/* cocos2d::ui::PageView::addEventListener(std::__ndk1::function<void (cocos2d::Ref*,
   cocos2d::ui::PageView::EventType)> const&) */

void __thiscall cocos2d::ui::PageView::addEventListener(PageView *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined **local_70;
  PageView *pPStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_00db9dc8(&local_70,this + 0x990);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00db9324:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00db9324;
  }
  local_70 = &PTR_FUN_016dacb8;
  pPStack_68 = this;
  local_50 = (long *)&local_70;
  (**(code **)(*(long *)this + 0x7a0))(this,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00db9378;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00db9378:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

