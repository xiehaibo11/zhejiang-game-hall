
/* v8::internal::CompilerDispatcher::ScheduleMoreWorkerTasksIfNeeded() */

void __thiscall
v8::internal::CompilerDispatcher::ScheduleMoreWorkerTasksIfNeeded(CompilerDispatcher *this)

{
  Mutex *this_00;
  long lVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long *local_b8;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined **local_80;
  CompilerDispatcher *pCStack_78;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_01d3ec50 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec50 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.compile");
  }
  pbVar2 = DAT_01d3ec50;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3ec50 & 5) != 0) {
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.CompilerDispatcherScheduleMoreWorkerTasksIfNeeded",0,0
                       ,0,0,0,0,0,&local_90,0);
    plVar4 = local_88;
    local_88 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_90;
    local_90 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.CompilerDispatcherScheduleMoreWorkerTasksIfNeeded";
    local_a8 = pbVar2;
    local_98 = uVar5;
  }
  this_00 = (Mutex *)(this + 0xb0);
  base::Mutex::Lock(this_00);
  if (*(long *)(this + 0xf8) != 0) {
    iVar3 = (**(code **)(**(long **)(this + 0x30) + 0x28))();
    if (*(int *)(this + 0xdc) < iVar3) {
      *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
      base::Mutex::Unlock(this_00);
      plVar7 = *(long **)(this + 0x30);
      local_80 = &PTR_FUN_01ca4420;
      local_60 = &local_80;
      pCStack_78 = this;
      MakeCancelableTask((internal *)&local_90,*(undefined8 *)(this + 0x48),&local_80);
      plVar4 = local_90;
      local_90 = (long *)0x0;
      local_b8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        local_b8 = plVar4 + 4;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_b8);
      plVar4 = local_b8;
      local_b8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = local_90;
      local_90 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (&local_80 == local_60) {
        pcVar6 = (code *)(*local_60)[4];
      }
      else {
        if (local_60 == (undefined ***)0x0) goto joined_r0x00ef5c34;
        pcVar6 = (code *)(*local_60)[5];
      }
      (*pcVar6)();
      goto joined_r0x00ef5c34;
    }
  }
  base::Mutex::Unlock(this_00);
joined_r0x00ef5c34:
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

