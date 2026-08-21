
/* v8::internal::WasmExceptionPackage::GetEncodedSize(v8::internal::wasm::WasmException const*) */

int v8::internal::WasmExceptionPackage::GetEncodedSize(WasmException *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)param_1;
  if (plVar4[1] == 0) {
    return 0;
  }
  uVar3 = 0;
  iVar2 = 0;
  while ((uVar1 = *(byte *)(plVar4[2] + *plVar4 + uVar3) - 1, uVar1 < 9 &&
         ((0x17fU >> (ulong)(uVar1 & 0x1f) & 1) != 0))) {
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + *(int *)(&DAT_019f0a14 + (long)(char)uVar1 * 4);
    if ((ulong)plVar4[1] <= uVar3) {
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

