
long FUN_013eba60(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x8;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ushort uVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x26;
  long unaff_x27;
  
  uVar11 = *(uint *)(param_1 + 7);
  uVar9 = (ulong)uVar11;
  uVar3 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           0x167);
  if (uVar9 == 0) {
    uVar10 = **(ulong **)(unaff_x26 + 0x1428);
    uVar8 = uVar10 + 0x10;
    if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar7 = uVar10 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar8;
    }
    else {
      lVar7 = FUN_01348560(param_1,0x10);
    }
    *(undefined4 *)(lVar7 + -1) = uVar3;
    *(uint *)(lVar7 + 0xb) = uVar11 * 2;
    lVar16 = *(long *)(unaff_x26 + 0x168);
    *(int *)(lVar7 + 3) = (int)lVar16;
    *(int *)(lVar7 + 7) = (int)lVar16;
    bVar4 = true;
  }
  else {
    uVar8 = uVar9 * 4 + 0x18;
    if (uVar8 < 0x20001) {
      uVar10 = **(ulong **)(unaff_x26 + 0x1428);
      uVar8 = uVar10 + uVar8;
      if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar7 = uVar10 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar8;
      }
      else {
        lVar7 = FUN_01348560();
      }
      *(undefined4 *)(lVar7 + -1) = uVar3;
      *(uint *)(lVar7 + 0xb) = uVar11 * 2;
      lVar16 = lVar7 + 0x10;
      *(int *)(lVar7 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar7 + 7) = (int)lVar16;
      *(int *)(lVar7 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(uint *)(lVar7 + 0x13) = uVar11 * 2;
      bVar4 = false;
    }
    else {
      if (0x2000000 < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x13ebfdc);
        (*pcVar5)();
      }
      if (0x7fffffd < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar13 = **(ulong **)(unaff_x26 + 0x1428);
      uVar8 = uVar9 * 4 + 8;
      uVar10 = uVar13 + uVar8;
      if ((uVar10 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 < 0x20000)) {
        lVar16 = uVar13 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar10;
      }
      else {
        lVar16 = FUN_01348500();
      }
      *(int *)(lVar16 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(uint *)(lVar16 + 3) = uVar11 * 2;
      *(undefined8 *)(unaff_x26 + 0x40) = 0x13ebb34;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      uVar6 = (**(code **)(unaff_x26 + 0x11e0))(0,lVar16 + 7);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      uVar10 = **(ulong **)(unaff_x26 + 0x1428);
      uVar8 = uVar10 + 0x10;
      if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar7 = uVar10 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar8;
      }
      else {
        lVar7 = FUN_01348560(uVar6,0x10);
      }
      *(undefined4 *)(lVar7 + -1) = uVar3;
      *(uint *)(lVar7 + 0xb) = uVar11 * 2;
      *(int *)(lVar7 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar7 + 7) = (int)lVar16;
      bVar4 = false;
    }
  }
  if ((!bVar4) && (lVar12 = uVar9 * 4 + 7, lVar12 != 7)) {
    uVar6 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar12 = lVar12 + -4;
      *(int *)(lVar16 + lVar12) = (int)uVar6;
    } while (lVar12 != 7);
  }
  uVar10 = unaff_x26 + (ulong)*(uint *)(lVar7 + 7);
  uVar11 = 0;
  uVar13 = 0;
  uVar8 = param_1;
  uVar14 = param_1;
  do {
    if ((long)uVar9 <= (long)uVar13) {
      *(uint *)(lVar7 + 0xb) = uVar11;
      return lVar7;
    }
    uVar18 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
    uVar15 = (uint)uVar18;
    uVar17 = uVar14;
    if ((uVar18 & 7) == 0) {
      lVar16 = 0;
      bVar4 = false;
    }
    else {
      lVar16 = 0;
      while( true ) {
        while (uVar2 = uVar15 & 7, uVar2 < 2) {
          if (uVar2 == 0) {
            bVar4 = false;
            goto LAB_013ebdc4;
          }
          if ((uVar2 != 1) || (*(int *)(uVar17 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
          goto LAB_013ec0a0;
          uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7);
        }
        if (uVar2 == 2) break;
        if (uVar2 == 3) {
          uVar19 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
          lVar16 = lVar16 + ((long)((ulong)*(uint *)(uVar17 + 0xf) << 0x20) >> 0x21);
          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar19 - 1) + 7);
          uVar17 = uVar19;
        }
        else {
          if (uVar2 != 5) goto LAB_013ec0a0;
          uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7);
        }
      }
      bVar4 = true;
    }
LAB_013ebdc4:
    if (bVar4) {
      if ((uVar15 >> 4 & 1) != 0) {
LAB_013ec0a0:
        if (0x3fffffff < uVar13) {
          uVar10 = **(ulong **)(unaff_x26 + 0x1428);
          uVar9 = uVar10 + 0xc;
          if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar7 = uVar10 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar9;
          }
          else {
            lVar7 = FUN_01348560(uVar8,0xc);
          }
          *(int *)(lVar7 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(lVar7 + 3) = (double)uVar13;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
      }
      lVar12 = *(long *)(uVar17 + 0x13);
    }
    else {
      lVar12 = uVar17 + 0xb;
    }
    if ((uVar15 >> 3 & 1) == 0) {
      uVar17 = (ulong)*(ushort *)(lVar12 + (uVar13 + lVar16) * 2);
    }
    else {
      uVar17 = (ulong)*(byte *)(lVar12 + uVar13 + lVar16);
    }
    if ((((uint)uVar17 & 0xfc00) == 0xd800) && (uVar19 = uVar13 + 1, (long)uVar19 < (long)uVar9)) {
      uVar18 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
      uVar15 = (uint)uVar18;
      uVar20 = uVar14;
      if ((uVar18 & 7) == 0) {
        lVar16 = 0;
        bVar4 = false;
      }
      else {
        lVar16 = 0;
        while( true ) {
          while (uVar2 = uVar15 & 7, uVar2 < 2) {
            if (uVar2 == 0) {
              bVar4 = false;
              goto LAB_013ebefc;
            }
            if ((uVar2 != 1) || (*(int *)(uVar20 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
            goto LAB_013ec198;
            uVar20 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
            uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
          }
          if (uVar2 == 2) break;
          if (uVar2 == 3) {
            uVar1 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
            lVar16 = lVar16 + ((long)((ulong)*(uint *)(uVar20 + 0xf) << 0x20) >> 0x21);
            uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 7);
            uVar20 = uVar1;
          }
          else {
            if (uVar2 != 5) goto LAB_013ec198;
            uVar20 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
            uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
          }
        }
        bVar4 = true;
      }
LAB_013ebefc:
      if (bVar4) {
        if ((uVar15 >> 4 & 1) != 0) {
LAB_013ec198:
          if (0x3fffffff < uVar19) {
            uVar10 = **(ulong **)(unaff_x26 + 0x1428);
            uVar9 = uVar10 + 0xc;
            if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar7 = uVar10 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar9;
            }
            else {
              lVar7 = FUN_01348560(uVar8,0xc);
            }
            *(int *)(lVar7 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(lVar7 + 3) = (double)uVar19;
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
        }
        lVar12 = *(long *)(uVar20 + 0x13);
      }
      else {
        lVar12 = uVar20 + 0xb;
      }
      if ((uVar15 >> 3 & 1) == 0) {
        uVar18 = *(ushort *)(lVar12 + (uVar19 + lVar16) * 2);
      }
      else {
        uVar18 = (ushort)*(byte *)(lVar12 + uVar19 + lVar16);
      }
      if ((uVar18 & 0xfc00) == 0xdc00) {
        uVar17 = (ulong)((uint)uVar17 | (uint)uVar18 << 0x10);
      }
    }
    uVar15 = (uint)uVar17;
    if (uVar15 < 0x10000) {
      if ((int)uVar15 < 0x100) {
        lVar16 = uVar17 * 4 + 7;
        uVar8 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf18) + lVar16);
        if ((int)uVar8 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
          uVar19 = **(ulong **)(unaff_x26 + 0x1428);
          uVar14 = uVar19 + 0x10;
          if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar8 = uVar19 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar14;
          }
          else {
            uVar8 = FUN_01348560(uVar8,0x10);
          }
          *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
          *(undefined4 *)(uVar8 + 7) = 1;
          *(undefined4 *)(uVar8 + 3) = 7;
          *(char *)(uVar8 + 0xb) = (char)uVar17;
          uVar19 = *(ulong *)(unaff_x26 + 0xf18);
          if ((ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x13ec388);
            (*pcVar5)();
          }
          *(int *)(uVar19 + lVar16) = (int)uVar8;
          uVar14 = param_1;
          if (((((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar8 & 1) != 0)) &&
             (uVar8 = unaff_x26 + (uVar8 & 0xffffffff),
             ((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar19,uVar19 + lVar16,0,2);
          }
        }
      }
      else {
        uVar19 = **(ulong **)(unaff_x26 + 0x1428);
        uVar14 = uVar19 + 0x10;
        if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar8 = uVar19 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar14;
        }
        else {
          uVar8 = FUN_01348560(uVar8,0x10);
        }
        *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
        *(undefined4 *)(uVar8 + 7) = 1;
        *(undefined4 *)(uVar8 + 3) = 7;
        *(short *)(uVar8 + 0xb) = (short)uVar17;
        uVar14 = param_1;
      }
    }
    else {
      uVar19 = **(ulong **)(unaff_x26 + 0x1428);
      uVar17 = uVar19 + 0x10;
      if (uVar17 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar8 = uVar19 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar17;
      }
      else {
        uVar8 = FUN_01348560(uVar8,0x10);
        uVar14 = param_1;
      }
      *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
      *(undefined4 *)(uVar8 + 7) = 2;
      *(undefined4 *)(uVar8 + 3) = 7;
      *(uint *)(uVar8 + 0xb) = uVar15;
    }
    uVar17 = (long)((ulong)uVar11 << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar17) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x13ebfd8);
      (*pcVar5)();
    }
    lVar16 = uVar17 * 4 + 7;
    *(int *)(uVar10 + lVar16) = (int)uVar8;
    if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar8 & 1) != 0)) &&
       (uVar8 = unaff_x26 + (uVar8 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar10,uVar10 + lVar16,0,2);
      uVar14 = extraout_x8;
    }
    uVar11 = uVar11 + 2;
    uVar13 = uVar13 + *(uint *)(uVar8 + 7);
  } while( true );
}

