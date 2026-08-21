
undefined8
FUN_00b044b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,uint param_7,uint param_8,int param_9)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  undefined1 local_9d [20];
  undefined1 auStack_89 [20];
  undefined1 auStack_75 [21];
  
  uVar9 = 6;
  if (-1 < (int)param_7) {
    uVar9 = param_7;
  }
  if (0.0 <= param_1) {
    if ((param_8 >> 1 & 1) == 0) {
      iVar6 = (param_8 & 4) << 3;
    }
    else {
      iVar6 = 0x2b;
    }
  }
  else {
    iVar6 = 0x2d;
  }
  iVar19 = param_9;
  dVar22 = param_1;
  if (param_9 == 2) {
    if (param_1 == 0.0) {
      iVar19 = 0;
      goto joined_r0x00b04530;
    }
    if ((0.0001 <= param_1) && ((param_1 < 10.0 || (uVar9 != 0)))) {
      if (0 < (int)uVar9) {
        dVar23 = 1.0;
        uVar11 = uVar9;
        do {
          uVar11 = uVar11 - 1;
          dVar23 = dVar23 * 10.0;
        } while (uVar11 != 0);
        if (dVar23 <= param_1) {
          iVar19 = 1;
          goto joined_r0x00b04530;
        }
      }
      iVar19 = 0;
      goto LAB_00b045a0;
    }
    iVar19 = 1;
    if (param_1 != 0.0) goto LAB_00b045ac;
LAB_00b04534:
    lVar20 = 0;
joined_r0x00b04540:
    if (param_9 == 2) {
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      uVar9 = uVar9 - 1;
      if ((iVar19 == 0) && (uVar9 = uVar9 - (int)lVar20, (int)uVar9 < 0)) {
        return 0;
      }
    }
    if (iVar19 != 1) {
      dVar22 = param_1;
    }
  }
  else {
LAB_00b045a0:
    if (param_9 != 0) {
joined_r0x00b04530:
      if (param_1 == 0.0) goto LAB_00b04534;
LAB_00b045ac:
      lVar20 = 0;
      for (; dVar22 < 1.0; dVar22 = dVar22 * 10.0) {
        lVar20 = lVar20 + -1;
      }
      for (; 10.0 < dVar22; dVar22 = dVar22 / 10.0) {
        lVar20 = lVar20 + 1;
      }
      goto joined_r0x00b04540;
    }
    lVar20 = 0;
  }
  dVar23 = -dVar22;
  if (0.0 <= dVar22) {
    dVar23 = dVar22;
  }
  if (1.8446744073709552e+19 < dVar23) {
    return 0;
  }
  uVar11 = uVar9;
  if (8 < (int)uVar9) {
    uVar11 = 9;
  }
  uVar7 = (ulong)uVar11;
  uVar13 = (ulong)dVar23;
  if (uVar11 == 0) {
    dVar22 = 1.0;
    uVar17 = 1;
  }
  else {
    uVar15 = 0xfffffff6;
    if (-10 < (int)~uVar9) {
      uVar15 = ~uVar9;
    }
    dVar22 = 1.0;
    iVar12 = uVar15 + 1;
    do {
      iVar12 = iVar12 + 1;
      dVar22 = dVar22 * 10.0;
    } while (iVar12 != 0);
    uVar17 = (ulong)(0.5 <= dVar22 - (double)(long)dVar22) + (long)dVar22;
    uVar15 = 0xfffffff6;
    if (-10 < (int)~uVar9) {
      uVar15 = ~uVar9;
    }
    iVar12 = uVar15 + 1;
    dVar22 = 1.0;
    do {
      iVar12 = iVar12 + 1;
      dVar22 = dVar22 * 10.0;
    } while (iVar12 != 0);
  }
  dVar22 = (dVar23 - (double)uVar13) * dVar22;
  lVar18 = (long)dVar22;
  uVar14 = (ulong)(0.5 <= dVar22 - (double)lVar18) + lVar18;
  lVar18 = 0;
  if (uVar17 <= uVar14) {
    uVar13 = uVar13 + 1;
  }
  uVar3 = 0;
  if (uVar17 <= uVar14) {
    uVar3 = uVar17;
  }
  do {
    auStack_75[lVar18 + 1] = (&DAT_012f5a37)[uVar13 % 10];
    lVar10 = lVar18 + 1;
    if (0x12 < lVar18) break;
    bVar1 = 9 < uVar13;
    lVar18 = lVar10;
    uVar13 = uVar13 / 10;
  } while (bVar1);
  iVar16 = (int)lVar10;
  iVar12 = iVar16 + -1;
  if (iVar16 != 0x14) {
    iVar12 = iVar16;
  }
                    /* try { // try from 00b0475c to 00c047cb has its CatchHandler @ 00b0475c
                       catch() { ... } // from try @ 00b0475c with catch @ 00b0475c
                       catch() { ... } // from try @ 00b047fc with catch @ 00b0475c */
  uVar14 = uVar14 - uVar3;
  auStack_75[(long)iVar12 + 1] = 0;
  if (param_9 == 2) {
    uVar13 = (long)(int)(uVar11 + 1) - 1;
    do {
      uVar7 = uVar13 - 1;
      if ((long)uVar13 < 1) {
        lVar18 = 0;
        uVar7 = uVar13 & 0xffffffff;
        break;
      }
      uVar17 = uVar14;
      lVar10 = 0;
      while( true ) {
        uVar14 = uVar17 / 10;
        if (lVar10 == 0 && uVar17 % 10 == 0) break;
        lVar18 = lVar10 + 1;
        auStack_89[lVar10 + 1] = (&DAT_012f5a37)[uVar17 % 10];
        uVar17 = uVar14;
        lVar10 = lVar18;
        if ((long)uVar13 <= lVar18) {
          uVar7 = uVar13 & 0xffffffff;
          goto LAB_00b04840;
        }
      }
      lVar18 = 0;
      uVar13 = uVar7;
    } while (0 < (long)uVar7);
  }
  else if ((int)uVar9 < 1) {
    lVar18 = 0;
  }
  else {
                    /* try { // try from 00b047fc to 00c0486b has its CatchHandler @ 00b0475c */
    lVar10 = 0;
    do {
      lVar18 = lVar10 + 1;
      auStack_89[lVar10 + 1] = (&DAT_012f5a37)[uVar14 % 10];
      lVar10 = lVar18;
      uVar14 = uVar14 / 10;
    } while (lVar18 < (int)uVar11);
  }
LAB_00b04840:
  iVar16 = (int)lVar18 - (uint)((int)lVar18 == 0x14);
  lVar18 = 0;
                    /* catch() { ... } // from try @ 00b047cc with catch @ 00b04850 */
  lVar10 = (long)iVar16;
  auStack_89[lVar10 + 1] = 0;
  if (iVar19 == 1) {
    lVar18 = 0;
    iVar4 = -(int)lVar20;
    if (-1 < lVar20) {
      iVar4 = (int)lVar20;
    }
    do {
      iVar5 = iVar4;
      lVar21 = lVar18;
      local_9d[lVar21 + 1] = (&DAT_012f5a37)[iVar5 % 10];
      lVar18 = lVar21 + 1;
      if (0x12 < lVar21) break;
      iVar4 = iVar5 / 10;
    } while (9 < iVar5);
    if (9 < iVar5) {
      return 0;
    }
    if ((int)lVar18 == 1) {
      local_9d[lVar21 + 2] = 0x30;
      lVar18 = 2;
    }
  }
  iVar5 = (int)uVar7;
  iVar4 = -2 - (int)lVar18;
  if (iVar19 != 1) {
    iVar4 = 0;
  }
  uVar9 = ((((param_6 - (uint)(iVar6 != 0)) - iVar12) - iVar5) - (uint)(0 < iVar5)) + iVar4;
  uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  uVar11 = -uVar9;
  if ((param_8 & 1) == 0) {
    uVar11 = uVar9;
  }
  if (((param_8 >> 4 & 1) == 0) || ((int)uVar11 < 1)) {
    uVar9 = uVar11;
    if (0 < (int)uVar11) {
      do {
        uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar11 = uVar9 - 1;
        bVar1 = 0 < (int)uVar9;
        uVar9 = uVar11;
      } while (uVar11 != 0 && bVar1);
    }
    if ((iVar6 != 0) &&
       (uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,iVar6), (int)uVar8 == 0)) {
      return uVar8;
    }
    goto LAB_00b04a00;
  }
  if (iVar6 == 0) {
LAB_00b0497c:
    iVar6 = uVar11 + 1;
    do {
      uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,0x30);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      iVar6 = iVar6 + -1;
    } while (1 < iVar6);
  }
  else {
    uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,iVar6);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (1 < (int)uVar11) {
      uVar11 = uVar11 - 1;
      goto LAB_00b0497c;
    }
  }
  uVar11 = 0;
LAB_00b04a00:
  lVar21 = (long)iVar12;
  while (0 < lVar21) {
    uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,auStack_75[lVar21]);
    lVar21 = lVar21 + -1;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
  if (((param_8 >> 3 & 1) != 0) || (0 < iVar5)) {
    uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,0x2e);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    while (0 < lVar10) {
      iVar6 = FUN_00b040d8(param_2,param_3,param_4,param_5,auStack_89[lVar10]);
      lVar10 = lVar10 + -1;
      if (iVar6 == 0) {
        return 0;
      }
    }
  }
  if (0 < iVar5 - iVar16) {
    iVar16 = (iVar5 + 1) - iVar16;
    do {
      uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,0x30);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      iVar16 = iVar16 + -1;
    } while (1 < iVar16);
  }
  if (iVar19 == 1) {
    uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,param_8 & 0x20 ^ 0x65);
    if ((int)uVar8 != 0) {
      if (lVar20 < 0) {
        uVar8 = 0x2d;
      }
      else {
        uVar8 = 0x2b;
      }
      uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,uVar8);
      if ((int)uVar8 != 0) {
        lVar20 = (long)(int)lVar18;
        do {
          if (lVar20 < 1) goto LAB_00b04b98;
          puVar2 = local_9d + lVar20;
          lVar20 = lVar20 + -1;
          iVar6 = FUN_00b040d8(param_2,param_3,param_4,param_5,*puVar2);
          uVar8 = 0;
        } while (iVar6 != 0);
      }
    }
  }
  else {
LAB_00b04b98:
    if ((int)uVar11 < 0) {
      iVar6 = uVar11 - 1;
      do {
        uVar8 = FUN_00b040d8(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        iVar6 = iVar6 + 1;
        uVar8 = 1;
      } while (iVar6 < -1);
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}

