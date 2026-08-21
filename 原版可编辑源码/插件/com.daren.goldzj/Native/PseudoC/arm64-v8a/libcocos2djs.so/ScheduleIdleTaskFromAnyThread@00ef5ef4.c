
/* v8::internal::CompilerDispatcher::ScheduleIdleTaskFromAnyThread(v8::base::LockGuard<v8::base::Mutex,
   (v8::base::NullBehavior)0> const&) */

void v8::internal::CompilerDispatcher::ScheduleIdleTaskFromAnyThread(LockGuard *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long *local_80;
  long *local_78;
  undefined **local_70;
  LockGuard *pLStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
  if (((uVar2 & 1) != 0) && (param_1[0xd8] == (LockGuard)0x0)) {
    plVar4 = *(long **)(param_1 + 0x20);
    param_1[0xd8] = (LockGuard)0x1;
    local_50 = &local_70;
    local_70 = &PTR_FUN_01ca43d8;
    pLStack_68 = param_1;
    MakeCancelableIdleTask((internal *)&local_80,*(undefined8 *)(param_1 + 0x48),&local_70);
    local_78 = (long *)0x0;
    if (local_80 != (long *)0x0) {
      local_78 = (long *)((long)local_80 + 0x20);
    }
    local_80 = (long *)0x0;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
    plVar4 = local_78;
    local_78 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_80;
    local_80 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (&local_70 == local_50) {
      pcVar3 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_00ef5fe8;
      pcVar3 = (code *)(*local_50)[5];
    }
    (*pcVar3)();
  }
LAB_00ef5fe8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

