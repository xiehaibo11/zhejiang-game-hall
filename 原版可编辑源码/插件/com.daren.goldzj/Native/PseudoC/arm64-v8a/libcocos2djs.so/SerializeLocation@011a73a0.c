
/* v8::internal::HeapSnapshotJSONSerializer::SerializeLocation(v8::internal::SourceLocation const&)
    */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeLocation
          (HeapSnapshotJSONSerializer *this,SourceLocation *param_1)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte abStack_59 [49];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  pbVar2 = abStack_59 + 1;
  uVar5 = *(int *)param_1 * 6;
  uVar6 = (ulong)uVar5;
  lVar10 = 0;
  uVar9 = uVar6;
  do {
    lVar11 = lVar10;
    uVar7 = (uint)uVar9;
    uVar9 = uVar9 / 10;
    lVar10 = lVar11 + 1;
  } while (9 < uVar7);
  abStack_59[lVar11 + 1] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
  uVar9 = lVar11 + 2;
  if (9 < uVar5) {
    do {
      lVar11 = lVar11 + -1;
      uVar5 = (uint)uVar6;
      pbVar2[lVar11] = (char)(uVar6 / 10) + (char)((uVar6 / 10) / 10) * -10 | 0x30;
      uVar6 = uVar6 / 10;
    } while (99 < uVar5);
  }
  pbVar2[lVar10] = 0x2c;
  uVar5 = *(uint *)(param_1 + 4);
  do {
    iVar8 = (int)uVar9;
    uVar7 = iVar8 + 1;
    uVar9 = (ulong)uVar7;
    bVar1 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar1);
  uVar5 = *(uint *)(param_1 + 4);
  lVar10 = (long)(int)uVar7;
  do {
    lVar10 = lVar10 + -1;
    pbVar2[lVar10] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar1);
  pbVar2[(int)uVar7] = 0x2c;
  iVar8 = iVar8 + 2;
  uVar5 = *(uint *)(param_1 + 8);
  do {
    iVar4 = iVar8;
    iVar8 = iVar4 + 1;
    bVar1 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar1);
  uVar5 = *(uint *)(param_1 + 8);
  lVar10 = (long)iVar8;
  do {
    lVar10 = lVar10 + -1;
    pbVar2[lVar10] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar1);
  pbVar2[iVar8] = 0x2c;
  iVar8 = iVar4 + 2;
  uVar5 = *(uint *)(param_1 + 0xc);
  do {
    iVar4 = iVar8;
    iVar8 = iVar4 + 1;
    bVar1 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar1);
  uVar5 = *(uint *)(param_1 + 0xc);
  lVar10 = (long)iVar8;
  do {
    lVar10 = lVar10 + -1;
    pbVar2[lVar10] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar5;
    uVar5 = uVar5 / 10;
  } while (bVar1);
  pbVar2[iVar8] = 10;
  pbVar2[iVar4 + 2] = 0;
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),(char *)pbVar2);
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

