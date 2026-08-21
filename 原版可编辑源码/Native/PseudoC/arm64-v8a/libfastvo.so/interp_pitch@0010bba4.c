
int interp_pitch(long param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  uint local_d8 [4];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc [7];
  int local_a0 [7];
  int local_84 [7];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar25 = param_1 + (long)(int)param_3 * -2;
  uVar26 = (ulong)param_4;
  uVar8 = inner_prod(param_1,lVar25 + -6,param_4);
  local_d8[0] = uVar8;
  uVar9 = inner_prod(param_1,lVar25 + -4,uVar26);
  local_d8[1] = uVar9;
  uVar10 = inner_prod(param_1,lVar25 + -2,uVar26);
  local_d8[2] = uVar10;
  uVar11 = inner_prod(param_1,lVar25,uVar26);
  local_d8[3] = uVar11;
  uVar12 = inner_prod(param_1,lVar25 + 2,uVar26);
  local_c8 = uVar12;
  uVar13 = inner_prod(param_1,lVar25 + 4,uVar26);
  local_c4 = uVar13;
  uVar14 = inner_prod(param_1,lVar25 + 6,uVar26);
  local_c0 = uVar14;
  iVar16 = -3;
  lVar19 = 3;
  lVar25 = 0;
  do {
    uVar23 = 10 - lVar25;
    uVar18 = (uint)lVar19;
    uVar24 = uVar18;
    if (lVar19 < 1) {
      uVar24 = 0;
    }
    iVar20 = (int)(3 - lVar25);
    if (3 - lVar25 < 1) {
      iVar20 = 0;
    }
    if (6 < uVar23) {
      uVar23 = 7;
    }
    iVar21 = 0;
    if (iVar20 < (int)uVar23) {
      iVar21 = 0;
      iVar20 = iVar16 + uVar24;
      uVar15 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
      do {
        lVar1 = uVar15 * 2;
        uVar15 = uVar15 + 1;
        iVar21 = iVar21 + ((int)((local_d8[iVar20] & 0x7fff) * (int)*(short *)(shift_filt + lVar1))
                          >> 0xf) +
                 ((int)(local_d8[iVar20] << 1) >> 0x10) * (int)*(short *)(shift_filt + lVar1);
        iVar20 = iVar20 + 1;
      } while (uVar15 < uVar23);
    }
    lVar1 = lVar25 + 1;
    lVar19 = lVar19 + -1;
    iVar16 = iVar16 + 1;
    local_bc[lVar25] = iVar21;
    lVar25 = lVar1;
  } while (lVar1 != 7);
  iVar16 = -3;
  lVar19 = 3;
  lVar25 = 0;
  do {
    uVar23 = 10 - lVar25;
    uVar18 = (uint)lVar19;
    uVar24 = uVar18;
    if (lVar19 < 1) {
      uVar24 = 0;
    }
    iVar20 = (int)(3 - lVar25);
    if (3 - lVar25 < 1) {
      iVar20 = 0;
    }
    if (6 < uVar23) {
      uVar23 = 7;
    }
    iVar21 = 0;
    if (iVar20 < (int)uVar23) {
      iVar21 = 0;
      iVar20 = iVar16 + uVar24;
      uVar15 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
      do {
        lVar1 = uVar15 * 2;
        uVar15 = uVar15 + 1;
        iVar21 = iVar21 + ((int)((local_d8[iVar20] & 0x7fff) *
                                (int)*(short *)(shift_filt + lVar1 + 0xe)) >> 0xf) +
                 ((int)(local_d8[iVar20] << 1) >> 0x10) * (int)*(short *)(shift_filt + lVar1 + 0xe);
        iVar20 = iVar20 + 1;
      } while (uVar15 < uVar23);
    }
    lVar1 = lVar25 + 1;
    lVar19 = lVar19 + -1;
    iVar16 = iVar16 + 1;
    local_a0[lVar25] = iVar21;
    lVar25 = lVar1;
  } while (lVar1 != 7);
  iVar16 = -3;
  lVar19 = 3;
  lVar25 = 0;
  do {
    uVar23 = 10 - lVar25;
    uVar18 = (uint)lVar19;
    uVar24 = uVar18;
    if (lVar19 < 1) {
      uVar24 = 0;
    }
    iVar20 = (int)(3 - lVar25);
    if (3 - lVar25 < 1) {
      iVar20 = 0;
    }
    if (6 < uVar23) {
      uVar23 = 7;
    }
    iVar21 = 0;
    if (iVar20 < (int)uVar23) {
      iVar21 = 0;
      iVar20 = iVar16 + uVar24;
      uVar15 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
      do {
        lVar1 = uVar15 * 2;
        uVar15 = uVar15 + 1;
        iVar21 = iVar21 + ((int)((local_d8[iVar20] & 0x7fff) *
                                (int)*(short *)(shift_filt + lVar1 + 0x1c)) >> 0xf) +
                 ((int)(local_d8[iVar20] << 1) >> 0x10) * (int)*(short *)(shift_filt + lVar1 + 0x1c)
        ;
        iVar20 = iVar20 + 1;
      } while (uVar15 < uVar23);
    }
    lVar1 = lVar25 + 1;
    lVar19 = lVar19 + -1;
    iVar16 = iVar16 + 1;
    local_84[lVar25] = iVar21;
    lVar25 = lVar1;
  } while (lVar1 != 7);
  lVar25 = 0;
  iVar16 = 0;
  puVar22 = (uint *)(local_bc + 6);
  iVar20 = 0;
  uVar24 = uVar8;
  while( true ) {
    uVar18 = uVar8;
    if ((int)uVar8 <= (int)uVar24) {
      uVar18 = uVar24;
    }
    iVar21 = 0;
    if ((int)uVar8 <= (int)uVar24) {
      iVar21 = iVar16;
    }
    uVar2 = uVar9;
    if ((int)uVar9 <= (int)uVar18) {
      uVar2 = uVar18;
    }
    if ((int)uVar18 < (int)uVar9) {
      iVar21 = 1;
    }
    uVar3 = uVar10;
    if ((int)uVar10 <= (int)uVar2) {
      uVar3 = uVar2;
    }
    iVar16 = 2;
    if ((int)uVar10 <= (int)uVar2) {
      iVar16 = iVar21;
    }
    uVar4 = uVar11;
    if ((int)uVar11 <= (int)uVar3) {
      uVar4 = uVar3;
    }
    iVar21 = 3;
    if ((int)uVar11 <= (int)uVar3) {
      iVar21 = iVar16;
    }
    uVar5 = uVar12;
    if ((int)uVar12 <= (int)uVar4) {
      uVar5 = uVar4;
    }
    iVar16 = 4;
    if ((int)uVar12 <= (int)uVar4) {
      iVar16 = iVar21;
    }
    uVar6 = uVar13;
    if ((int)uVar13 <= (int)uVar5) {
      uVar6 = uVar5;
    }
    iVar21 = 5;
    if ((int)uVar13 <= (int)uVar5) {
      iVar21 = iVar16;
    }
    iVar16 = 6;
    if ((int)uVar14 <= (int)uVar6) {
      iVar16 = iVar21;
    }
    iVar21 = (int)lVar25;
    if ((int)uVar14 <= (int)uVar6 &&
        ((int)uVar13 <= (int)uVar5 &&
        ((int)uVar12 <= (int)uVar4 &&
        ((int)uVar11 <= (int)uVar3 &&
        ((int)uVar10 <= (int)uVar2 && ((int)uVar9 <= (int)uVar18 && (int)uVar8 <= (int)uVar24))))))
    {
      iVar21 = iVar20;
    }
    if (lVar25 == 3) break;
    uVar8 = puVar22[-6];
    uVar9 = puVar22[-5];
    uVar10 = puVar22[-4];
    uVar11 = puVar22[-3];
    uVar12 = puVar22[-2];
    uVar13 = puVar22[-1];
    uVar24 = uVar14;
    if ((int)uVar14 <= (int)uVar6) {
      uVar24 = uVar6;
    }
    uVar14 = *puVar22;
    lVar25 = lVar25 + 1;
    puVar22 = puVar22 + 7;
    iVar20 = iVar21;
  }
  if (0 < (int)param_4) {
    lVar25 = (long)iVar21;
    lVar19 = lVar25 * 0xe;
    uVar23 = 0;
    iVar20 = (-3 - param_3) + iVar16;
    do {
      iVar17 = (int)uVar23;
      if (iVar21 < 1) {
        iVar17 = (int)*(short *)(param_1 + (long)(iVar20 + iVar17) * 2) << 0xf;
      }
      else {
        iVar17 = (int)*(short *)(&DAT_00134b4e + lVar19) *
                 (int)*(short *)(param_1 + (long)(int)((-6 - param_3) + iVar16 + iVar17) * 2) +
                 (int)*(short *)(&DAT_00134b50 + lVar19) *
                 (int)*(short *)(param_1 + (long)(int)((-5 - param_3) + iVar16 + iVar17) * 2) +
                 (int)*(short *)(&DAT_00134b52 + lVar19) *
                 (int)*(short *)(param_1 + (long)(int)((-4 - param_3) + iVar16 + iVar17) * 2) +
                 (int)*(short *)(&DAT_00134b54 + lVar19) *
                 (int)*(short *)(param_1 + (long)(iVar20 + iVar17) * 2) +
                 (int)(short)(&DAT_00134b56)[lVar25 * 7] *
                 (int)*(short *)(param_1 + (long)(int)((-2 - param_3) + iVar16 + iVar17) * 2) +
                 (int)(short)(&DAT_00134b58)[lVar25 * 7] *
                 (int)*(short *)(param_1 + (long)(int)(~param_3 + iVar16 + iVar17) * 2) +
                 (int)(short)(&DAT_00134b5a)[lVar25 * 7] *
                 (int)*(short *)(param_1 + (long)(int)((iVar16 - param_3) + iVar17) * 2);
      }
      *(short *)(param_2 + uVar23 * 2) = (short)(iVar17 + 0x4000U >> 0xf);
      uVar23 = uVar23 + 1;
    } while (uVar26 != uVar23);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return (param_3 + 3) - iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

