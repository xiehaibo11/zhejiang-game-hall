
/* v8::internal::wasm::InstantiateToInstanceObject(v8::internal::Isolate*,
   v8::internal::wasm::ErrorThrower*, v8::internal::Handle<v8::internal::WasmModuleObject>,
   v8::internal::MaybeHandle<v8::internal::JSReceiver>,
   v8::internal::MaybeHandle<v8::internal::JSArrayBuffer>) */

long v8::internal::wasm::InstantiateToInstanceObject
               (undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  undefined8 local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  void *local_38;
  void *local_30;
  void *pvStack_28;
  
  local_a0 = *(undefined4 *)
              (**(long **)(*(long *)((*param_3 & 0xffffffff00000000 |
                                     (ulong)*(uint *)(*param_3 + 0xb)) + 3) + 0x18) + 0xc0);
  local_98 = *(long *)(**(long **)(*(long *)((*param_3 & 0xffffffff00000000 |
                                             (ulong)*(uint *)(*param_3 + 0xb)) + 3) + 0x18) + 200);
  uStack_68 = 0;
  local_70 = 0;
  local_58 = (void *)0x0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_38 = (void *)0x0;
  uStack_40 = 0;
  pvStack_28 = (void *)0x0;
  local_30 = (void *)0x0;
  uVar2 = *(long *)(local_98 + 0xd8) - *(long *)(local_98 + 0xd0);
  local_a8 = param_1;
  local_90 = param_2;
  puStack_88 = param_3;
  local_80 = param_4;
  uStack_78 = param_5;
  if (uVar2 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar2 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_30 = operator_new(uVar2);
    pvStack_28 = (void *)((long)local_30 + ((long)uVar2 >> 3) * 8);
  }
  local_38 = local_30;
  lVar1 = InstanceBuilder::Build((InstanceBuilder *)&local_a8);
  if ((lVar1 == 0) ||
     (uVar2 = InstanceBuilder::ExecuteStartFunction((InstanceBuilder *)&local_a8), (uVar2 & 1) == 0)
     ) {
    lVar1 = 0;
  }
  if (local_38 != (void *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  if (local_58 != (void *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return lVar1;
}

