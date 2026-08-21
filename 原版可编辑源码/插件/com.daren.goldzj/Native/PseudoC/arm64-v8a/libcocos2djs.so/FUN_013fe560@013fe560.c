
/* WARNING: Removing unreachable block (ram,0x013feac0) */
/* WARNING: Removing unreachable block (ram,0x013feb7c) */
/* WARNING: Removing unreachable block (ram,0x013feb8c) */
/* WARNING: Removing unreachable block (ram,0x013feac4) */
/* WARNING: Removing unreachable block (ram,0x013fead8) */
/* WARNING: Removing unreachable block (ram,0x013feb28) */
/* WARNING: Removing unreachable block (ram,0x013feb3c) */
/* WARNING: Removing unreachable block (ram,0x013feb58) */
/* WARNING: Removing unreachable block (ram,0x013feae4) */
/* WARNING: Removing unreachable block (ram,0x013feaec) */
/* WARNING: Removing unreachable block (ram,0x013feb00) */
/* WARNING: Removing unreachable block (ram,0x013feb5c) */
/* WARNING: Removing unreachable block (ram,0x013feb68) */
/* WARNING: Removing unreachable block (ram,0x013febcc) */
/* WARNING: Removing unreachable block (ram,0x013febd4) */

undefined8 FUN_013fe560(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long unaff_x26;
  undefined8 uVar23;
  
  if ((*(int *)(param_2 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
     ((*(uint *)(param_2 + 7) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20f0));
  }
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  lVar15 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar13 = FUN_013c0ba0(lVar2,*(undefined8 *)(unaff_x26 + 0x9b0));
  if (((int)uVar13 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar13 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2450),param_3);
  }
  if (((uVar13 & 1) == 0) ||
     ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar13 = FUN_0133fcc0(4,uVar13);
  uVar12 = (uint)uVar13;
  if (uVar12 == (uint)*(undefined8 *)(unaff_x26 + 0xc0)) goto LAB_013febfc;
  if ((uVar13 & 1) == 0) {
joined_r0x013fe6b8:
    if (uVar12 == 0) {
LAB_013febfc:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20f0),0);
    }
  }
  else {
    if ((uVar12 == (uint)*(undefined8 *)(unaff_x26 + 200)) ||
       (lVar3 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1), (*(byte *)(lVar3 + 9) >> 4 & 1) != 0))
    goto LAB_013febfc;
    if ((int)lVar3 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      if (ABS(*(double *)(uVar13 + 3)) <= 0.0) goto LAB_013febfc;
    }
    else if (*(short *)(lVar3 + 7) == 0x41) {
      uVar12 = *(uint *)(uVar13 + 3) >> 1 & 0x3fffffff;
      goto joined_r0x013fe6b8;
    }
  }
  lVar3 = unaff_x26 + (ulong)*(uint *)(lVar2 + -1);
  uVar6 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar15 + -1) + 7);
  if ((uVar6 & 0xffe0) == 0) {
    if ((*(uint *)(lVar15 + 3) >> 1 & 1) == 0) goto LAB_013fee64;
  }
  else if (uVar6 != 0x40) goto LAB_013fee64;
  iVar14 = (int)lVar15;
  if (*(ushort *)(lVar3 + 7) < 0x411) {
    if ((*(ushort *)(lVar3 + 7) != 0xaa) || ((*(byte *)(lVar3 + 9) & 0x24) != 0)) goto LAB_013fee64;
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar2 + 3);
    if ((uVar13 & 1) == 0) {
      uVar13 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar16 = (ulong)(*(uint *)(lVar15 + 3) >> 3);
    lVar15 = 0;
    while( true ) {
      uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21) - 1U;
      uVar18 = uVar16 + 5;
      lVar3 = unaff_x26 + (ulong)*(uint *)(uVar13 + uVar18 * 4 + 7);
      iVar20 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
      if ((int)lVar3 == iVar20) {
        return 0;
      }
      if (*(int *)(lVar3 + 3) == iVar14) break;
      lVar15 = lVar15 + 1;
      uVar16 = uVar16 + lVar15;
    }
    if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= uVar18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0,0x13fed20);
      (*pcVar10)();
    }
    uVar16 = unaff_x26 + (ulong)*(uint *)(lVar3 + 0xb);
    if ((int)uVar16 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      return 0;
    }
    uVar18 = (ulong)(uint)(*(int *)(lVar3 + 7) >> 1);
  }
  else if ((*(uint *)(lVar3 + 0xb) >> 0x15 & 1) == 0) {
    lVar21 = unaff_x26 + (ulong)*(uint *)(lVar3 + 0x17);
    uVar12 = *(uint *)(lVar3 + 0xb) >> 10 & 0x3ff;
    if (uVar12 == 0) {
      return 0;
    }
    if (uVar12 < 0x21) {
      lVar22 = (long)(int)uVar12 * 3;
      do {
        if (lVar22 == 0) {
          return 0;
        }
        lVar22 = lVar22 + -3;
      } while (*(int *)(lVar21 + lVar22 * 4 + 0xf) != iVar14);
    }
    else {
      iVar8 = *(short *)(lVar21 + 5) + -1;
      iVar20 = 0;
      iVar19 = iVar8;
      do {
        iVar1 = iVar20 + ((uint)(iVar19 - iVar20) >> 1);
        if (*(uint *)(unaff_x26 +
                      (ulong)*(uint *)(lVar21 + (long)(int)(((uint)(*(int *)(lVar21 + (long)(iVar1 *
                                                                                            3) * 4 +
                                                                                      0x13) >> 1) >>
                                                             9 & 0x3ff) * 3) * 4 + 0xf) + 3) <
            *(uint *)(lVar15 + 3)) {
          iVar20 = iVar1 + 1;
          iVar1 = iVar19;
        }
        iVar19 = iVar1;
      } while (iVar20 != iVar19);
      while( true ) {
        if (iVar8 < iVar20) {
          return 0;
        }
        uVar9 = (uint)(*(int *)(lVar21 + (long)(iVar20 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
        lVar22 = (long)(int)(uVar9 * 3);
        lVar4 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar22 * 4 + 0xf);
        if (*(uint *)(lVar4 + 3) != *(uint *)(lVar15 + 3)) {
          return 0;
        }
        if ((int)lVar4 == iVar14) break;
        iVar20 = iVar20 + 1;
      }
      if (uVar12 <= uVar9) {
        return 0;
      }
    }
    uVar12 = *(int *)(lVar21 + lVar22 * 4 + 0x13) >> 1;
    uVar18 = (ulong)uVar12;
    if ((uVar12 >> 1 & 1) == 0) {
      bVar11 = (uVar12 >> 6 & 7) == 2;
      uVar16 = (ulong)*(byte *)(lVar3 + 4) + ((uVar18 & 0x1ff80000) >> 0x13);
      if (uVar16 < *(byte *)(lVar3 + 3)) {
        lVar15 = uVar16 * 4 + -1;
        if (bVar11) {
          uVar23 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar2 + lVar15) + 3);
          goto LAB_013fe8bc;
        }
        uVar16 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar15);
      }
      else {
        uVar17 = unaff_x26 + (ulong)*(uint *)(lVar2 + 3);
        if ((uVar17 & 1) == 0) {
          uVar17 = *(ulong *)(unaff_x26 + 0x168);
        }
        uVar16 = unaff_x26 + (ulong)*(uint *)(uVar17 + (uVar16 - *(byte *)(lVar3 + 3)) * 4 + 7);
        if (bVar11) {
          uVar23 = *(undefined8 *)(uVar16 + 3);
LAB_013fe8bc:
          uVar16 = **(ulong **)(unaff_x26 + 0x1428);
          uVar17 = uVar16 + 0xc;
          if (uVar17 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar16 = uVar16 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar17;
          }
          else {
            uVar16 = FUN_01348560(uVar13,0xc);
          }
          *(int *)(uVar16 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(uVar16 + 3) = uVar23;
        }
      }
    }
    else {
      uVar16 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar22 * 4 + 0x17);
    }
    iVar20 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  }
  else {
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar2 + 3);
    if ((uVar13 & 1) == 0) {
      uVar13 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar16 = (ulong)(*(uint *)(lVar15 + 3) >> 3);
    lVar15 = 0;
    iVar20 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    while( true ) {
      uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar3 = uVar16 * 3;
      lVar21 = (lVar3 + 5) * 4;
      iVar8 = *(int *)(uVar13 + lVar21 + 7);
      if (iVar8 == iVar20) {
        return 0;
      }
      if (iVar8 == iVar14) break;
      lVar15 = lVar15 + 1;
      uVar16 = uVar16 + lVar15;
    }
    if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= lVar3 + 6U) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0,0x13fed18);
      (*pcVar10)();
    }
    uVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar21 + 0xb);
    uVar18 = (ulong)(uint)(*(int *)(uVar13 + lVar21 + 0xf) >> 1);
  }
  uVar13 = uVar16;
  if (((uVar18 & 1) != 0) && (*(int *)(uVar16 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8))) {
    lVar15 = unaff_x26 + (ulong)*(uint *)(lVar2 + -1);
    sVar7 = *(short *)(lVar15 + 7);
    if (sVar7 == 0x423) {
      if (*(int *)(uVar16 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8)) goto LAB_013fee64;
      uVar13 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb);
    }
    else if (sVar7 == 0x439) {
      if (((*(int *)(uVar16 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
          (((bVar5 = *(byte *)(lVar15 + 9), (bVar5 & 0xc0) != 0xc0 &&
            (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb) + 0x1b) & 0x1f) - 0xd)) ||
           ((bVar5 & 1) != 0)))) ||
         (uVar13 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x1b),
         (int)uVar13 == (int)*(undefined8 *)(unaff_x26 + 0xa8))) goto LAB_013fee64;
      if (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
      }
    }
    else {
      if (((sVar7 != 0x411) || (*(int *)(uVar16 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
         ((uVar13 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb), (uVar13 & 1) == 0 ||
          (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7))))) {
LAB_013fee64:
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2430),0);
      }
      uVar13 = (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
    }
  }
  if (((uint)uVar18 >> 5 & 1) != 0) {
    if (((uVar16 & 1) == 0) || (*(int *)(uVar16 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8))) {
      if (((((uint)uVar18 >> 3 & 1) != 0) && ((int)uVar13 != 0)) &&
         (((((uVar13 & 1) == 0 || (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
           || (*(double *)(uVar13 + 3) != 0.0)) ||
          ((int)((ulong)*(double *)(uVar13 + 3) >> 0x20) != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
      }
    }
    else if ((*(int *)(uVar16 + 7) == iVar20) ||
            (*(int *)(uVar16 + 7) == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
  }
  return 0;
}

