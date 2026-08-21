
/* cocos2d::AsyncTaskPool::enqueue(cocos2d::AsyncTaskPool::TaskType, std::__ndk1::function<void ()>)
    */

void __thiscall
cocos2d::AsyncTaskPool::enqueue(AsyncTaskPool *this,undefined4 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_a0 [4];
  long *local_80;
  undefined **local_70 [4];
  undefined ***local_50;
  long local_38;
  
  local_80 = alStack_a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = local_70;
  local_70[0] = &PTR_FUN_01698ad8;
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    local_70[0] = &PTR_FUN_01698ad8;
    if (param_3 == plVar2) {
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_a0);
    }
    else {
      param_3[4] = 0;
      local_80 = plVar2;
    }
  }
  enqueue(this,param_2,local_70,0,alStack_a0);
  if (alStack_a0 == local_80) {
    pcVar3 = *(code **)(*local_80 + 0x20);
LAB_007f6c98:
    (*pcVar3)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar3 = *(code **)(*local_80 + 0x28);
    goto LAB_007f6c98;
  }
  if (local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_007f6cc8;
    pcVar3 = (code *)(*local_50)[5];
  }
  (*pcVar3)();
LAB_007f6cc8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

