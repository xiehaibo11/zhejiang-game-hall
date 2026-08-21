
/* void 
   v8::internal::wasm::AsyncCompileJob::DoSync<v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile,
   (v8::internal::wasm::AsyncCompileJob::UseExistingForegroundTask)0,
   std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>, bool, unsigned
   long&>(std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>&&, bool&&, unsigned long&) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::
DoSync<v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile,(v8::internal::wasm::AsyncCompileJob::UseExistingForegroundTask)0,std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>,bool,unsigned_long&>
          (AsyncCompileJob *this,shared_ptr *param_1,bool *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  CancelableTask *pCVar6;
  ulong uVar7;
  CancelableTask *local_38;
  
  puVar4 = operator_new(0x28);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  bVar3 = *param_2;
  uVar7 = *param_3;
  puVar4[2] = uVar2;
  *puVar4 = &PTR__PrepareAndStartCompile_01cc9be8;
  puVar4[1] = uVar1;
  *(bool *)(puVar4 + 3) = bVar3;
  puVar4[4] = uVar7;
  plVar5 = *(long **)(this + 0x68);
  *(undefined8 **)(this + 0x68) = puVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  pCVar6 = operator_new(0x38);
  CancelableTask::CancelableTask(pCVar6,*(CancelableTaskManager **)(*(long *)this + 0xc700));
  *(undefined ***)pCVar6 = &PTR__CompileTask_01cc9d78;
  local_38 = pCVar6 + 0x20;
  *(undefined **)local_38 = &DAT_01cc9da8;
  *(AsyncCompileJob **)(pCVar6 + 0x28) = this;
  pCVar6[0x30] = (CancelableTask)0x1;
  *(CancelableTask **)(this + 0x118) = pCVar6;
  (**(code **)**(undefined8 **)(this + 0x100))(*(undefined8 **)(this + 0x100),&local_38);
  pCVar6 = local_38;
  local_38 = (CancelableTask *)0x0;
  if (pCVar6 != (CancelableTask *)0x0) {
    (**(code **)(*(long *)pCVar6 + 8))();
  }
  return;
}

