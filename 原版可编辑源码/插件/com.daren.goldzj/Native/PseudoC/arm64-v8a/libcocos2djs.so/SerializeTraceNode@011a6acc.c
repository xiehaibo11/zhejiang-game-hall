
/* v8::internal::HeapSnapshotJSONSerializer::SerializeTraceNode(v8::internal::AllocationTraceNode*)
    */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeTraceNode
          (HeapSnapshotJSONSerializer *this,AllocationTraceNode *param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  AllocationTraceNode *pAVar14;
  undefined8 *puVar15;
  byte abStack_89 [49];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pbVar2 = abStack_89 + 1;
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar8 = (ulong)uVar7;
  lVar11 = 0;
  uVar10 = uVar8;
  do {
    lVar12 = lVar11;
    uVar9 = (uint)uVar10;
    uVar10 = uVar10 / 10;
    lVar11 = lVar12 + 1;
  } while (9 < uVar9);
  abStack_89[lVar12 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
  uVar10 = lVar12 + 2;
  if (9 < uVar7) {
    do {
      lVar12 = lVar12 + -1;
      uVar7 = (uint)uVar8;
      pbVar2[lVar12] = (char)(uVar8 / 10) + (char)((uVar8 / 10) / 10) * -10 | 0x30;
      uVar8 = uVar8 / 10;
    } while (99 < uVar7);
  }
  pbVar2[lVar11] = 0x2c;
  uVar7 = *(uint *)(param_1 + 8);
  do {
    iVar5 = (int)uVar10;
    uVar9 = iVar5 + 1;
    uVar10 = (ulong)uVar9;
    bVar1 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  uVar7 = *(uint *)(param_1 + 8);
  lVar11 = (long)(int)uVar9;
  do {
    lVar11 = lVar11 + -1;
    pbVar2[lVar11] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  pbVar2[(int)uVar9] = 0x2c;
  iVar5 = iVar5 + 2;
  uVar7 = *(uint *)(param_1 + 0x10);
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    bVar1 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  uVar7 = *(uint *)(param_1 + 0x10);
  lVar11 = (long)iVar5;
  do {
    lVar11 = lVar11 + -1;
    pbVar2[lVar11] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  pbVar2[iVar5] = 0x2c;
  iVar5 = iVar6 + 2;
  uVar7 = *(uint *)(param_1 + 0xc);
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    bVar1 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  uVar7 = *(uint *)(param_1 + 0xc);
  lVar11 = (long)iVar5;
  do {
    lVar11 = lVar11 + -1;
    pbVar2[lVar11] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar7;
    uVar7 = uVar7 / 10;
  } while (bVar1);
  pbVar2[iVar5] = 0x2c;
  pbVar2[iVar6 + 2] = 0x5b;
  pbVar2[iVar6 + 3] = 0;
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),(char *)pbVar2);
  puVar13 = *(undefined8 **)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar13 != puVar3) {
    SerializeTraceNode(this,(AllocationTraceNode *)*puVar13);
    while (puVar13 = puVar13 + 1, puVar13 != puVar3) {
      puVar15 = *(undefined8 **)(this + 0x28);
      pAVar14 = (AllocationTraceNode *)*puVar13;
      iVar5 = *(int *)(puVar15 + 4);
      *(int *)(puVar15 + 4) = iVar5 + 1;
      *(undefined1 *)(puVar15[2] + (long)iVar5) = 0x2c;
      if ((*(int *)(puVar15 + 4) == *(int *)(puVar15 + 1)) &&
         (*(char *)((long)puVar15 + 0x24) == '\0')) {
        iVar5 = (**(code **)(*(long *)*puVar15 + 0x20))((long *)*puVar15,puVar15[2]);
        if (iVar5 == 1) {
          *(undefined1 *)((long)puVar15 + 0x24) = 1;
        }
        *(undefined4 *)(puVar15 + 4) = 0;
      }
      SerializeTraceNode(this,pAVar14);
    }
  }
  puVar13 = *(undefined8 **)(this + 0x28);
  iVar5 = *(int *)(puVar13 + 4);
  *(int *)(puVar13 + 4) = iVar5 + 1;
  *(undefined1 *)(puVar13[2] + (long)iVar5) = 0x5d;
  if ((*(int *)(puVar13 + 4) == *(int *)(puVar13 + 1)) && (*(char *)((long)puVar13 + 0x24) == '\0'))
  {
    iVar5 = (**(code **)(*(long *)*puVar13 + 0x20))((long *)*puVar13,puVar13[2]);
    if (iVar5 == 1) {
      *(undefined1 *)((long)puVar13 + 0x24) = 1;
    }
    *(undefined4 *)(puVar13 + 4) = 0;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

