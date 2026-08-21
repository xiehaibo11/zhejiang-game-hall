
void FUN_0010d7e0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  int local_48 [4];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  iVar1 = *(int *)(param_1 + 0x1e48) + *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x1c58);
  if (iVar1 == 0) {
    iVar18 = 0;
LAB_0010d9f4:
    if (*(long *)(lVar5 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar18);
  }
  if (*(int *)(param_1 + 0x1f64) == 0) {
    iVar18 = 0;
    if (iVar1 != 0) {
      iVar18 = (*(int *)(param_1 + 0x1f58) * *(int *)(param_1 + 0x1f68)) / iVar1;
    }
    fVar21 = (float)iVar18;
  }
  else {
    fVar21 = ((float)*(int *)(param_1 + 0x1f64) * 100.0) / (float)iVar1;
  }
  local_48[2] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  iVar2 = *(int *)(param_1 + 0x1c54);
  iVar3 = *(int *)(param_1 + 0x1d4c);
  iVar4 = *(int *)(param_1 + 0x1e44);
  iVar14 = 0;
  iVar16 = 0;
  iVar9 = 0;
  bVar6 = false;
  iVar18 = 0;
  iVar11 = 0x7fffffff;
  uVar20 = 1;
  iVar8 = 0;
  if (0 < iVar2) goto LAB_0010d8d8;
  do {
    iVar8 = 0x7fff;
    uVar13 = 0xffffffff;
    iVar15 = iVar14;
    iVar17 = iVar16;
    iVar19 = iVar11;
    iVar10 = iVar9;
LAB_0010d8fc:
    iVar9 = iVar8;
    if (local_48[1] < iVar3) {
      iVar9 = *(int *)(param_1 + (long)local_48[1] * 4 + 0x1d54);
      uVar12 = (uint)uVar13;
      if (iVar9 < iVar8) {
        uVar12 = 1;
      }
      uVar13 = (ulong)uVar12;
      if (iVar8 <= iVar9) {
        iVar9 = iVar8;
      }
    }
    if ((iVar4 <= local_48[2]) ||
       (iVar11 = *(int *)(param_1 + (long)local_48[2] * 4 + 0x1e4c), iVar9 <= iVar11)) {
      iVar14 = iVar15;
      iVar16 = iVar17;
      if ((int)uVar13 != -1) goto LAB_0010d94c;
LAB_0010d9bc:
      *(int *)(param_1 + 0x1f68) = (iVar10 - iVar16) / 0x28 + 1;
      iVar18 = 0;
      if ((short)iVar14 < 1 || 0x27 < iVar1) {
        iVar18 = iVar14;
      }
      goto LAB_0010d9f4;
    }
    uVar13 = 2;
    iVar9 = iVar11;
LAB_0010d94c:
    iVar11 = *(int *)(param_1 + 0x1c38);
    uVar13 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
    iVar16 = iVar9;
    if (uVar20 != 1) {
      iVar16 = iVar17;
    }
    iVar14 = iVar9;
    if (iVar9 < 0) {
      iVar14 = (iVar9 - iVar11) + 1;
    }
    iVar8 = 0;
    if (iVar11 != 0) {
      iVar8 = iVar14 / iVar11;
    }
    iVar17 = iVar8 * iVar11;
    iVar11 = (int)(fVar21 * (float)iVar18 + (float)-(iVar8 * iVar11));
    iVar14 = iVar17;
    if (iVar19 <= iVar11) {
      iVar14 = iVar15;
    }
    bVar7 = !bVar6;
    *(int *)((long)local_48 + uVar13) = *(int *)((long)local_48 + uVar13) + 1;
    iVar10 = iVar9;
    if (0x27 < uVar20) goto LAB_0010d9bc;
    if (bVar7 && iVar17 >= 0) {
      bVar6 = true;
    }
    iVar8 = 5;
    if (!bVar7 || iVar17 < 0) {
      iVar8 = 1;
    }
    iVar18 = iVar8 + iVar18;
    if (iVar19 <= iVar11) {
      iVar11 = iVar19;
    }
    uVar20 = uVar20 + 1;
    iVar8 = local_48[0];
  } while (iVar2 <= local_48[0]);
LAB_0010d8d8:
  iVar8 = *(int *)(param_1 + (long)iVar8 * 4 + 0x1c5c);
  uVar13 = (ulong)-(uint)(0x7ffe < iVar8);
  iVar15 = iVar14;
  iVar17 = iVar16;
  iVar19 = iVar11;
  iVar10 = iVar9;
  if (0x7ffe < iVar8) {
    iVar8 = 0x7fff;
  }
  goto LAB_0010d8fc;
}

