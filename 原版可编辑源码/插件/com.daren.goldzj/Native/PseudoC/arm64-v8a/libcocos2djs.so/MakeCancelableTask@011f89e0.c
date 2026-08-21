
/* v8::internal::MakeCancelableTask(v8::internal::CancelableTaskManager*, std::__ndk1::function<void
   ()>) */

void __thiscall
v8::internal::MakeCancelableTask(undefined8 *param_1_00,internal *this,long *param_1)

{
  long lVar1;
  CancelableTask *this_00;
  long *plVar2;
  code *pcVar3;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x60);
  plVar2 = (long *)param_1[4];
  if (plVar2 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_1 == plVar2) {
    local_60 = alStack_80;
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_80);
  }
  else {
    param_1[4] = 0;
    local_60 = plVar2;
  }
  CancelableTask::CancelableTask(this_00,(CancelableTaskManager *)this);
  *(undefined ***)this_00 = &PTR_FUN_01cbbdd0;
  *(undefined ***)(this_00 + 0x20) = &PTR_FUN_01cbbe00;
  if (local_60 == (long *)0x0) {
    *(undefined8 *)(this_00 + 0x50) = 0;
  }
  else if (alStack_80 == local_60) {
    *(CancelableTask **)(this_00 + 0x50) = this_00 + 0x30;
    (**(code **)(*local_60 + 0x18))();
    if (alStack_80 == local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_011f8ae8;
      pcVar3 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar3)();
  }
  else {
    *(long **)(this_00 + 0x50) = local_60;
    local_60 = (long *)0x0;
  }
LAB_011f8ae8:
  *param_1_00 = this_00;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

