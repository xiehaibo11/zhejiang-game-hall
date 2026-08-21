
int FUN_0116e638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
                undefined1 param_5 [16],undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                int param_9,float *param_10)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar16 = param_5._0_4_;
  fVar14 = param_4._0_4_;
  if (param_9 < 0) {
    iVar5 = 0;
  }
  else if (param_9 == 0) {
    iVar5 = 1;
    *param_10 = fVar14;
    param_10[1] = fVar16;
  }
  else {
    fVar15 = fVar16 - (float)param_3;
    fVar13 = fVar14 - (float)param_2;
    uVar7 = 0;
    uVar6 = param_9 - 1;
    lVar8 = 0;
    fVar17 = 0.0;
    do {
      lVar10 = (ulong)uVar6 << 0x20;
      lVar9 = (long)(int)uVar6;
      while (fVar18 = ((float)param_3 - *(float *)((long)(param_8 + lVar8) + 4)) * fVar13 +
                      fVar15 * (*(float *)(param_8 + lVar8) - (float)param_2),
            fVar18 <= SQRT(fVar15 * fVar15 + fVar13 * fVar13) * (float)param_1) {
        uVar12 = param_8[lVar8];
        lVar10 = lVar10 + -0x100000000;
        param_8[lVar8] = param_8[lVar9];
        param_8[lVar9] = uVar12;
        bVar1 = lVar9 <= lVar8;
        lVar9 = lVar9 + -1;
        if (bVar1) goto LAB_0116e72c;
      }
      lVar2 = lVar8 + 1;
      uVar6 = (uint)lVar8;
      if (fVar18 <= fVar17) {
        uVar6 = (uint)uVar7;
      }
      uVar7 = (ulong)uVar6;
      uVar6 = (uint)lVar9;
      bVar1 = lVar8 < lVar10 >> 0x20;
      lVar8 = lVar2;
      fVar17 = fVar18;
    } while (bVar1);
LAB_0116e72c:
    if ((int)uVar7 != 0) {
      uVar7 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
      uVar12 = *param_8;
      *param_8 = *(undefined8 *)((long)param_8 + uVar7);
      *(undefined8 *)((long)param_8 + uVar7) = uVar12;
    }
    iVar5 = (int)lVar8;
    iVar4 = FUN_0116e638(param_1,param_2,param_3,*(undefined4 *)param_8,
                         *(undefined4 *)((long)param_8 + 4),param_4._0_8_,param_5._0_8_,param_8 + 1,
                         iVar5 + -1,param_10);
    param_9 = param_9 - iVar5;
    puVar3 = (undefined8 *)((long)param_8 + ((lVar8 << 0x20) >> 0x1d));
    param_10[(long)iVar4 * 2] = fVar14;
    (param_10 + (long)iVar4 * 2)[1] = fVar16;
    if ((param_9 == 0) || (uVar6 = param_9 - 1, param_9 < 1)) {
      iVar11 = 0;
    }
    else {
      fVar15 = (float)param_7 - fVar16;
      fVar13 = (float)param_6 - fVar14;
      uVar7 = 0;
      lVar8 = 0;
      fVar17 = 0.0;
      do {
        lVar10 = (ulong)uVar6 << 0x20;
        lVar9 = (long)(int)uVar6;
        while (fVar18 = (fVar16 - *(float *)((long)(puVar3 + lVar8) + 4)) * fVar13 +
                        fVar15 * (*(float *)(puVar3 + lVar8) - fVar14),
              fVar18 <= SQRT(fVar15 * fVar15 + fVar13 * fVar13) * (float)param_1) {
          uVar12 = puVar3[lVar8];
          lVar10 = lVar10 + -0x100000000;
          puVar3[lVar8] = puVar3[lVar9];
          puVar3[lVar9] = uVar12;
          bVar1 = lVar9 <= lVar8;
          lVar9 = lVar9 + -1;
          if (bVar1) goto LAB_0116e858;
        }
        lVar2 = lVar8 + 1;
        uVar6 = (uint)lVar8;
        if (fVar18 <= fVar17) {
          uVar6 = (uint)uVar7;
        }
        uVar7 = (ulong)uVar6;
        uVar6 = (uint)lVar9;
        bVar1 = lVar8 < lVar10 >> 0x20;
        lVar8 = lVar2;
        fVar17 = fVar18;
      } while (bVar1);
LAB_0116e858:
      iVar11 = (int)lVar8;
      if ((int)uVar7 != 0) {
        uVar7 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
        uVar12 = *puVar3;
        *puVar3 = *(undefined8 *)((long)puVar3 + uVar7);
        *(undefined8 *)((long)puVar3 + uVar7) = uVar12;
      }
    }
    iVar5 = FUN_0116e638(param_1,param_4._0_8_,param_5._0_8_,*(undefined4 *)puVar3,
                         *(undefined4 *)((long)param_8 + (long)iVar5 * 8 + 4),param_6,param_7,
                         puVar3 + 1,iVar11 + -1,param_10 + ((long)iVar4 + 1) * 2);
    iVar5 = iVar5 + (int)((long)iVar4 + 1);
  }
  return iVar5;
}

