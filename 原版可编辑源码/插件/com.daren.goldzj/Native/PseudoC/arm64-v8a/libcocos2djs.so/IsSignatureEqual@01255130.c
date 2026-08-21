
/* v8::internal::WasmExceptionObject::IsSignatureEqual(v8::internal::Signature<v8::internal::wasm::ValueType>
   const*) */

undefined8 __thiscall
v8::internal::WasmExceptionObject::IsSignatureEqual(WasmExceptionObject *this,Signature *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar4 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  iVar1 = (int)*(ulong *)(param_1 + 8);
  if (iVar1 != *(int *)(uVar4 + 3) >> 1) {
    return 0;
  }
  if (0 < iVar1) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xffffffff;
    pcVar5 = (char *)(uVar4 + 7);
    pcVar3 = (char *)(*(long *)(param_1 + 0x10) + *(long *)param_1);
    do {
      if (*pcVar3 != *pcVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 1;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar2 != 0);
  }
  return 1;
}

