
undefined8 BN_GF2m_mod_arr(BIGNUM *param_1,BIGNUM *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  int iVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  iVar15 = *param_3;
  if (iVar15 == 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  uVar12 = param_2->top;
  if (param_2 == param_1) goto LAB_00bdc748;
  lVar11 = bn_wexpand(param_1);
  if (lVar11 == 0) {
    return 0;
  }
  uVar12 = param_2->top;
  if (0 < (int)uVar12) {
    puVar14 = param_2->d;
    puVar16 = param_1->d;
    uVar17 = (ulong)(int)uVar12;
    if (uVar12 < 4) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar17 & 0xfffffffffffffffc;
      if (uVar20 != 0) {
        if ((puVar16 < puVar14 + uVar17) && (puVar14 < puVar16 + uVar17)) {
          uVar20 = 0;
        }
        else {
          puVar18 = puVar14 + 2;
          puVar19 = puVar16 + 2;
          uVar21 = uVar20;
          do {
            puVar8 = puVar18 + -1;
            uVar22 = puVar18[-2];
            uVar24 = puVar18[1];
            uVar23 = *puVar18;
            puVar18 = puVar18 + 4;
            uVar21 = uVar21 - 4;
            puVar19[-1] = *puVar8;
            puVar19[-2] = uVar22;
            puVar19[1] = uVar24;
            *puVar19 = uVar23;
            puVar19 = puVar19 + 4;
          } while (uVar21 != 0);
          if (uVar20 == uVar17) goto LAB_00bdc740;
        }
      }
    }
    do {
      uVar21 = uVar20 + 1;
      puVar16[uVar20] = puVar14[uVar20];
      uVar20 = uVar21;
    } while ((long)uVar21 < (long)uVar17);
  }
LAB_00bdc740:
  param_1->top = uVar12;
  iVar15 = *param_3;
LAB_00bdc748:
  puVar14 = param_1->d;
  iVar1 = iVar15 + 0x3f;
  if (-1 < iVar15) {
    iVar1 = iVar15;
  }
  iVar1 = iVar1 >> 6;
  uVar12 = uVar12 - 1;
  uVar17 = (ulong)uVar12;
  if (iVar1 < (int)uVar12) {
    uVar4 = iVar15 % 0x40;
    uVar17 = (ulong)(int)uVar12;
    do {
      uVar20 = puVar14[uVar17];
      if (uVar20 != 0) {
        iVar2 = param_3[1];
        lVar11 = uVar17 - (long)iVar1;
        iVar5 = iVar15 - iVar2;
        iVar3 = iVar5 + 0x3f;
        if (-1 < iVar5) {
          iVar3 = iVar5;
        }
        uVar12 = iVar5 % 0x40;
        lVar13 = (long)((int)uVar17 - (iVar3 >> 6));
        do {
          puVar14[uVar17] = 0;
          if (iVar2 != 0) {
            puVar14[lVar13] = puVar14[lVar13] ^ uVar20 >> ((ulong)uVar12 & 0x3f);
            if (uVar12 != 0) {
              puVar14[lVar13 + -1] =
                   puVar14[lVar13 + -1] ^ uVar20 << ((ulong)(0x40 - uVar12) & 0x3f);
            }
            iVar3 = param_3[2];
            piVar9 = param_3 + 3;
            while (iVar3 != 0) {
              iVar3 = iVar15 - iVar3;
              iVar5 = iVar3 + 0x3f;
              if (-1 < iVar3) {
                iVar5 = iVar3;
              }
              uVar6 = (int)uVar17 - (iVar5 >> 6);
              uVar21 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
              uVar7 = iVar3 % 0x40;
              *(ulong *)((long)puVar14 + uVar21) =
                   *(ulong *)((long)puVar14 + uVar21) ^ uVar20 >> ((ulong)uVar7 & 0x3f);
              if (uVar7 != 0) {
                puVar14[(long)(int)uVar6 + -1] =
                     puVar14[(long)(int)uVar6 + -1] ^ uVar20 << ((ulong)(0x40 - uVar7) & 0x3f);
              }
              iVar3 = *piVar9;
              piVar9 = piVar9 + 1;
            }
          }
          puVar14[lVar11] = puVar14[lVar11] ^ uVar20 >> ((ulong)uVar4 & 0x3f);
          if (uVar4 != 0) {
            puVar14[lVar11 + -1] = puVar14[lVar11 + -1] ^ uVar20 << ((ulong)(0x40 - uVar4) & 0x3f);
          }
          uVar20 = puVar14[uVar17];
        } while (uVar20 != 0);
      }
      uVar17 = uVar17 - 1;
    } while ((long)iVar1 < (long)uVar17);
  }
  if ((int)uVar17 == iVar1) {
    uVar20 = puVar14[iVar1];
    uVar12 = iVar15 % 0x40;
    uVar17 = uVar20 >> ((ulong)uVar12 & 0x3f);
    if (uVar12 == 0) {
      if (uVar17 != 0) {
        uVar12 = param_3[1];
        do {
          puVar14[iVar1] = 0;
          *puVar14 = *puVar14 ^ uVar17;
          uVar4 = uVar12;
          puVar10 = (uint *)(param_3 + 2);
          while (uVar4 != 0) {
            uVar6 = uVar4 + 0x3f;
            if (-1 < (int)uVar4) {
              uVar6 = uVar4;
            }
            uVar20 = -(ulong)((uint)((int)uVar6 >> 6) >> 0x1f) & 0xfffffff800000000 |
                     (ulong)(uint)((int)uVar6 >> 6) << 3;
            uVar4 = (int)uVar4 % 0x40;
            *(ulong *)((long)puVar14 + uVar20) =
                 *(ulong *)((long)puVar14 + uVar20) ^ uVar17 << ((ulong)uVar4 & 0x3f);
            if ((uVar4 != 0) && (uVar20 = uVar17 >> ((ulong)(0x40 - uVar4) & 0x3f), uVar20 != 0)) {
              lVar11 = (long)((ulong)uVar6 << 0x20) >> 0x26;
              puVar14[lVar11 + 1] = puVar14[lVar11 + 1] ^ uVar20;
            }
            uVar4 = *puVar10;
            puVar10 = puVar10 + 1;
          }
          uVar17 = puVar14[iVar1];
        } while (uVar17 != 0);
      }
    }
    else if (uVar17 != 0) {
      uVar4 = param_3[1];
      do {
        puVar14[iVar1] =
             (uVar20 << ((ulong)(0x40 - uVar12) & 0x3f)) >> ((ulong)(0x40 - uVar12) & 0x3f);
        *puVar14 = *puVar14 ^ uVar17;
        uVar6 = uVar4;
        puVar10 = (uint *)(param_3 + 2);
        while (uVar6 != 0) {
          uVar7 = uVar6 + 0x3f;
          if (-1 < (int)uVar6) {
            uVar7 = uVar6;
          }
          uVar20 = -(ulong)((uint)((int)uVar7 >> 6) >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uint)((int)uVar7 >> 6) << 3;
          uVar6 = (int)uVar6 % 0x40;
          *(ulong *)((long)puVar14 + uVar20) =
               *(ulong *)((long)puVar14 + uVar20) ^ uVar17 << ((ulong)uVar6 & 0x3f);
          if ((uVar6 != 0) && (uVar20 = uVar17 >> ((ulong)(0x40 - uVar6) & 0x3f), uVar20 != 0)) {
            lVar11 = (long)((ulong)uVar7 << 0x20) >> 0x26;
            puVar14[lVar11 + 1] = puVar14[lVar11 + 1] ^ uVar20;
          }
          uVar6 = *puVar10;
          puVar10 = puVar10 + 1;
        }
        uVar20 = puVar14[iVar1];
        uVar17 = uVar20 >> ((ulong)uVar12 & 0x3f);
      } while (uVar17 != 0);
    }
  }
  bn_correct_top(param_1);
  return 1;
}

