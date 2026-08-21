
/* v8::internal::wasm::CWasmArgumentsPacker::TotalSize(v8::internal::Signature<v8::internal::wasm::ValueType>*)
    */

uint v8::internal::wasm::CWasmArgumentsPacker::TotalSize(Signature *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  
  uVar2 = 0;
  pbVar3 = *(byte **)(param_1 + 0x10);
  for (lVar5 = *(long *)param_1; lVar5 != 0; lVar5 = lVar5 + -1) {
    uVar4 = *pbVar3 - 1;
    if ((8 < uVar4) || ((0x17fU >> (ulong)(uVar4 & 0x1f) & 1) == 0)) goto LAB_0123f698;
    pbVar3 = pbVar3 + 1;
    uVar2 = *(int *)(&DAT_019ef5f0 + (long)(char)uVar4 * 4) + uVar2;
  }
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pbVar3 = *(byte **)(param_1 + 0x10) + *(long *)param_1;
    do {
      uVar1 = *pbVar3 - 1;
      if ((8 < uVar1) || ((0x17fU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
LAB_0123f698:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar5 = lVar5 + -1;
      pbVar3 = pbVar3 + 1;
      uVar4 = *(int *)(&DAT_019ef5f0 + (long)(char)uVar1 * 4) + uVar4;
    } while (lVar5 != 0);
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  return uVar4;
}

