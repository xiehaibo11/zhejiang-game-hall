
void FUN_014e8a88(int *param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  
LAB_014e8aac:
  piVar18 = param_2 + -2;
  piVar13 = param_1;
LAB_014e8ab4:
  param_1 = piVar13;
  lVar9 = (long)param_2 - (long)param_1;
  uVar5 = lVar9 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_014e8dfc_caseD_0;
  case 2:
    iVar3 = *param_1;
    bVar1 = param_2[-2] < iVar3;
    if (param_1[1] != param_2[-1]) {
      bVar1 = (uint)param_1[1] < (uint)param_2[-1];
    }
    if (!bVar1) {
      return;
    }
    *param_1 = param_2[-2];
    param_2[-2] = iVar3;
    iVar3 = param_1[1];
    param_1[1] = param_2[-1];
    param_2[-1] = iVar3;
    return;
  case 3:
    FUN_014e8f7c(param_1,param_1 + 2,piVar18);
    return;
  case 4:
    FUN_014e90a4(param_1,param_1 + 2,param_1 + 4,piVar18);
    return;
  case 5:
    FUN_014e91a0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,piVar18);
    return;
  default:
    if (0x37 < lVar9) {
      uVar4 = uVar5;
      if ((long)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      piVar13 = param_1 + (uVar4 & 0x3ffffffffffffffe);
      if (lVar9 < 0x1f39) {
        iVar3 = FUN_014e8f7c(param_1,piVar13,piVar18);
      }
      else {
        uVar4 = uVar5 + 3;
        if (-1 < (long)uVar5) {
          uVar4 = uVar5;
        }
        lVar9 = (uVar4 & 0x7ffffffffffffffc) * 2;
        iVar3 = FUN_014e91a0(param_1,(long)param_1 + lVar9,piVar13,(long)piVar13 + lVar9,piVar18);
      }
      uVar16 = piVar13[1];
      iVar8 = (int)*(undefined8 *)param_1;
      uVar12 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
      bVar1 = iVar8 < *piVar13;
      if (uVar16 != uVar12) {
        bVar1 = uVar16 < uVar12;
      }
      piVar7 = piVar18;
      if (!bVar1) goto LAB_014e8b58;
      goto LAB_014e8bac;
    }
    FUN_014e8f7c(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 == param_2) {
      return;
    }
    lVar9 = 0;
    piVar13 = param_1 + 6;
    piVar18 = param_1 + 4;
  }
LAB_014e8e84:
  piVar7 = piVar13;
  iVar3 = *piVar7;
  uVar16 = piVar7[1];
  bVar1 = iVar3 < *piVar18;
  if (piVar18[1] != uVar16) {
    bVar1 = (uint)piVar18[1] < uVar16;
  }
  lVar2 = lVar9;
  if (bVar1) {
    do {
      lVar14 = lVar2;
      *(undefined4 *)((long)param_1 + lVar14 + 0x18) =
           *(undefined4 *)((long)param_1 + lVar14 + 0x10);
      *(undefined4 *)((long)param_1 + lVar14 + 0x1c) =
           *(undefined4 *)((long)param_1 + lVar14 + 0x14);
      piVar13 = param_1;
      if (lVar14 == -0x10) goto LAB_014e8e6c;
      uVar12 = *(uint *)((long)param_1 + lVar14 + 0xc);
      bVar1 = iVar3 < *(int *)((long)param_1 + lVar14 + 8);
      if (uVar12 != uVar16) {
        bVar1 = uVar12 < uVar16;
      }
      lVar2 = lVar14 + -8;
    } while (bVar1);
    piVar13 = (int *)((long)param_1 + lVar14 + 0x10);
LAB_014e8e6c:
    *piVar13 = iVar3;
    piVar13[1] = uVar16;
  }
  lVar9 = lVar9 + 8;
  piVar13 = piVar7 + 2;
  piVar18 = piVar7;
  if (piVar7 + 2 == param_2) {
switchD_014e8dfc_caseD_0:
    return;
  }
  goto LAB_014e8e84;
LAB_014e8b58:
  piVar7 = param_2;
  while (piVar11 = piVar7, param_1 + 4 != piVar11) {
    iVar15 = (int)*(undefined8 *)(piVar11 + -4);
    uVar17 = (uint)((ulong)*(undefined8 *)(piVar11 + -4) >> 0x20);
    bVar1 = iVar15 < *piVar13;
    if (uVar16 != uVar17) {
      bVar1 = uVar16 < uVar17;
    }
    piVar7 = piVar11 + -2;
    if (bVar1) goto code_r0x014e8b90;
  }
  bVar1 = iVar8 < *piVar18;
  if (param_2[-1] != uVar12) {
    bVar1 = (uint)param_2[-1] < uVar12;
  }
  piVar7 = param_1 + 2;
  if (!bVar1) {
    if (piVar7 == piVar18) {
      return;
    }
    piVar7 = param_1 + 4;
    while( true ) {
      iVar3 = (int)*(undefined8 *)(piVar7 + -2);
      uVar16 = (uint)((ulong)*(undefined8 *)(piVar7 + -2) >> 0x20);
      bVar1 = iVar8 < iVar3;
      if (uVar16 != uVar12) {
        bVar1 = uVar16 < uVar12;
      }
      if (bVar1) break;
      piVar7 = piVar7 + 2;
      if (param_2 == piVar7) {
        return;
      }
    }
    piVar7[-2] = *piVar18;
    param_2[-2] = iVar3;
    iVar3 = piVar7[-1];
    piVar7[-1] = param_2[-1];
    param_2[-1] = iVar3;
  }
  piVar11 = piVar18;
  if (piVar7 == piVar18) {
    return;
  }
  while( true ) {
    uVar16 = param_1[1];
    do {
      piVar13 = piVar7;
      piVar7 = piVar13 + 2;
      iVar3 = (int)*(undefined8 *)piVar13;
      uVar12 = (uint)((ulong)*(undefined8 *)piVar13 >> 0x20);
      bVar1 = *param_1 < iVar3;
      if (uVar12 != uVar16) {
        bVar1 = uVar12 < uVar16;
      }
    } while (!bVar1);
    do {
      piVar19 = piVar11;
      piVar11 = piVar19 + -2;
      iVar8 = (int)*(undefined8 *)piVar11;
      uVar12 = (uint)((ulong)*(undefined8 *)piVar11 >> 0x20);
      bVar1 = *param_1 < iVar8;
      if (uVar12 != uVar16) {
        bVar1 = uVar12 < uVar16;
      }
    } while (bVar1);
    if (piVar11 <= piVar13) break;
    *piVar13 = iVar8;
    *piVar11 = iVar3;
    iVar3 = piVar13[1];
    piVar13[1] = piVar19[-1];
    piVar19[-1] = iVar3;
  }
  goto LAB_014e8ab4;
code_r0x014e8b90:
  *param_1 = iVar15;
  piVar11[-4] = iVar8;
  iVar8 = param_1[1];
  iVar3 = iVar3 + 1;
  param_1[1] = piVar11[-3];
  piVar11[-3] = iVar8;
  piVar7 = piVar11 + -4;
LAB_014e8bac:
  piVar11 = param_1 + 2;
  piVar10 = piVar13;
  piVar19 = piVar11;
  if (piVar11 < piVar7) {
    while( true ) {
      piVar13 = piVar10;
      uVar16 = piVar13[1];
      piVar11 = piVar19 + -2;
      do {
        piVar10 = piVar11;
        piVar11 = piVar10 + 2;
        iVar8 = (int)*(undefined8 *)piVar11;
        uVar12 = (uint)((ulong)*(undefined8 *)piVar11 >> 0x20);
        bVar1 = iVar8 < *piVar13;
        if (uVar16 != uVar12) {
          bVar1 = uVar16 < uVar12;
        }
      } while (bVar1);
      piVar19 = piVar10 + 4;
      do {
        piVar6 = piVar7;
        piVar7 = piVar6 + -2;
        iVar15 = (int)*(undefined8 *)piVar7;
        uVar12 = (uint)((ulong)*(undefined8 *)piVar7 >> 0x20);
        bVar1 = iVar15 < *piVar13;
        if (uVar16 != uVar12) {
          bVar1 = uVar16 < uVar12;
        }
      } while (!bVar1);
      if (piVar7 < piVar11) break;
      *piVar11 = iVar15;
      *piVar7 = iVar8;
      iVar8 = piVar10[3];
      iVar3 = iVar3 + 1;
      piVar10[3] = piVar6[-1];
      piVar6[-1] = iVar8;
      piVar10 = piVar7;
      if (piVar13 != piVar11) {
        piVar10 = piVar13;
      }
    }
  }
  if (piVar11 != piVar13) {
    iVar8 = *piVar11;
    bVar1 = *piVar13 < iVar8;
    if (piVar11[1] != piVar13[1]) {
      bVar1 = (uint)piVar11[1] < (uint)piVar13[1];
    }
    if (bVar1) {
      *piVar11 = *piVar13;
      *piVar13 = iVar8;
      iVar8 = piVar11[1];
      iVar3 = iVar3 + 1;
      piVar11[1] = piVar13[1];
      piVar13[1] = iVar8;
    }
  }
  if (iVar3 == 0) {
    uVar5 = FUN_014e92ec(param_1,piVar11);
    uVar4 = FUN_014e92ec(piVar11 + 2,param_2);
    if ((uVar4 & 1) != 0) goto LAB_014e8ddc;
    piVar13 = piVar11 + 2;
    if ((uVar5 & 1) != 0) goto LAB_014e8ab4;
  }
  if ((long)param_2 - (long)piVar11 <= (long)piVar11 - (long)param_1) {
    FUN_014e8a88(piVar11 + 2,param_2);
    param_2 = piVar11;
    goto LAB_014e8aac;
  }
  FUN_014e8a88(param_1,piVar11);
  piVar13 = piVar11 + 2;
  goto LAB_014e8ab4;
LAB_014e8ddc:
  param_2 = piVar11;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_014e8aac;
}

