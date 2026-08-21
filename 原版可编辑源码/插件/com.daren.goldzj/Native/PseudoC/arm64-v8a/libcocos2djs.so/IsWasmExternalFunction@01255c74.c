
/* v8::internal::WasmExternalFunction::IsWasmExternalFunction(v8::internal::Object) */

bool v8::internal::WasmExternalFunction::IsWasmExternalFunction(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 & 1) != 0) {
    uVar3 = param_1 & 0xffffffff00000000;
    uVar2 = uVar3 | 7;
    if ((*(short *)(uVar2 + *(uint *)(param_1 - 1)) == 0x439) &&
       ((*(uint *)((uVar3 | *(uint *)(param_1 + 0x17)) + 0x17) & 0x3e) == 0x10)) {
      return true;
    }
    if ((*(short *)(uVar2 + *(uint *)(param_1 - 1)) == 0x439) &&
       (uVar1 = *(uint *)((uVar3 | *(uint *)(param_1 + 0xb)) + 3), (uVar1 & 1) != 0)) {
      return *(short *)(uVar2 + *(uint *)((uVar3 | uVar1) - 1)) == 0x75;
    }
  }
  return false;
}

