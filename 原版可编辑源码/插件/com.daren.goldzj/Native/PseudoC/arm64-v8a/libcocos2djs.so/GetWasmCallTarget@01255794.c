
/* v8::internal::WasmExportedFunction::GetWasmCallTarget() */

undefined8 __thiscall
v8::internal::WasmExportedFunction::GetWasmCallTarget(WasmExportedFunction *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  NativeModule *this_00;
  ulong uVar5;
  ulong local_28;
  
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar2 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_28);
  uVar5 = uVar2 & 0xffffffff00000000;
  uVar2 = uVar5 | *(uint *)(uVar2 + 7);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  lVar3 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_28);
  uVar1 = *(int *)(lVar3 + 0xf) >> 1;
  this_00 = (NativeModule *)
            **(undefined8 **)
              (*(long *)((uVar5 | *(uint *)((uVar5 | *(uint *)(uVar2 + 0x6f)) + 0xb)) + 3) + 0x18);
  if (uVar1 < *(uint *)(*(long *)(this_00 + 200) + 0x3c)) {
    uVar4 = *(undefined8 *)(*(long *)(uVar2 + 0x2f) + (ulong)uVar1 * 8);
  }
  else {
    uVar4 = wasm::NativeModule::GetCallTargetForFunction(this_00,uVar1);
  }
  return uVar4;
}

