
/* v8::internal::wasm::AsyncCompileJob::StartBackgroundTask() */

void __thiscall v8::internal::wasm::AsyncCompileJob::StartBackgroundTask(AsyncCompileJob *this)

{
  int iVar1;
  CancelableTask *pCVar2;
  long *plVar3;
  CancelableTask *pCVar4;
  CancelableTask *local_38;
  CancelableTask *local_18;
  
  pCVar2 = operator_new(0x38);
  CancelableTask::CancelableTask(pCVar2,(CancelableTaskManager *)(this + 0x70));
  iVar1 = FLAG_wasm_num_compilation_tasks;
  *(undefined ***)pCVar2 = &PTR__CompileTask_01cc9d78;
  pCVar4 = pCVar2 + 0x20;
  *(undefined **)pCVar4 = &DAT_01cc9da8;
  *(AsyncCompileJob **)(pCVar2 + 0x28) = this;
  pCVar2[0x30] = (CancelableTask)0x0;
  if (iVar1 < 1) {
    local_38 = pCVar4;
    (**(code **)**(undefined8 **)(this + 0x100))(*(undefined8 **)(this + 0x100),&local_38);
    pCVar2 = local_38;
    local_38 = (CancelableTask *)0x0;
  }
  else {
    plVar3 = (long *)V8::GetCurrentPlatform();
    local_18 = pCVar4;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
    pCVar2 = local_18;
    local_18 = (CancelableTask *)0x0;
  }
  if (pCVar2 != (CancelableTask *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  return;
}

