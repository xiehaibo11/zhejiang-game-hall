
/* CleanupTask::pushTaskToAutoReleasePool(std::__ndk1::function<void ()> const&) */

void CleanupTask::pushTaskToAutoReleasePool(function *param_1)

{
  long lVar1;
  Ref *this;
  long *plVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined ***)this = &PTR__CleanupTask_01c8e140;
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    local_50 = alStack_70;
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_008feca4(alStack_70,this + 0x10);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00cd97ec;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00cd97ec:
  cocos2d::Ref::autorelease(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

