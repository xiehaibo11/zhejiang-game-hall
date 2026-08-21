
/* v8::internal::WasmModuleObject::GetRawFunctionName(unsigned int) */

void __thiscall
v8::internal::WasmModuleObject::GetRawFunctionName(WasmModuleObject *this,uint param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = *(ulong *)this;
  puVar3 = *(undefined8 **)
            (**(long **)(*(long *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb)) + 3)
                        + 0x18) + 0xe0);
  uStack_18 = puVar3[1];
  local_20 = *puVar3;
  uVar1 = wasm::WasmModule::LookupFunctionName
                    (*(WasmModule **)
                      (**(long **)(*(long *)((uVar2 & 0xffffffff00000000 |
                                             (ulong)*(uint *)(uVar2 + 0xb)) + 3) + 0x18) + 200),
                     (ModuleWireBytes *)&local_20,param_1);
  wasm::ModuleWireBytes::GetNameOrNull((ModuleWireBytes *)&local_20,uVar1);
  return;
}

