
/* v8::CompiledWasmModule::Serialize() */

void v8::CompiledWasmModule::Serialize(void)

{
  undefined8 *in_x0;
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *in_x8;
  WasmSerializer aWStack_50 [8];
  void *local_48;
  
  internal::wasm::WasmSerializer::WasmSerializer(aWStack_50,(NativeModule *)*in_x0);
  uVar1 = internal::wasm::WasmSerializer::GetSerializedNativeModuleSize();
  pvVar2 = operator_new__(uVar1);
  uVar3 = internal::wasm::WasmSerializer::SerializeNativeModule(aWStack_50,pvVar2,uVar1);
  if ((uVar3 & 1) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    operator_delete__(pvVar2);
  }
  else {
    *in_x8 = pvVar2;
    in_x8[1] = uVar1;
  }
  if (local_48 != (void *)0x0) {
    operator_delete(local_48);
  }
  return;
}

