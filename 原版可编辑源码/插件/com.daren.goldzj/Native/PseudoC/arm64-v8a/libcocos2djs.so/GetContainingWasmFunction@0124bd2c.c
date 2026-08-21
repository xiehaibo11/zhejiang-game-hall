
/* v8::internal::wasm::GetContainingWasmFunction(v8::internal::wasm::WasmModule const*, unsigned
   int) */

ulong v8::internal::wasm::GetContainingWasmFunction(WasmModule *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x88);
  uVar5 = (ulong)(*(long *)(param_1 + 0x90) - lVar1) >> 5;
  if ((int)uVar5 != 0) {
    if ((int)uVar5 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar7 = uVar5 & 0xffffffff;
      do {
        uVar6 = (uint)uVar3 + ((uint)uVar5 >> 1);
        uVar2 = *(uint *)(lVar1 + (long)(int)uVar6 * 0x20 + 0x10);
        uVar4 = (uint)uVar3;
        if (uVar2 <= param_2) {
          uVar4 = uVar6;
        }
        uVar3 = (ulong)uVar4;
        if (uVar2 <= param_2) {
          uVar6 = (uint)uVar7;
        }
        uVar7 = (ulong)uVar6;
        uVar5 = (ulong)(uVar6 - uVar4);
      } while (1 < (int)(uVar6 - uVar4));
      if ((int)uVar4 < 0) {
        return uVar3;
      }
    }
    lVar1 = lVar1 + uVar3 * 0x20;
    uVar6 = *(uint *)(lVar1 + 0x10);
    if (uVar6 <= param_2) {
      uVar4 = (uint)uVar3;
      if (*(int *)(lVar1 + 0x14) + uVar6 <= param_2) {
        uVar4 = 0xffffffff;
      }
      return (ulong)uVar4;
    }
  }
  return 0xffffffff;
}

