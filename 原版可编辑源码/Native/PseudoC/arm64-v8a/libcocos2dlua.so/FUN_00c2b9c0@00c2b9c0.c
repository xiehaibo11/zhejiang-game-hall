
undefined8 FUN_00c2b9c0(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double *pdVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar7 = *(ulong *)((*(ulong *)(lVar9 + -0x10) & 0x7fffffffffff) + 0x30) & 0x7fffffffffff;
  lVar6 = uVar7 + 0x30;
  if (*(int *)(uVar7 + 0x50) == 0) {
    FUN_00c2b8c8(0,lVar6);
  }
  dVar4 = (double)FUN_00c2b84c(lVar6);
  iVar8 = (int)(lVar3 - lVar9 >> 3);
  dVar4 = dVar4 - 1.0;
  if (0 < iVar8) {
    FUN_00c29bdc(param_1,1);
    pdVar5 = *(double **)(param_1 + 0x20);
    bVar1 = (int)((long)*pdVar5 >> 0x2f) == -0xe;
    if (bVar1) {
      dVar11 = (double)*(int *)pdVar5;
    }
    else {
      dVar11 = *pdVar5;
    }
    if (iVar8 == 1) {
      dVar4 = (double)(long)(dVar4 * dVar11) + 1.0;
    }
    else {
      FUN_00c29bdc(param_1,2);
      lVar6 = *(long *)(param_1 + 0x20);
      bVar2 = (int)((long)*(undefined8 *)(lVar6 + 8) >> 0x2f) == -0xe;
      if (bVar2) {
        dVar10 = (double)*(int *)(lVar6 + 8);
      }
      else {
        dVar10 = *(double *)(lVar6 + 8);
      }
      bVar1 = bVar2 && bVar1;
      dVar4 = (double)(long)(((dVar10 - dVar11) + 1.0) * dVar4) + dVar11;
    }
    if (bVar1) {
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + -4) = 0xfff90000;
      *(int *)(lVar6 + -8) = (int)dVar4;
      return 1;
    }
  }
  pdVar5 = *(double **)(param_1 + 0x28);
  *(double **)(param_1 + 0x28) = pdVar5 + 1;
  *pdVar5 = dVar4;
  return 1;
}

