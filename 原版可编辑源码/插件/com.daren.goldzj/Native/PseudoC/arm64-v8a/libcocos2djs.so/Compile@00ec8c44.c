
/* v8::WasmModuleObject::Compile(v8::Isolate*, unsigned char const*, unsigned long) */

long v8::WasmModuleObject::Compile(Isolate *param_1,uchar *param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  uchar *local_80;
  long lStack_78;
  Isolate *local_70;
  char *pcStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_28 [2];
  
  uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  uVar3 = internal::wasm::IsWasmCodegenAllowed(param_1,puVar1);
  if ((uVar3 & 1) != 0) {
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    pcStack_68 = "WasmModuleObject::Compile()";
    local_48 = 0;
    local_70 = param_1;
    local_28[0] = internal::wasm::WasmFeatures::FromIsolate((Isolate *)param_1);
    lStack_78 = (long)(int)param_3;
    local_80 = param_2;
    lVar2 = internal::wasm::WasmEngine::SyncCompile
                      (*(WasmEngine **)(param_1 + 0xc770),(Isolate *)param_1,
                       (WasmFeatures *)local_28,(ErrorThrower *)&local_70,
                       (ModuleWireBytes *)&local_80);
    internal::wasm::ErrorThrower::~ErrorThrower((ErrorThrower *)&local_70);
    if ((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) {
      if (lVar2 != 0) {
LAB_00ec8d88:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "maybe_compiled.is_null() == i_isolate->has_pending_exception()");
      }
    }
    else {
      if ((lVar2 == 0) != ((int)*(ulong *)(param_1 + 0x2bd8) != *(int *)(param_1 + 0xa8)))
      goto LAB_00ec8d88;
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    internal::Isolate::OptionalRescheduleException((Isolate *)param_1,false);
  }
  return 0;
}

