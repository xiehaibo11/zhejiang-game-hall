
/* v8::internal::wasm::GetNearestWasmFunction(v8::internal::wasm::WasmModule const*, unsigned int)
    */

uint v8::internal::wasm::GetNearestWasmFunction(WasmModule *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) >> 5;
  if ((int)uVar3 == 0) {
    return 0xffffffff;
  }
  if ((int)uVar3 < 2) {
    return 0;
  }
  uVar2 = 0;
  uVar5 = uVar3 & 0xffffffff;
  do {
    uVar1 = uVar2 + ((uint)uVar3 >> 1);
    uVar4 = uVar1;
    if (*(uint *)(*(long *)(param_1 + 0x88) + (long)(int)uVar1 * 0x20 + 0x10) <= param_2) {
      uVar4 = (uint)uVar5;
      uVar2 = uVar1;
    }
    uVar5 = (ulong)uVar4;
    uVar3 = (ulong)(uVar4 - uVar2);
  } while (1 < (int)(uVar4 - uVar2));
  return uVar2;
}

