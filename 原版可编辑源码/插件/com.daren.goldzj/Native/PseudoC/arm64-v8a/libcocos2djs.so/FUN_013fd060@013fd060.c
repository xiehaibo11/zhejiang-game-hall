
undefined8 FUN_013fd060(long param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
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
  undefined1 local_50 [8];
  long local_48;
  long local_40;
  long local_38;
  
  if (local_50 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_38 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_38 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  lVar3 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar3 + -1) + 7) < 0xa9) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0,0x13fd0f8);
    (*pcVar9)();
  }
  uVar12 = FUN_013c0ba0(local_38,*(undefined8 *)(unaff_x26 + 0x730));
  if (((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    uVar14 = FUN_01369d20(lVar3,param_2);
    return uVar14;
  }
  if (((uVar12 & 1) == 0) ||
     ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar12 = FUN_0133fcc0(2,uVar12,*(undefined8 *)(unaff_x26 + 0xa0),lVar3,param_2);
  uVar14 = *(undefined8 *)(unaff_x26 + 0xc0);
  uVar11 = (uint)uVar12;
  if (uVar11 != (uint)uVar14) {
    if ((uVar12 & 1) == 0) {
joined_r0x013fd1b0:
      if (uVar11 != 0) {
LAB_013fd1b4:
        return *(undefined8 *)(unaff_x26 + 0xb8);
      }
    }
    else if ((uVar11 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
            (lVar3 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1), (*(byte *)(lVar3 + 9) >> 4 & 1) == 0)
            ) {
      if ((int)lVar3 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        if (*(short *)(lVar3 + 7) != 0x41) goto LAB_013fd1b4;
        uVar11 = *(uint *)(uVar12 + 3) >> 1 & 0x3fffffff;
        goto joined_r0x013fd1b0;
      }
      if (0.0 < ABS(*(double *)(uVar12 + 3))) goto LAB_013fd1b4;
    }
  }
  lVar3 = unaff_x26 + (ulong)*(uint *)(local_40 + -1);
  uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_48 + -1) + 7);
  if ((uVar5 & 0xffe0) == 0) {
    if ((*(uint *)(local_48 + 3) >> 1 & 1) == 0) goto LAB_013fd76c;
  }
  else if (uVar5 != 0x40) goto LAB_013fd76c;
  iVar13 = (int)local_48;
  if (*(ushort *)(lVar3 + 7) < 0x411) {
    if ((*(ushort *)(lVar3 + 7) != 0xaa) || ((*(byte *)(lVar3 + 9) & 0x24) != 0)) goto LAB_013fd76c;
    uVar12 = unaff_x26 + (ulong)*(uint *)(local_40 + 3);
    if ((uVar12 & 1) == 0) {
      uVar12 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar16 = (ulong)(*(uint *)(local_48 + 3) >> 3);
    lVar15 = 0;
    while( true ) {
      uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) - 1U;
      uVar17 = uVar16 + 5;
      lVar21 = unaff_x26 + (ulong)*(uint *)(uVar12 + uVar17 * 4 + 7);
      if ((int)lVar21 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
        return uVar14;
      }
      if (*(int *)(lVar21 + 3) == iVar13) break;
      lVar15 = lVar15 + 1;
      uVar16 = uVar16 + lVar15;
    }
    if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= uVar17) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(0,0x13fd630);
      (*pcVar9)();
    }
    uVar12 = unaff_x26 + (ulong)*(uint *)(lVar21 + 0xb);
    if ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      return uVar14;
    }
    uVar16 = (ulong)*(uint *)(lVar21 + 7);
    uVar17 = (ulong)(uint)((int)*(uint *)(lVar21 + 7) >> 1);
  }
  else if ((*(uint *)(lVar3 + 0xb) >> 0x15 & 1) == 0) {
    uVar16 = unaff_x26 + (ulong)*(uint *)(lVar3 + 0x17);
    uVar11 = *(uint *)(lVar3 + 0xb) >> 10 & 0x3ff;
    if (uVar11 == 0) {
      return uVar14;
    }
    if (uVar11 < 0x21) {
      lVar21 = (long)(int)uVar11 * 3;
      do {
        if (lVar21 == 0) {
          return uVar14;
        }
        lVar21 = lVar21 + -3;
      } while (*(int *)(uVar16 + lVar21 * 4 + 0xf) != iVar13);
    }
    else {
      iVar7 = *(short *)(uVar16 + 5) + -1;
      iVar20 = 0;
      iVar19 = iVar7;
      do {
        iVar2 = iVar20 + ((uint)(iVar19 - iVar20) >> 1);
        if (*(uint *)(unaff_x26 +
                      (ulong)*(uint *)(uVar16 + (long)(int)(((uint)(*(int *)(uVar16 + (long)(iVar2 *
                                                                                            3) * 4 +
                                                                                      0x13) >> 1) >>
                                                             9 & 0x3ff) * 3) * 4 + 0xf) + 3) <
            *(uint *)(local_48 + 3)) {
          iVar20 = iVar2 + 1;
          iVar2 = iVar19;
        }
        iVar19 = iVar2;
      } while (iVar20 != iVar19);
      while( true ) {
        if (iVar7 < iVar20) {
          return uVar14;
        }
        uVar8 = (uint)(*(int *)(uVar16 + (long)(iVar20 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
        lVar21 = (long)(int)(uVar8 * 3);
        lVar15 = unaff_x26 + (ulong)*(uint *)(uVar16 + lVar21 * 4 + 0xf);
        if (*(uint *)(lVar15 + 3) != *(uint *)(local_48 + 3)) {
          return uVar14;
        }
        if ((int)lVar15 == iVar13) break;
        iVar20 = iVar20 + 1;
      }
      if (uVar11 <= uVar8) {
        return uVar14;
      }
    }
    uVar11 = *(int *)(uVar16 + lVar21 * 4 + 0x13) >> 1;
    uVar17 = (ulong)uVar11;
    if ((uVar11 >> 1 & 1) == 0) {
      uVar16 = (ulong)*(byte *)(lVar3 + 3);
      bVar10 = (uVar11 >> 6 & 7) == 2;
      uVar12 = (ulong)*(byte *)(lVar3 + 4) + ((uVar17 & 0x1ff80000) >> 0x13);
      if (uVar12 < uVar16) {
        lVar15 = uVar12 * 4 + -1;
        if (bVar10) {
          uVar23 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(local_40 + lVar15) + 3);
          goto LAB_013fd584;
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(local_40 + lVar15);
      }
      else {
        uVar18 = unaff_x26 + (ulong)*(uint *)(local_40 + 3);
        if ((uVar18 & 1) == 0) {
          uVar18 = *(ulong *)(unaff_x26 + 0x168);
        }
        uVar12 = unaff_x26 + (ulong)*(uint *)(uVar18 + (uVar12 - uVar16) * 4 + 7);
        if (bVar10) {
          uVar23 = *(undefined8 *)(uVar12 + 3);
LAB_013fd584:
          uVar12 = **(ulong **)(unaff_x26 + 0x1428);
          uVar16 = uVar12 + 0xc;
          if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar12 = uVar12 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar16;
          }
          else {
            uVar12 = FUN_01348560(local_40,0xc,uVar14,local_48);
            uVar14 = *(undefined8 *)(unaff_x26 + 0xc0);
          }
          uVar16 = *(ulong *)(unaff_x26 + 0x140);
          *(int *)(uVar12 - 1) = (int)uVar16;
          *(undefined8 *)(uVar12 + 3) = uVar23;
        }
      }
    }
    else {
      uVar12 = unaff_x26 + (ulong)*(uint *)(uVar16 + lVar21 * 4 + 0x17);
    }
  }
  else {
    uVar12 = unaff_x26 + (ulong)*(uint *)(local_40 + 3);
    if ((uVar12 & 1) == 0) {
      uVar12 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar16 = (ulong)(*(uint *)(local_48 + 3) >> 3);
    lVar15 = 0;
    while( true ) {
      uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar21 = uVar16 * 3;
      lVar22 = (lVar21 + 5) * 4;
      iVar20 = *(int *)(uVar12 + lVar22 + 7);
      if (iVar20 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
        return uVar14;
      }
      if (iVar20 == iVar13) break;
      lVar15 = lVar15 + 1;
      uVar16 = uVar16 + lVar15;
    }
    uVar11 = *(uint *)(uVar12 + lVar22 + 0xf);
    uVar16 = (ulong)uVar11;
    if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar21 + 6U) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(0,0x13fd618);
      (*pcVar9)();
    }
    uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar22 + 0xb);
    uVar17 = (ulong)(uint)((int)uVar11 >> 1);
  }
  if (((uVar17 & 1) != 0) &&
     (uVar16 = (ulong)*(uint *)(uVar12 - 1),
     *(uint *)(uVar12 - 1) != (uint)*(undefined8 *)(unaff_x26 + 0xcc8))) {
    lVar15 = unaff_x26 + (ulong)*(uint *)(local_40 + -1);
    sVar6 = *(short *)(lVar15 + 7);
    if (sVar6 == 0x423) {
      puVar1 = (uint *)(uVar12 + 3);
      uVar12 = (ulong)*puVar1;
      uVar16 = *(ulong *)(unaff_x26 + 0x7b8);
      if (*puVar1 != (uint)uVar16) goto LAB_013fd76c;
    }
    else if (sVar6 == 0x439) {
      if (((*(int *)(uVar12 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
          (((bVar4 = *(byte *)(lVar15 + 9), (bVar4 & 0xc0) != 0xc0 &&
            (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(local_40 + 0xb) + 0x1b) & 0x1f) - 0xd)) ||
           ((bVar4 & 1) != 0)))) ||
         (lVar15 = unaff_x26 + (ulong)*(uint *)(local_40 + 0x1b),
         (int)lVar15 == (int)*(undefined8 *)(unaff_x26 + 0xa8))) goto LAB_013fd76c;
      uVar12 = (ulong)*(uint *)(lVar15 + -1);
      uVar16 = *(ulong *)(unaff_x26 + 0xd0);
    }
    else if (((sVar6 != 0x411) ||
             (uVar16 = *(ulong *)(unaff_x26 + 0x7b8), *(int *)(uVar12 + 3) != (int)uVar16)) ||
            ((uVar12 = unaff_x26 + (ulong)*(uint *)(local_40 + 0xb), (uVar12 & 1) == 0 ||
             (uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7),
             uVar12 = (ulong)uVar5, 0x3f < uVar5)))) {
LAB_013fd76c:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2438));
    }
  }
  if (((uint)uVar17 >> 5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8),0x10e,uVar12,lVar3,uVar16);
  }
  if ((*(uint *)(lVar3 + 0xb) >> 0x1b & 1) != 0) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
}

