
/* cocos2d::AsyncTaskPool::enqueue(cocos2d::AsyncTaskPool::TaskType, std::__ndk1::function<void
   (void*)>, void*, std::__ndk1::function<void ()>) */

void __thiscall
cocos2d::AsyncTaskPool::enqueue
          (AsyncTaskPool *this,int param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_3[4];
  if (plVar3 == (long *)0x0) {
    local_60 = (long *)0x0;
    plVar2 = (long *)param_5[4];
joined_r0x007f6db8:
    if (plVar2 == (long *)0x0) goto LAB_007f6df8;
LAB_007f6de4:
    if (param_5 == plVar2) {
      local_90 = alStack_b0;
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_b0);
    }
    else {
      param_5[4] = 0;
      local_90 = plVar2;
    }
  }
  else {
    if (param_3 == plVar3) {
      local_60 = alStack_80;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
      plVar2 = (long *)param_5[4];
      goto joined_r0x007f6db8;
    }
    param_3[4] = 0;
    plVar2 = (long *)param_5[4];
    local_60 = plVar3;
    if (plVar2 != (long *)0x0) goto LAB_007f6de4;
LAB_007f6df8:
    local_90 = (long *)0x0;
  }
  ThreadTasks::enqueue((ThreadTasks *)(this + (long)param_2 * 200),alStack_80,param_4,alStack_b0);
  if (alStack_b0 == local_90) {
    pcVar4 = *(code **)(*local_90 + 0x20);
LAB_007f6e58:
    (*pcVar4)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar4 = *(code **)(*local_90 + 0x28);
    goto LAB_007f6e58;
  }
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007f6e88;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar4)();
LAB_007f6e88:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

