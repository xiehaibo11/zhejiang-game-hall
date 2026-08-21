
undefined8 * filterbank_new(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = param_2 + 1;
  }
  iVar2 = (iVar2 << 0xf) >> 0x10;
  sVar7 = FUN_00109128(iVar2 * 0x61 >> 2);
  sVar8 = FUN_00109128((iVar2 * iVar2 * 2 >> 0x10) * 0x14 + ((iVar2 * iVar2 & 0x7fffU) * 5 >> 0xd));
  puVar9 = calloc(0x28,1);
  *(int *)(puVar9 + 4) = param_1;
  *(uint *)((long)puVar9 + 0x24) = param_3;
  pvVar10 = calloc((long)(int)(param_3 << 2),1);
  *puVar9 = pvVar10;
  pvVar11 = calloc((long)(int)(param_3 << 2),1);
  puVar9[1] = pvVar11;
  pvVar12 = calloc((long)(int)(param_3 << 1),1);
  puVar9[2] = pvVar12;
  pvVar13 = calloc((long)(int)(param_3 << 1),1);
  puVar9[3] = pvVar13;
  if (0 < (int)param_3) {
    uVar3 = -(param_3 >> 0xf & 1) & 0xfffe0000 | (param_3 & 0xffff) << 1;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = (param_2 << 0xf) / (int)uVar3;
    }
    iVar17 = param_1 + -1;
    iVar2 = iVar2 * 0xd1b + sVar7 * 0x68cd + sVar8 * 0x11ec;
    iVar5 = 0;
    if (iVar17 != 0) {
      iVar5 = (iVar2 + (iVar17 * 0x10000 >> 0x11)) / iVar17;
    }
    iVar17 = 0;
    lVar18 = 0;
    iVar1 = iVar5 * 2 + 0x8000 >> 0x10;
    do {
      iVar6 = (int)(short)((short)((uint)iVar17 >> 0x10) * (short)((uVar4 << 1) >> 0x10) +
                          (short)((iVar17 >> 0x10) * (uVar4 & 0x7fff) + 0x4000 >> 0xf));
      sVar7 = FUN_00109128(iVar6 * 0x61 >> 2);
      sVar8 = FUN_00109128((iVar6 * iVar6 * 2 >> 0x10) * 0x14 +
                           ((iVar6 * iVar6 & 0x7fffU) * 5 >> 0xd));
      iVar6 = iVar6 * 0xd1b + sVar7 * 0x68cd + sVar8 * 0x11ec;
      if (iVar2 < iVar6) {
        return puVar9;
      }
      iVar14 = 0;
      if (iVar5 != 0) {
        iVar14 = iVar6 / iVar5;
      }
      if (param_1 + -2 < iVar14) {
        sVar7 = 0x7fff;
        iVar14 = param_1 + -2;
      }
      else {
        sVar7 = 0;
        if (iVar1 != 0) {
          sVar7 = (short)((iVar6 - iVar14 * iVar5) / iVar1);
        }
      }
      lVar15 = lVar18 * 4;
      *(int *)((long)pvVar10 + lVar15) = iVar14;
      lVar16 = lVar18 * 2;
      lVar18 = lVar18 + 1;
      *(short *)((long)pvVar12 + lVar16) = 0x7fff - sVar7;
      iVar17 = iVar17 + 0x10000;
      *(int *)((long)pvVar11 + lVar15) = iVar14 + 1;
      *(short *)((long)pvVar13 + lVar16) = sVar7;
    } while (lVar18 < (int)param_3);
  }
  return puVar9;
}

