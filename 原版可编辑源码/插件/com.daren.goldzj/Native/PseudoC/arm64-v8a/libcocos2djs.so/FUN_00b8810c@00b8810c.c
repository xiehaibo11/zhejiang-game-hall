
undefined8 FUN_00b8810c(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = (ulong)param_2;
  lVar5 = bn_wexpand();
  if (lVar5 == 0) {
    return 0;
  }
  uVar3 = 1 << (ulong)(param_5 & 0x1f);
  if ((int)param_5 < 4) {
    if (0 < (int)param_2) {
      uVar8 = 0;
      do {
        lVar5 = 0;
        uVar13 = 0;
        do {
          uVar2 = (uint)lVar5 ^ param_4;
          lVar11 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          uVar13 = *(ulong *)(param_3 + lVar11) &
                   -(ulong)((uVar2 - 1 & (uVar2 ^ 0xffffffff)) >> 0x1f) | uVar13;
        } while (lVar5 < (int)uVar3);
        param_3 = param_3 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
        *(ulong *)(*param_1 + uVar8 * 8) = uVar13;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar14);
    }
  }
  else if (0 < (int)param_2) {
    param_5 = param_5 - 2;
    if (param_5 == 0x1f) {
      lVar5 = *param_1;
      if (param_2 < 4) {
        lVar11 = 0;
      }
      else {
        lVar11 = uVar14 - (param_2 & 3);
        if (lVar11 != 0) {
          puVar10 = (undefined8 *)(lVar5 + 0x10);
          lVar9 = lVar11;
          do {
            puVar10[-1] = 0;
            puVar10[-2] = 0;
            puVar10[1] = 0;
            *puVar10 = 0;
            lVar9 = lVar9 + -4;
            puVar10 = puVar10 + 4;
          } while (lVar9 != 0);
          if ((param_2 & 3) == 0) goto LAB_00b88338;
        }
      }
      lVar9 = uVar14 - lVar11;
      puVar10 = (undefined8 *)(lVar5 + lVar11 * 8);
      do {
        lVar9 = lVar9 + -1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (lVar9 != 0);
    }
    else {
      uVar2 = (int)param_4 >> (param_5 & 0x1f);
      iVar4 = 1 << (ulong)(param_5 & 0x1f);
      uVar1 = uVar2 ^ 0x80000000;
      lVar12 = (long)(int)uVar3 * 8;
      uVar8 = 0;
      lVar5 = param_3 + (long)(3 << (ulong)(param_5 & 0x1f)) * 8;
      lVar11 = param_3 + (long)(iVar4 << 1) * 8;
      lVar9 = param_3 + (long)iVar4 * 8;
      do {
        lVar6 = 0;
        uVar13 = 0;
        do {
          lVar7 = lVar6 * 8;
          uVar3 = iVar4 - 1U & param_4 ^ (uint)lVar6;
          lVar6 = lVar6 + 1;
          uVar13 = (*(ulong *)(lVar9 + lVar7) & -(ulong)(((uVar2 ^ 1) - 1 & uVar1) >> 0x1f) |
                    *(ulong *)(param_3 + lVar7) & -(ulong)((uVar2 - 1 & uVar1) >> 0x1f) |
                    *(ulong *)(lVar11 + lVar7) & -(ulong)(((uVar2 ^ 2) - 1 & uVar1) >> 0x1f) |
                   *(ulong *)(lVar5 + lVar7) & -(ulong)(((uVar2 ^ 3) - 1 & uVar1) >> 0x1f)) &
                   -(ulong)((uVar3 - 1 & (uVar3 ^ 0xffffffff)) >> 0x1f) | uVar13;
        } while (lVar6 < iVar4);
        lVar5 = lVar5 + lVar12;
        lVar11 = lVar11 + lVar12;
        lVar9 = lVar9 + lVar12;
        *(ulong *)(*param_1 + uVar8 * 8) = uVar13;
        uVar8 = uVar8 + 1;
        param_3 = param_3 + lVar12;
      } while (uVar8 != uVar14);
    }
  }
LAB_00b88338:
  *(uint *)(param_1 + 1) = param_2;
  bn_correct_top(param_1);
  return 1;
}

