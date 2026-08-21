
/* v8::internal::wasm::WasmEngine::AsyncInstantiate(v8::internal::Isolate*,
   std::__ndk1::unique_ptr<v8::internal::wasm::InstantiationResultResolver,
   std::__ndk1::default_delete<v8::internal::wasm::InstantiationResultResolver> >,
   v8::internal::Handle<v8::internal::WasmModuleObject>,
   v8::internal::MaybeHandle<v8::internal::JSReceiver>) */

void __thiscall
v8::internal::wasm::WasmEngine::AsyncInstantiate
          (undefined8 param_1_00,Isolate *param_1,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong uVar6;
  Isolate *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  TryCatch aTStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcStack_a0 = "WebAssembly.instantiate()";
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_a8 = param_1;
  TryCatch::TryCatch(aTStack_78,param_1);
  TryCatch::SetVerbose(aTStack_78,false);
  TryCatch::SetCaptureMessage(aTStack_78,false);
  lVar2 = InstantiateToInstanceObject(param_1,&local_a8,param_4,param_5,0);
  if (lVar2 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x2bd8);
    if (((uVar6 & 1) == 0) || ((int)uVar6 != *(int *)(param_1 + 0xa8))) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(param_1 + 0x95a0);
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      }
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
      param_1[0x2c19] = (Isolate)0x0;
      (**(code **)(*(long *)*param_3 + 8))((long *)*param_3,puVar4);
      ErrorThrower::Reset((ErrorThrower *)&local_a8);
      goto LAB_0120a0b8;
    }
    plVar3 = (long *)*param_3;
    lVar2 = ErrorThrower::Reify((ErrorThrower *)&local_a8);
    pcVar5 = *(code **)(*plVar3 + 8);
  }
  else {
    plVar3 = (long *)*param_3;
    pcVar5 = *(code **)*plVar3;
  }
  (*pcVar5)(plVar3,lVar2);
LAB_0120a0b8:
  TryCatch::~TryCatch(aTStack_78);
  ErrorThrower::~ErrorThrower((ErrorThrower *)&local_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

