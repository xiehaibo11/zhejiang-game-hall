
void FUN_012463cc(long *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  void *__dest;
  undefined8 *puVar3;
  Isolate *pIVar4;
  undefined1 auVar5 [16];
  void *local_b8;
  long lStack_b0;
  undefined4 local_a8 [2];
  undefined1 local_a0 [16];
  char local_8c [4];
  Isolate *local_88;
  char *pcStack_80;
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  HandleScope aHStack_58 [24];
  
  pIVar4 = *(Isolate **)(*param_1 + 8);
  uVar1 = (**(code **)(pIVar4 + 0xb768))();
  if ((uVar1 & 1) == 0) {
    v8::HandleScope::HandleScope(aHStack_58,pIVar4);
    local_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    pcStack_80 = "WebAssembly.Module()";
    local_70 = 0;
    uVar1 = *(ulong *)(*param_1 + 0x28);
    local_88 = pIVar4;
    if ((((uVar1 & 3) == 1) &&
        (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar1 - 1)) == 0x43)) &&
       ((*(uint *)(uVar1 + 0x17) & 0xfffffffe) == 10)) {
      v8::internal::wasm::ErrorThrower::TypeError
                ((char *)&local_88,"WebAssembly.Module must be invoked with \'new\'");
      auVar5._8_8_ = local_a0._8_8_;
      auVar5._0_8_ = local_a0._0_8_;
    }
    else {
      uVar1 = *(ulong *)(pIVar4 + 0x2bc8) & 0xffffffff00000000;
      uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)(pIVar4 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar2 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar1;
      }
      else {
        puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar1);
      }
      uVar1 = v8::internal::wasm::IsWasmCodegenAllowed(pIVar4,puVar2);
      if ((uVar1 & 1) == 0) {
        v8::internal::wasm::ErrorThrower::CompileError
                  ((char *)&local_88,"Wasm code generation disallowed by embedder");
        auVar5._8_8_ = local_a0._8_8_;
        auVar5._0_8_ = local_a0._0_8_;
      }
      else {
        local_8c[0] = '\0';
        auVar5 = FUN_012493d4(param_1,&local_88,local_8c);
        if (local_78 == 0) {
          local_a0 = auVar5;
          local_a8[0] = v8::internal::wasm::WasmFeatures::FromIsolate((Isolate *)pIVar4);
          if (local_8c[0] == '\0') {
            puVar3 = (undefined8 *)
                     v8::internal::wasm::WasmEngine::SyncCompile
                               (*(WasmEngine **)(pIVar4 + 0xc770),(Isolate *)pIVar4,
                                (WasmFeatures *)local_a8,(ErrorThrower *)&local_88,
                                (ModuleWireBytes *)local_a0);
            auVar5 = local_a0;
          }
          else {
            __dest = operator_new__((long)auVar5._8_4_);
            memcpy(__dest,auVar5._0_8_,(long)auVar5._8_4_);
            lStack_b0 = (long)(int)local_a0._8_4_;
            local_b8 = __dest;
            puVar3 = (undefined8 *)
                     v8::internal::wasm::WasmEngine::SyncCompile
                               (*(WasmEngine **)(pIVar4 + 0xc770),(Isolate *)pIVar4,
                                (WasmFeatures *)local_a8,(ErrorThrower *)&local_88,
                                (ModuleWireBytes *)&local_b8);
            operator_delete__(__dest);
            auVar5 = local_a0;
          }
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(*param_1 + 0x18) = *puVar3;
          }
        }
      }
    }
    local_a0 = auVar5;
    FUN_01249590(&local_88);
    v8::HandleScope::~HandleScope(aHStack_58);
  }
  return;
}

