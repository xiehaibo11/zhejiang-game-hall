
/* v8::internal::wasm::AsyncCompileJob::ExecuteForegroundTaskImmediately() */

void __thiscall
v8::internal::wasm::AsyncCompileJob::ExecuteForegroundTaskImmediately(AsyncCompileJob *this)

{
  CancelableTask *pCVar1;
  char cVar2;
  bool bVar3;
  CancelableTask *this_00;
  
  this_00 = operator_new(0x38);
  CancelableTask::CancelableTask(this_00,*(CancelableTaskManager **)(*(long *)this + 0xc700));
  pCVar1 = this_00 + 0x10;
  this_00[0x30] = (CancelableTask)0x1;
  *(undefined **)(this_00 + 0x20) = &DAT_01cc9da8;
  *(AsyncCompileJob **)(this_00 + 0x28) = this;
  *(undefined ***)this_00 = &PTR__CompileTask_01cc9d78;
  *(CancelableTask **)(this + 0x118) = this_00;
  do {
    if (*(int *)pCVar1 != 0) {
      ClearExclusiveLocal();
      goto LAB_015e3cb4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pCVar1,0x10);
    if (bVar3) {
      *(int *)pCVar1 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)(*(long *)this_00 + 0x18))(this_00);
LAB_015e3cb4:
                    /* WARNING: Could not recover jumptable at 0x015e3cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this_00 + 8))(this_00);
  return;
}

