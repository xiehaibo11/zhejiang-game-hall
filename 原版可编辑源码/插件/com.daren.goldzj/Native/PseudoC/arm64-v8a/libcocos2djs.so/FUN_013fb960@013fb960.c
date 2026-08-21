
undefined8 FUN_013fb960(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long unaff_x26;
  undefined8 uVar20;
  long local_50;
  long local_48;
  long local_40;
  
  if (&local_50 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_40 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_40 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar3 = *(uint *)(param_1 + 7);
  uVar12 = FUN_013c0ba0();
  if (((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    uVar20 = FUN_0136a720(unaff_x26 + (ulong)uVar3,param_2,param_3);
    return uVar20;
  }
  if (((uVar12 & 1) == 0) ||
     ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar12 = FUN_0133fcc0(2,uVar12);
  iVar11 = (int)uVar12;
  if (iVar11 == (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
LAB_013fbaac:
    bVar10 = false;
  }
  else {
    if ((uVar12 & 1) == 0) {
      if (iVar11 != 0) goto LAB_013fbaa4;
      goto LAB_013fbaac;
    }
    if ((iVar11 == (int)*(undefined8 *)(unaff_x26 + 200)) ||
       (lVar15 = unaff_x26 + (ulong)*(uint *)(uVar12 - 1), (*(byte *)(lVar15 + 9) >> 4 & 1) != 0))
    goto LAB_013fbaac;
    if ((int)lVar15 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      if (ABS(*(double *)(uVar12 + 3)) <= 0.0) goto LAB_013fbaac;
    }
    else if ((*(short *)(lVar15 + 7) == 0x41) && ((*(uint *)(uVar12 + 3) >> 1 & 0x3fffffff) == 0))
    goto LAB_013fbaac;
LAB_013fbaa4:
    bVar10 = true;
  }
  if (!bVar10) {
    if ((int)local_50 != 2) {
      return *(undefined8 *)(unaff_x26 + 0xc0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  lVar15 = unaff_x26 + (ulong)*(uint *)(local_40 + -1);
  uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_48 + -1) + 7);
  if ((uVar5 & 0xffe0) == 0) {
    if ((*(uint *)(local_48 + 3) >> 1 & 1) == 0) goto LAB_013fc0a8;
  }
  else if (uVar5 != 0x40) goto LAB_013fc0a8;
  iVar11 = (int)local_48;
  if (*(ushort *)(lVar15 + 7) < 0x411) {
    if ((*(ushort *)(lVar15 + 7) == 0xaa) && ((*(byte *)(lVar15 + 9) & 0x24) == 0)) {
      uVar12 = unaff_x26 + (ulong)*(uint *)(local_40 + 3);
      if ((uVar12 & 1) == 0) {
        uVar12 = *(ulong *)(unaff_x26 + 0x410);
      }
      uVar16 = (ulong)(*(uint *)(local_48 + 3) >> 3);
      lVar13 = 0;
      while( true ) {
        uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) - 1U;
        uVar17 = uVar16 + 5;
        lVar2 = unaff_x26 + (ulong)*(uint *)(uVar12 + uVar17 * 4 + 7);
        if ((int)lVar2 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
        if (*(int *)(lVar2 + 3) == iVar11) {
          if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x13fbf6c);
            (*pcVar9)();
          }
          lVar13 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb);
          if ((int)lVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            uVar12 = (ulong)(uint)(*(int *)(lVar2 + 7) >> 1);
            goto LAB_013fbf78;
          }
          break;
        }
        lVar13 = lVar13 + 1;
        uVar16 = uVar16 + lVar13;
      }
      goto LAB_013fbd38;
    }
    goto LAB_013fc0a8;
  }
  if ((*(uint *)(lVar15 + 0xb) >> 0x15 & 1) != 0) {
    uVar12 = unaff_x26 + (ulong)*(uint *)(local_40 + 3);
    if ((uVar12 & 1) == 0) {
      uVar12 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar16 = (ulong)(*(uint *)(local_48 + 3) >> 3);
    lVar13 = 0;
    while( true ) {
      uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar2 = uVar16 * 3;
      lVar19 = (lVar2 + 5) * 4;
      iVar18 = *(int *)(uVar12 + lVar19 + 7);
      if (iVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
      if (iVar18 == iVar11) {
        if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= lVar2 + 6U) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(0,0x13fbf54);
          (*pcVar9)();
        }
        lVar13 = unaff_x26 + (ulong)*(uint *)(uVar12 + lVar19 + 0xb);
        uVar12 = (ulong)(uint)(*(int *)(uVar12 + lVar19 + 0xf) >> 1);
        goto LAB_013fbf78;
      }
      lVar13 = lVar13 + 1;
      uVar16 = uVar16 + lVar13;
    }
    goto LAB_013fbd38;
  }
  lVar13 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0x17);
  uVar3 = *(uint *)(lVar15 + 0xb) >> 10 & 0x3ff;
  if (uVar3 == 0) goto LAB_013fbd38;
  if (0x20 < uVar3) {
    iVar7 = *(short *)(lVar13 + 5) + -1;
    iVar18 = 0;
    iVar14 = iVar7;
    do {
      iVar1 = iVar18 + ((uint)(iVar14 - iVar18) >> 1);
      if (*(uint *)(unaff_x26 +
                    (ulong)*(uint *)(lVar13 + (long)(int)(((uint)(*(int *)(lVar13 + (long)(iVar1 * 3
                                                                                          ) * 4 +
                                                                                    0x13) >> 1) >> 9
                                                          & 0x3ff) * 3) * 4 + 0xf) + 3) <
          *(uint *)(local_48 + 3)) {
        iVar18 = iVar1 + 1;
        iVar1 = iVar14;
      }
      iVar14 = iVar1;
    } while (iVar18 != iVar14);
    for (; iVar18 <= iVar7; iVar18 = iVar18 + 1) {
      uVar8 = (uint)(*(int *)(lVar13 + (long)(iVar18 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
      lVar19 = (long)(int)(uVar8 * 3);
      lVar2 = unaff_x26 + (ulong)*(uint *)(lVar13 + lVar19 * 4 + 0xf);
      if (*(uint *)(lVar2 + 3) != *(uint *)(local_48 + 3)) break;
      if ((int)lVar2 == iVar11) {
        if (uVar8 < uVar3) goto LAB_013fbe28;
        break;
      }
    }
    goto LAB_013fbd38;
  }
  lVar19 = (long)(int)uVar3 * 3;
  do {
    if (lVar19 == 0) goto LAB_013fbd38;
    lVar19 = lVar19 + -3;
  } while (*(int *)(lVar13 + lVar19 * 4 + 0xf) != iVar11);
LAB_013fbe28:
  uVar3 = *(int *)(lVar13 + lVar19 * 4 + 0x13) >> 1;
  uVar12 = (ulong)uVar3;
  local_50 = lVar15;
  if ((uVar3 >> 1 & 1) == 0) {
    bVar10 = (uVar3 >> 6 & 7) == 2;
    uVar16 = (ulong)*(byte *)(lVar15 + 4) + ((uVar12 & 0x1ff80000) >> 0x13);
    if (uVar16 < *(byte *)(lVar15 + 3)) {
      lVar13 = uVar16 * 4 + -1;
      if (bVar10) {
        uVar20 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(local_40 + lVar13) + 3);
        goto LAB_013fbec4;
      }
      lVar13 = unaff_x26 + (ulong)*(uint *)(local_40 + lVar13);
    }
    else {
      uVar17 = unaff_x26 + (ulong)*(uint *)(local_40 + 3);
      if ((uVar17 & 1) == 0) {
        uVar17 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar13 = unaff_x26 + (ulong)*(uint *)(uVar17 + (uVar16 - *(byte *)(lVar15 + 3)) * 4 + 7);
      if (bVar10) {
        uVar20 = *(undefined8 *)(lVar13 + 3);
LAB_013fbec4:
        uVar17 = **(ulong **)(unaff_x26 + 0x1428);
        uVar16 = uVar17 + 0xc;
        if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar13 = uVar17 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar16;
        }
        else {
          lVar13 = FUN_01348560(local_40,0xc);
        }
        *(int *)(lVar13 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(lVar13 + 3) = uVar20;
        lVar15 = local_50;
      }
    }
  }
  else {
    lVar13 = unaff_x26 + (ulong)*(uint *)(lVar13 + lVar19 * 4 + 0x17);
  }
LAB_013fbf78:
  if (((uVar12 & 1) != 0) && (*(int *)(lVar13 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8))) {
    lVar2 = unaff_x26 + (ulong)*(uint *)(local_40 + -1);
    sVar6 = *(short *)(lVar2 + 7);
    if (sVar6 == 0x423) {
      if (*(int *)(lVar13 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8)) goto LAB_013fc0a8;
    }
    else if (sVar6 == 0x439) {
      if (((*(int *)(lVar13 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
          (((bVar4 = *(byte *)(lVar2 + 9), (bVar4 & 0xc0) != 0xc0 &&
            (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(local_40 + 0xb) + 0x1b) & 0x1f) - 0xd)) ||
           ((bVar4 & 1) != 0)))) ||
         ((int)unaff_x26 + *(int *)(local_40 + 0x1b) == (int)*(undefined8 *)(unaff_x26 + 0xa8)))
      goto LAB_013fc0a8;
    }
    else if (((sVar6 != 0x411) || (*(int *)(lVar13 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8)))
            || ((uVar16 = unaff_x26 + (ulong)*(uint *)(local_40 + 0xb), (uVar16 & 1) == 0 ||
                (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7))))) {
LAB_013fc0a8:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2440));
    }
  }
  if (((uint)uVar12 >> 5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if ((*(uint *)(lVar15 + 0xb) >> 0x1b & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
LAB_013fbd38:
  return *(undefined8 *)(unaff_x26 + 0xb8);
}

