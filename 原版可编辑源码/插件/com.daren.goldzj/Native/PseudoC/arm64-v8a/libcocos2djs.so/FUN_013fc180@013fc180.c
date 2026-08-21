
ulong FUN_013fc180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  ulong local_50;
  long local_48;
  
  if (&local_50 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_48 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if ((int)local_48 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  lVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar13 + -1) + 7) < 0xa9) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0,0x13fc218);
    (*pcVar9)();
  }
  uVar12 = FUN_013c0ba0(param_2,local_48,*(undefined8 *)(unaff_x26 + 0x700));
  if (((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    uVar12 = FUN_013c1600(lVar13,param_2,param_3,param_4);
    return uVar12;
  }
  if (((uVar12 & 1) == 0) ||
     ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  local_50 = FUN_0133fcc0(param_2,3,uVar12);
  lVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1);
  uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_48 + -1) + 7);
  if ((uVar4 & 0xffe0) == 0) {
    if ((*(uint *)(local_48 + 3) >> 1 & 1) == 0) goto LAB_013fca18;
  }
  else if (uVar4 != 0x40) goto LAB_013fca18;
  iVar11 = (int)local_48;
  if (*(ushort *)(lVar13 + 7) < 0x411) {
    if ((*(ushort *)(lVar13 + 7) != 0xaa) || ((*(byte *)(lVar13 + 9) & 0x24) != 0))
    goto LAB_013fca18;
    uVar12 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 3);
    if ((uVar12 & 1) == 0) {
      uVar12 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar15 = (ulong)(*(uint *)(local_48 + 3) >> 3);
    lVar13 = 0;
    while( true ) {
      uVar15 = uVar15 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) - 1U;
      uVar14 = uVar15 + 5;
      lVar2 = unaff_x26 + (ulong)*(uint *)(uVar12 + uVar14 * 4 + 7);
      iVar17 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
      if ((int)lVar2 == iVar17) {
        return local_50;
      }
      if (*(int *)(lVar2 + 3) == iVar11) break;
      lVar13 = lVar13 + 1;
      uVar15 = uVar15 + lVar13;
    }
    if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(0,0x13fc8a4);
      (*pcVar9)();
    }
    uVar12 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb);
    if ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      return local_50;
    }
    uVar15 = (ulong)(uint)(*(int *)(lVar2 + 7) >> 1);
  }
  else if ((*(uint *)(lVar13 + 0xb) >> 0x15 & 1) == 0) {
    lVar2 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0x17);
    uVar7 = *(uint *)(lVar13 + 0xb) >> 10 & 0x3ff;
    if (uVar7 == 0) {
      return local_50;
    }
    if (uVar7 < 0x21) {
      lVar18 = (long)(int)uVar7 * 3;
      do {
        if (lVar18 == 0) {
          return local_50;
        }
        lVar18 = lVar18 + -3;
      } while (*(int *)(lVar2 + lVar18 * 4 + 0xf) != iVar11);
    }
    else {
      iVar6 = *(short *)(lVar2 + 5) + -1;
      iVar17 = 0;
      iVar16 = iVar6;
      do {
        iVar1 = iVar17 + ((uint)(iVar16 - iVar17) >> 1);
        if (*(uint *)(unaff_x26 +
                      (ulong)*(uint *)(lVar2 + (long)(int)(((uint)(*(int *)(lVar2 + (long)(iVar1 * 3
                                                                                          ) * 4 +
                                                                                    0x13) >> 1) >> 9
                                                           & 0x3ff) * 3) * 4 + 0xf) + 3) <
            *(uint *)(local_48 + 3)) {
          iVar17 = iVar1 + 1;
          iVar1 = iVar16;
        }
        iVar16 = iVar1;
      } while (iVar17 != iVar16);
      while( true ) {
        if (iVar6 < iVar17) {
          return local_50;
        }
        uVar8 = (uint)(*(int *)(lVar2 + (long)(iVar17 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
        lVar18 = (long)(int)(uVar8 * 3);
        lVar19 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar18 * 4 + 0xf);
        if (*(uint *)(lVar19 + 3) != *(uint *)(local_48 + 3)) {
          return local_50;
        }
        if ((int)lVar19 == iVar11) break;
        iVar17 = iVar17 + 1;
      }
      if (uVar7 <= uVar8) {
        return local_50;
      }
    }
    uVar7 = *(int *)(lVar2 + lVar18 * 4 + 0x13) >> 1;
    uVar15 = (ulong)uVar7;
    if ((uVar7 >> 1 & 1) == 0) {
      bVar10 = (uVar7 >> 6 & 7) == 2;
      uVar12 = (ulong)*(byte *)(lVar13 + 4) + ((uVar15 & 0x1ff80000) >> 0x13);
      if (uVar12 < *(byte *)(lVar13 + 3)) {
        lVar13 = uVar12 * 4 + -1;
        if (bVar10) {
          uVar20 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + lVar13) + 3);
          goto LAB_013fc490;
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + lVar13);
      }
      else {
        uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 3);
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(unaff_x26 + 0x168);
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar14 + (uVar12 - *(byte *)(lVar13 + 3)) * 4 + 7);
        if (bVar10) {
          uVar20 = *(undefined8 *)(uVar12 + 3);
LAB_013fc490:
          uVar12 = **(ulong **)(unaff_x26 + 0x1428);
          uVar14 = uVar12 + 0xc;
          if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar12 = uVar12 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar14;
          }
          else {
            uVar12 = FUN_01348560(local_50,0xc);
          }
          *(int *)(uVar12 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(undefined8 *)(uVar12 + 3) = uVar20;
        }
      }
    }
    else {
      uVar12 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar18 * 4 + 0x17);
    }
    iVar17 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  }
  else {
    uVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 3);
    if ((uVar15 & 1) == 0) {
      uVar15 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar12 = (ulong)(*(uint *)(local_48 + 3) >> 3);
    iVar17 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar2 = uVar12 * 3;
      lVar19 = (lVar2 + 5) * 4;
      iVar6 = *(int *)(uVar15 + lVar19 + 7);
      if (iVar6 == iVar17) {
        return local_50;
      }
      if (iVar6 == iVar11) break;
      lVar13 = lVar13 + 1;
      uVar12 = uVar12 + lVar13;
    }
    if ((ulong)((long)((ulong)*(uint *)(uVar15 + 3) << 0x20) >> 0x21) <= lVar2 + 6U) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(0,0x13fc89c);
      (*pcVar9)();
    }
    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar15 + lVar19 + 0xb);
    uVar15 = (ulong)(uint)(*(int *)(uVar15 + lVar19 + 0xf) >> 1);
  }
  uVar14 = uVar12;
  if (((uVar15 & 1) != 0) && (*(int *)(uVar12 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8))) {
    lVar13 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1);
    sVar5 = *(short *)(lVar13 + 7);
    if (sVar5 == 0x423) {
      if (*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8)) goto LAB_013fca18;
      uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 0xb);
    }
    else if (sVar5 == 0x439) {
      if ((*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
         ((((bVar3 = *(byte *)(lVar13 + 9), (bVar3 & 0xc0) != 0xc0 &&
            (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + 0xb) + 0x1b) & 0x1f) - 0xd)) ||
           ((bVar3 & 1) != 0)) ||
          (uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 0x1b),
          (int)uVar14 == (int)*(undefined8 *)(unaff_x26 + 0xa8))))) goto LAB_013fca18;
      if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xf);
      }
    }
    else {
      if (((sVar5 != 0x411) || (*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
         ((uVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 0xb), (uVar14 & 1) == 0 ||
          (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7))))) {
LAB_013fca18:
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2430));
      }
      uVar14 = (ulong)(uint)(*(int *)(uVar14 + 7) * 2);
    }
  }
  if (((uint)uVar15 >> 5 & 1) == 0) {
    return local_50;
  }
  iVar11 = (int)local_50;
  if (((uVar12 & 1) != 0) && (*(int *)(uVar12 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8))) {
    if ((*(int *)(uVar12 + 3) != iVar17) &&
       (*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
      return local_50;
    }
    if (iVar11 == iVar17) {
      return local_50;
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if (((uint)uVar15 >> 3 & 1) == 0) {
    return local_50;
  }
  if (iVar11 == (int)uVar14) {
    return local_50;
  }
  bVar10 = (uVar14 & 1) == 0;
  if ((local_50 & 1) == 0) {
    if ((bVar10) || (*(int *)(uVar14 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
    goto LAB_013fc9f4;
    dVar22 = *(double *)(uVar14 + 3);
    dVar21 = (double)(iVar11 >> 1);
  }
  else if (bVar10) {
    if (*(int *)(local_50 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_013fc9f4;
    dVar21 = *(double *)(local_50 + 3);
    dVar22 = (double)((int)uVar14 >> 1);
  }
  else {
    lVar13 = unaff_x26 + (ulong)*(uint *)(local_50 - 1);
    iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x140);
    if ((int)lVar13 != iVar11) {
      uVar4 = *(ushort *)(lVar13 + 7);
      if (uVar4 < 0x40) {
        if ((*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7) < 0x40) &&
           (iVar11 = FUN_01345360(uVar14,local_50), iVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb8)
           )) {
          return local_50;
        }
      }
      else if ((uVar4 == 0x41) && (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7) == 0x41)
              ) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
      }
      goto LAB_013fc9f4;
    }
    if (*(int *)(uVar14 - 1) != iVar11) goto LAB_013fc9f4;
    dVar21 = *(double *)(local_50 + 3);
    dVar22 = *(double *)(uVar14 + 3);
  }
  if (dVar21 == dVar22) {
    if ((int)((ulong)dVar21 >> 0x20) != (int)((ulong)dVar22 >> 0x20)) goto LAB_013fc9f4;
  }
  else if ((!NAN(dVar21)) || (!NAN(dVar22))) {
LAB_013fc9f4:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  return local_50;
}

