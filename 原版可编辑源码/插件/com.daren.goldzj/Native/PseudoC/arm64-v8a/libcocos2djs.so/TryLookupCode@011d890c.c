
/* v8::internal::InstructionStream::TryLookupCode(v8::internal::Isolate*, unsigned long) */

undefined8 v8::internal::InstructionStream::TryLookupCode(Isolate *param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = Isolate::embedded_blob(param_1);
  if ((uVar5 <= param_2) &&
     (uVar6 = Isolate::embedded_blob_size(param_1), param_2 < uVar5 + (uVar6 & 0xffffffff))) {
    lVar7 = Isolate::CurrentEmbeddedBlob();
    Isolate::CurrentEmbeddedBlobSize();
    if (lVar7 + 0x2e00 + (ulong)*(uint *)(lVar7 + 0x10) <= param_2) {
      iVar10 = 0;
      iVar9 = 0x5bc;
      do {
        while( true ) {
          iVar2 = iVar10 + iVar9;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(lVar7 + 0x10) + (long)iVar2 * 2;
          uVar5 = lVar7 + 0x2e00 + (ulong)*puVar1;
          if (param_2 < uVar5) break;
          uVar4 = puVar1[1];
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar4 + 0x20 & 0xffffffe0;
          }
          if (param_2 < uVar3 + uVar5) {
            uVar8 = Builtins::builtin((Builtins *)(param_1 + 0x9e00),iVar2);
            return uVar8;
          }
          iVar10 = iVar2 + 1;
          if (iVar9 <= iVar10) goto LAB_011d89e8;
        }
        iVar9 = iVar2;
      } while (iVar10 < iVar2);
LAB_011d89e8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return 0;
}

