
/* v8::internal::WasmJSFunction::IsWasmJSFunction(v8::internal::Object) */

bool v8::internal::WasmJSFunction::IsWasmJSFunction(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_1 & 1) != 0) {
    uVar2 = param_1 & 0xffffffff00000000;
    if ((*(short *)((uVar2 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x439) &&
       (uVar1 = *(uint *)((uVar2 | *(uint *)(param_1 + 0xb)) + 3), (uVar1 & 1) != 0)) {
      return *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0x75;
    }
  }
  return false;
}

