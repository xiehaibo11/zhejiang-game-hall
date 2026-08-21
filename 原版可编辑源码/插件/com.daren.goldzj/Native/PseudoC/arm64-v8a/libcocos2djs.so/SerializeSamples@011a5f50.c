
/* v8::internal::HeapSnapshotJSONSerializer::SerializeSamples() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeSamples(HeapSnapshotJSONSerializer *this)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long local_a8;
  char *local_a0;
  undefined8 uStack_98;
  char local_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(**(long **)this + 8);
  piVar12 = *(int **)(lVar6 + 0x38);
  if (piVar12 != *(int **)(lVar6 + 0x40)) {
    local_a0 = local_90;
    lVar13 = *(long *)(piVar12 + 4);
    uStack_98 = 0x22;
    piVar14 = *(int **)(lVar6 + 0x40);
    if (piVar12 != piVar14) {
      iVar15 = 0;
      do {
        if (iVar15 != 0) {
          *local_a0 = ',';
        }
        uVar11 = (uint)(iVar15 != 0);
        local_a8 = *(long *)(piVar12 + 4) - lVar13;
        uVar5 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_a8);
        uVar8 = uVar5;
        uVar3 = uVar11 | 2;
        iVar4 = uVar11 + 3;
        uVar7 = uVar11;
        do {
          iVar10 = iVar4;
          uVar9 = uVar3;
          uVar7 = uVar7 + 1;
          uVar11 = uVar11 + 1;
          bVar1 = 9 < uVar8;
          uVar8 = uVar8 / 10;
          uVar3 = uVar9 + 1;
          iVar4 = iVar10 + 1;
        } while (bVar1);
        lVar6 = (long)(int)uVar7;
        do {
          lVar6 = lVar6 + -1;
          local_a0[lVar6] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
          bVar1 = 9 < uVar5;
          uVar5 = uVar5 / 10;
        } while (bVar1);
        local_a0[(int)uVar11] = ',';
        uVar11 = *piVar12 - 2U;
        do {
          uVar7 = uVar9;
          iVar4 = iVar10;
          uVar9 = uVar7 + 1;
          bVar1 = 9 < uVar11;
          iVar10 = iVar4 + 1;
          uVar11 = uVar11 / 10;
        } while (bVar1);
        lVar6 = (long)iVar4;
        uVar11 = *piVar12 - 2U;
        do {
          lVar6 = lVar6 + -1;
          local_a0[lVar6] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
          bVar1 = 9 < uVar11;
          uVar11 = uVar11 / 10;
        } while (bVar1);
        local_a0[(int)uVar9] = '\n';
        local_a0[(int)(uVar7 + 2)] = '\0';
        OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),local_a0);
        piVar12 = piVar12 + 6;
        iVar15 = iVar15 + 1;
      } while (piVar12 != piVar14);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

