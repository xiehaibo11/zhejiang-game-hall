
undefined8 FUN_00e92604(long param_1,undefined8 param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar4 = FUN_00e92264();
  uVar14 = (ulong)uVar4;
  iVar5 = oggpack_eop(param_2);
  if (iVar5 != 0) {
    return 0xffffffff;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 3) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    uVar14 = (ulong)(*(int *)(param_1 + 0x3c) * uVar4);
    lVar8 = *(long *)(param_1 + 0x40) + uVar14;
    if (*(int *)(param_1 + 0x18) < 9) {
      if (0 < (long)uVar7) {
        lVar9 = 0;
        do {
          param_3[lVar9] = (uint)*(byte *)(lVar8 + lVar9);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)uVar7);
      }
    }
    else if (0 < (long)uVar7) {
      if (uVar7 < 8) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar7 & 0xfffffffffffffff8;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + uVar14 + 8);
        puVar11 = (ulong *)(param_3 + 4);
        uVar14 = uVar12;
        do {
          uVar15 = puVar10[-1];
          uVar16 = *puVar10;
          puVar10 = puVar10 + 2;
          uVar14 = uVar14 - 8;
          puVar11[-1] = (ulong)CONCAT24((short)((ulong)uVar15 >> 0x30),
                                        (uint)(ushort)((ulong)uVar15 >> 0x20));
          puVar11[-2] = (ulong)(CONCAT24((short)((ulong)uVar15 >> 0x10),(int)uVar15) &
                               0xffff0000ffff);
          puVar11[1] = (ulong)CONCAT24((short)((ulong)uVar16 >> 0x30),
                                       (uint)(ushort)((ulong)uVar16 >> 0x20));
          *puVar11 = (ulong)(CONCAT24((short)((ulong)uVar16 >> 0x10),(int)uVar16) & 0xffff0000ffff);
          puVar11 = puVar11 + 4;
        } while (uVar14 != 0);
        if (uVar7 == uVar12) goto LAB_00e927b4;
      }
      do {
        param_3[uVar12] = (uint)*(ushort *)(lVar8 + uVar12 * 2);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)uVar7);
    }
  }
  else if (iVar5 == 2) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    if (0 < (long)uVar7) {
      lVar8 = 0;
      uVar4 = ~(-1 << (ulong)(*(uint *)(param_1 + 0x3c) & 0x1f));
      do {
        if (*(int *)(param_1 + 0x18) < 9) {
          uVar6 = (uint)*(byte *)(*(long *)(param_1 + 0x40) + (uVar14 & uVar4));
        }
        else {
          uVar6 = (uint)*(ushort *)(*(long *)(param_1 + 0x40) + (ulong)((uint)uVar14 & uVar4) * 2);
        }
        param_3[lVar8] = uVar6;
        uVar7 = *(ulong *)(param_1 + 0x20);
        lVar8 = lVar8 + 1;
        uVar14 = (ulong)((uint)uVar14 >> (ulong)(*(uint *)(param_1 + 0x3c) & 0x1f));
      } while (lVar8 < (long)uVar7);
    }
  }
  else {
    if (iVar5 != 1) {
      return 0xffffffff;
    }
    uVar7 = *(ulong *)(param_1 + 0x20);
    if (0 < (long)uVar7) {
      uVar4 = *(uint *)(param_1 + 0x18);
      lVar8 = 0;
      do {
        param_3[lVar8] = (uint)uVar14 & ~(-1 << (ulong)(uVar4 & 0x1f));
        lVar8 = lVar8 + 1;
        uVar14 = (ulong)((uint)uVar14 >> (ulong)(*(uint *)(param_1 + 0x18) & 0x1f));
      } while (lVar8 < (long)uVar7);
    }
  }
LAB_00e927b4:
  uVar4 = param_4 - *(int *)(param_1 + 0x28);
  uVar6 = param_4 - *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x34) >> (uVar6 & 0x1f);
  if ((int)uVar6 < 1) {
    iVar5 = *(int *)(param_1 + 0x34) << (ulong)(-uVar6 & 0x1f);
  }
  uVar6 = 0;
  if (-1 < (int)uVar4) {
    uVar6 = uVar4;
  }
  lVar8 = uVar7 - 1;
  if ((long)uVar7 < 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x30) << (ulong)(-uVar4 & (int)uVar4 >> 0x1f & 0x1f);
  iVar5 = iVar5 << (ulong)(uVar6 & 0x1f);
  if (uVar7 < 8) {
    uVar12 = 0;
  }
  else {
    uVar12 = uVar7 & 0xfffffffffffffff8;
    piVar13 = param_3 + 4;
    uVar14 = uVar12;
    do {
      uVar14 = uVar14 - 8;
      auVar17._4_4_ = -uVar6;
      auVar17._0_4_ = -uVar6;
      auVar17._8_4_ = -uVar6;
      auVar17._12_4_ = -uVar6;
      auVar2._4_4_ = iVar5 + piVar13[-3] * iVar1;
      auVar2._0_4_ = iVar5 + piVar13[-4] * iVar1;
      auVar2._8_4_ = iVar5 + piVar13[-2] * iVar1;
      auVar2._12_4_ = iVar5 + piVar13[-1] * iVar1;
      auVar17 = NEON_sshl(auVar2,auVar17,4);
      auVar18._4_4_ = -uVar6;
      auVar18._0_4_ = -uVar6;
      auVar18._8_4_ = -uVar6;
      auVar18._12_4_ = -uVar6;
      auVar3._4_4_ = iVar5 + piVar13[1] * iVar1;
      auVar3._0_4_ = iVar5 + *piVar13 * iVar1;
      auVar3._8_4_ = iVar5 + piVar13[2] * iVar1;
      auVar3._12_4_ = iVar5 + piVar13[3] * iVar1;
      auVar18 = NEON_sshl(auVar3,auVar18,4);
      *(long *)(piVar13 + -2) = auVar17._8_8_;
      *(long *)(piVar13 + -4) = auVar17._0_8_;
      *(long *)(piVar13 + 2) = auVar18._8_8_;
      *(long *)piVar13 = auVar18._0_8_;
      piVar13 = piVar13 + 8;
    } while (uVar14 != 0);
    if (uVar7 == uVar12) goto LAB_00e9287c;
  }
  do {
    uVar14 = uVar12 + 1;
    param_3[uVar12] = iVar5 + param_3[uVar12] * iVar1 >> (uVar6 & 0x1f);
    uVar12 = uVar14;
  } while ((long)uVar14 < (long)uVar7);
LAB_00e9287c:
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (1 < (long)uVar7) {
    iVar5 = *param_3;
    do {
      param_3 = param_3 + 1;
      lVar8 = lVar8 + -1;
      iVar5 = *param_3 + iVar5;
      *param_3 = iVar5;
    } while (lVar8 != 0);
    return 0;
  }
  return 0;
}

