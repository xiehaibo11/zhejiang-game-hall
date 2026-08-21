
/* v8::internal::Runtime_SerializeWasmModule(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SerializeWasmModule(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong uVar5;
  WasmSerializer aWStack_60 [8];
  void *local_58;
  void *local_50;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015ab894(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x436)) {
    wasm::WasmSerializer::WasmSerializer
              (aWStack_60,
               (NativeModule *)
               **(undefined8 **)
                 (*(long *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 3) + 0x18
                 ));
    uVar2 = wasm::WasmSerializer::GetSerializedNativeModuleSize();
    pIVar3 = (Isolate *)Factory::NewJSArrayBufferAndBackingStore((Factory *)param_3,uVar2,0,0);
    if ((pIVar3 == (Isolate *)0x0) ||
       (uVar5 = wasm::WasmSerializer::SerializeNativeModule
                          (aWStack_60,*(undefined8 *)(*(long *)pIVar3 + 0x13),uVar2),
       (uVar5 & 1) == 0)) {
      pIVar3 = param_3 + 0xa0;
    }
    uVar2 = *(undefined8 *)pIVar3;
    if (local_58 != (void *)0x0) {
      local_50 = local_58;
      operator_delete(local_58);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmModuleObject()");
}

