
/* v8::internal::wasm::AsyncCompileJob::StartForegroundTask() */

void __thiscall v8::internal::wasm::AsyncCompileJob::StartForegroundTask(AsyncCompileJob *this)

{
  CancelableTask *pCVar1;
  CancelableTask *local_28;
  
  pCVar1 = operator_new(0x38);
  CancelableTask::CancelableTask(pCVar1,*(CancelableTaskManager **)(*(long *)this + 0xc700));
  *(undefined ***)pCVar1 = &PTR__CompileTask_01cc9d78;
  local_28 = pCVar1 + 0x20;
  *(undefined **)local_28 = &DAT_01cc9da8;
  *(AsyncCompileJob **)(pCVar1 + 0x28) = this;
  pCVar1[0x30] = (CancelableTask)0x1;
  *(CancelableTask **)(this + 0x118) = pCVar1;
  (**(code **)**(undefined8 **)(this + 0x100))(*(undefined8 **)(this + 0x100),&local_28);
  pCVar1 = local_28;
  local_28 = (CancelableTask *)0x0;
  if (pCVar1 != (CancelableTask *)0x0) {
    (**(code **)(*(long *)pCVar1 + 8))();
  }
  return;
}

