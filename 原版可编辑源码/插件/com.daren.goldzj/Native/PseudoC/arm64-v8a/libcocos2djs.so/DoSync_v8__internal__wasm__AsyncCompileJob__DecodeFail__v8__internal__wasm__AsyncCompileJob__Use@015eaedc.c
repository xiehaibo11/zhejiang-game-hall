
/* void v8::internal::wasm::AsyncCompileJob::DoSync<v8::internal::wasm::AsyncCompileJob::DecodeFail,
   (v8::internal::wasm::AsyncCompileJob::UseExistingForegroundTask)0,
   v8::internal::wasm::WasmError>(v8::internal::wasm::WasmError&&) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::
DoSync<v8::internal::wasm::AsyncCompileJob::DecodeFail,(v8::internal::wasm::AsyncCompileJob::UseExistingForegroundTask)0,v8::internal::wasm::WasmError>
          (AsyncCompileJob *this,WasmError *param_1)

{
  undefined4 uVar1;
  WasmError WVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  CancelableTask *this_00;
  CancelableTask *pCVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar4 = operator_new(0x28);
  uVar1 = *(undefined4 *)param_1;
  WVar2 = param_1[8];
  uVar7 = *(undefined8 *)(param_1 + 9);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x10) >> 8);
  local_41 = (undefined1)((ulong)uVar7 >> 0x38);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *puVar4 = &PTR__DecodeFail_01cc9bb8;
  *(undefined4 *)(puVar4 + 1) = uVar1;
  *(WasmError *)(puVar4 + 2) = WVar2;
  uStack_48 = 0;
  puVar4[3] = CONCAT71(uStack_40,local_41);
  puVar4[4] = uVar8;
  *(undefined8 *)((long)puVar4 + 0x11) = uVar7;
  local_41 = 0;
  uStack_40 = 0;
  plVar5 = *(long **)(this + 0x68);
  *(undefined8 **)(this + 0x68) = puVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  this_00 = operator_new(0x38);
  CancelableTask::CancelableTask(this_00,*(CancelableTaskManager **)(*(long *)this + 0xc700));
  *(undefined ***)this_00 = &PTR__CompileTask_01cc9d78;
  pCVar6 = this_00 + 0x20;
  *(undefined **)pCVar6 = &DAT_01cc9da8;
  *(AsyncCompileJob **)(this_00 + 0x28) = this;
  this_00[0x30] = (CancelableTask)0x1;
  *(CancelableTask **)(this + 0x118) = this_00;
  uStack_48 = SUB87(pCVar6,0);
  local_41 = (undefined1)((ulong)pCVar6 >> 0x38);
  (**(code **)**(undefined8 **)(this + 0x100))(*(undefined8 **)(this + 0x100),&uStack_48);
  plVar5 = (long *)CONCAT17(local_41,uStack_48);
  uStack_48 = 0;
  local_41 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

