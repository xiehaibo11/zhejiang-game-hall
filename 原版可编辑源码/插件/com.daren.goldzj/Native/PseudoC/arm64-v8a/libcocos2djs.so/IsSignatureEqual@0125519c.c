
/* v8::internal::WasmCapiFunction::IsSignatureEqual(v8::internal::Signature<v8::internal::wasm::ValueType>
   const*) const */

undefined8 __thiscall
v8::internal::WasmCapiFunction::IsSignatureEqual(WasmCapiFunction *this,Signature *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong local_18;
  
  uVar3 = *(ulong *)param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar1 = SharedFunctionInfo::wasm_capi_function_data((SharedFunctionInfo *)&local_18);
  iVar8 = (int)uVar3;
  iVar7 = (int)uVar2;
  uVar1 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x13);
  if (iVar7 + iVar8 + 1 == *(int *)(uVar1 + 3) >> 1) {
    if (iVar8 < 1) {
      uVar3 = 0;
    }
    else {
      pcVar4 = *(char **)(param_1 + 0x10);
      uVar3 = uVar3 & 0xffffffff;
      pcVar5 = (char *)(uVar1 + 7);
      uVar6 = uVar3;
      do {
        if (*pcVar4 != *pcVar5) {
          return 0;
        }
        pcVar5 = pcVar5 + 1;
        uVar6 = uVar6 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar6 != 0);
    }
    if (*(char *)(uVar1 + uVar3 + 7) == '\0') {
      if (0 < iVar7) {
        uVar2 = uVar2 & 0xffffffff;
        pcVar5 = (char *)(uVar1 + uVar3 + 8);
        pcVar4 = (char *)(*(long *)(param_1 + 0x10) + *(long *)param_1);
        do {
          if (*pcVar4 != *pcVar5) {
            return 0;
          }
          pcVar4 = pcVar4 + 1;
          uVar2 = uVar2 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar2 != 0);
      }
      return 1;
    }
  }
  return 0;
}

