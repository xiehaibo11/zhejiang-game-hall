
ulong FUN_013bfc80(ulong param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long unaff_x26;
  long lVar16;
  
  uVar12 = (ulong)(param_2 >> 1);
  uVar15 = (long)(param_3 >> 1) - uVar12;
  uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7);
  uVar10 = (uint)uVar4;
  if (uVar15 < *(uint *)(param_1 + 7)) {
    if ((long)(param_3 >> 1) == uVar12) {
      return *(ulong *)(unaff_x26 + 200);
    }
    bVar7 = (uVar4 & 7) != 0;
    if (uVar15 == 1) {
      uVar15 = param_1;
      if (!bVar7) {
        lVar16 = 0;
        bVar7 = false;
LAB_013c0228:
        if (bVar7) {
          if ((uVar10 >> 4 & 1) != 0) goto LAB_013c0818;
          lVar9 = *(long *)(uVar15 + 0x13);
        }
        else {
          lVar9 = uVar15 + 0xb;
        }
        if ((uVar10 >> 3 & 1) == 0) {
          uVar12 = (ulong)*(ushort *)(lVar9 + (uVar12 + lVar16) * 2);
        }
        else {
          uVar12 = (ulong)*(byte *)(lVar9 + uVar12 + lVar16);
        }
        if ((uint)uVar12 < 0x100) {
          lVar16 = uVar12 * 4 + 7;
          uVar13 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf18) + lVar16);
          if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
            return uVar13;
          }
          uVar15 = **(ulong **)(unaff_x26 + 0x1428);
          uVar8 = uVar15 + 0x10;
          if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar15 = uVar15 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar8;
          }
          else {
            uVar15 = FUN_01348560(uVar13,0x10);
          }
          *(int *)(uVar15 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
          *(undefined4 *)(uVar15 + 7) = 1;
          *(undefined4 *)(uVar15 + 3) = 7;
          *(char *)(uVar15 + 0xb) = (char)uVar12;
          uVar13 = *(ulong *)(unaff_x26 + 0xf18);
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13c09a4);
            (*pcVar6)();
          }
          *(int *)(uVar13 + lVar16) = (int)uVar15;
          if (((((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar15 & 1) != 0)) &&
             (uVar15 = unaff_x26 + (uVar15 & 0xffffffff),
             ((uint)*(undefined8 *)((uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar13,uVar13 + lVar16,0,2);
          }
        }
        else {
          uVar15 = **(ulong **)(unaff_x26 + 0x1428);
          uVar13 = uVar15 + 0x10;
          if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar15 = uVar15 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar13;
          }
          else {
            uVar15 = FUN_01348560(param_1,0x10);
          }
          *(int *)(uVar15 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
          *(undefined4 *)(uVar15 + 7) = 1;
          *(undefined4 *)(uVar15 + 3) = 7;
          *(short *)(uVar15 + 0xb) = (short)uVar12;
        }
        return uVar15;
      }
      lVar16 = 0;
      uVar10 = (uint)uVar4;
      while( true ) {
        while( true ) {
          while( true ) {
            uVar14 = uVar10 & 7;
            if (1 < uVar14) break;
            if ((uVar10 & 7) == 0) {
              bVar7 = false;
              goto LAB_013c0228;
            }
            if ((uVar14 != 1) || (*(int *)(uVar15 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
            goto LAB_013c0818;
            uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
            uVar10 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
          }
          if (uVar14 == 2) {
            bVar7 = true;
            goto LAB_013c0228;
          }
          if (uVar14 != 3) break;
          uVar13 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
          lVar16 = lVar16 + ((long)((ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21);
          uVar10 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
          uVar15 = uVar13;
        }
        if (uVar14 != 5) break;
        uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
        uVar10 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
      }
LAB_013c0818:
      if (0x3fffffff < uVar12) {
        uVar13 = **(ulong **)(unaff_x26 + 0x1428);
        uVar15 = uVar13 + 0xc;
        if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar16 = uVar13 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar15;
        }
        else {
          lVar16 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar16 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar16 + 3) = (double)uVar12;
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
    }
    uVar13 = param_1;
    if (bVar7) {
      lVar16 = 0;
      uVar10 = (uint)uVar4;
      while( true ) {
        while( true ) {
          while( true ) {
            uVar14 = uVar10 & 7;
            if (1 < uVar14) break;
            if ((uVar10 & 7) == 0) {
              bVar7 = false;
              goto LAB_013bfde4;
            }
            if ((uVar14 != 1) || (*(int *)(uVar13 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
            goto LAB_013c0298;
            uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
            uVar10 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
          }
          if (uVar14 == 2) {
            bVar7 = true;
            goto LAB_013bfde4;
          }
          if (uVar14 != 3) break;
          uVar8 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
          lVar16 = lVar16 + ((long)((ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21);
          uVar10 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7);
          uVar13 = uVar8;
        }
        if (uVar14 != 5) break;
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
        uVar10 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
      }
    }
    else {
      lVar16 = 0;
      bVar7 = false;
LAB_013bfde4:
      uVar14 = (uint)uVar15;
      if (0xc < (long)uVar15) {
        iVar5 = ((param_2 >> 1) + (int)lVar16) * 2;
        if ((uVar10 >> 3 & 1) != 0) {
          uVar15 = **(ulong **)(unaff_x26 + 0x1428);
          uVar12 = uVar15 + 0x14;
          if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar15 = uVar15 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar12;
          }
          else {
            uVar15 = FUN_01348560(param_1,0x14);
          }
          *(int *)(uVar15 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x308);
          *(undefined4 *)(uVar15 + 3) = 7;
          *(uint *)(uVar15 + 7) = uVar14;
          *(int *)(uVar15 + 0xb) = (int)uVar13;
          *(int *)(uVar15 + 0xf) = iVar5;
          return uVar15;
        }
        uVar15 = **(ulong **)(unaff_x26 + 0x1428);
        uVar12 = uVar15 + 0x14;
        if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar15 = uVar15 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar12;
        }
        else {
          uVar15 = FUN_01348560(param_1,0x14);
        }
        *(int *)(uVar15 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x300);
        *(undefined4 *)(uVar15 + 3) = 7;
        *(uint *)(uVar15 + 7) = uVar14;
        *(int *)(uVar15 + 0xb) = (int)uVar13;
        *(int *)(uVar15 + 0xf) = iVar5;
        return uVar15;
      }
      if (!bVar7) {
        if ((uVar10 >> 3 & 1) != 0) {
          lVar16 = uVar12 + lVar16 + 0xb;
          lVar9 = lVar16 + uVar15;
          if (uVar14 == 0) {
            uVar12 = *(ulong *)(unaff_x26 + 200);
          }
          else {
            uVar8 = (uVar15 & 0xffffffff) + 0xf & 0xfffffffffffffffc;
            if (0x20000 < uVar8) {
              if (0x3fffffff < uVar14) {
                uVar13 = **(ulong **)(unaff_x26 + 0x1428);
                uVar12 = uVar13 + 0xc;
                if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar16 = uVar13 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar12;
                }
                else {
                  lVar16 = FUN_01348560(param_1,0xc);
                }
                *(int *)(lVar16 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(lVar16 + 3) = (double)(uVar15 & 0xffffffff);
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f98));
            }
            uVar12 = **(ulong **)(unaff_x26 + 0x1428);
            uVar8 = uVar12 + uVar8;
            if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar12 = uVar12 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar8;
            }
            else {
              uVar12 = FUN_01348560();
            }
            *(int *)(uVar12 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
            *(uint *)(uVar12 + 7) = uVar14;
            *(undefined4 *)(uVar12 + 3) = 7;
          }
          if (lVar16 != lVar9) {
            lVar11 = 0xb;
            while( true ) {
              puVar2 = (undefined1 *)(uVar13 + lVar16);
              lVar16 = lVar16 + 1;
              *(undefined1 *)(uVar12 + lVar11) = *puVar2;
              if (lVar16 == lVar9) break;
              lVar11 = lVar11 + 1;
            }
          }
          return uVar12;
        }
        lVar16 = (uVar12 + lVar16) * 2 + 0xb;
        lVar9 = lVar16 + uVar15 * 2;
        if (uVar14 == 0) {
          uVar12 = *(ulong *)(unaff_x26 + 200);
        }
        else {
          uVar8 = (uVar15 & 0xffffffff) * 2 + 0xf & 0xfffffffffffffffc;
          if (0x20000 < uVar8) {
            if (0x3fffffff < uVar14) {
              uVar13 = **(ulong **)(unaff_x26 + 0x1428);
              uVar12 = uVar13 + 0xc;
              if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
                lVar16 = uVar13 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar12;
              }
              else {
                lVar16 = FUN_01348560(param_1,0xc);
              }
              *(int *)(lVar16 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(lVar16 + 3) = (double)(uVar15 & 0xffffffff);
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1fa0));
          }
          uVar12 = **(ulong **)(unaff_x26 + 0x1428);
          uVar8 = uVar12 + uVar8;
          if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar12 = uVar12 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar8;
          }
          else {
            uVar12 = FUN_01348560();
          }
          *(int *)(uVar12 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
          *(uint *)(uVar12 + 7) = uVar14;
          *(undefined4 *)(uVar12 + 3) = 7;
        }
        if (lVar16 != lVar9) {
          lVar11 = 0xb;
          while( true ) {
            puVar1 = (undefined2 *)(uVar13 + lVar16);
            lVar16 = lVar16 + 2;
            *(undefined2 *)(uVar12 + lVar11) = *puVar1;
            if (lVar16 == lVar9) break;
            lVar11 = lVar11 + 2;
          }
        }
        return uVar12;
      }
      if ((uVar10 >> 4 & 1) == 0) {
        lVar9 = *(long *)(uVar13 + 0x13);
        if ((uVar10 >> 3 & 1) != 0) {
          lVar11 = uVar12 + lVar16 + 0xb;
          if (uVar14 == 0) {
            uVar13 = *(ulong *)(unaff_x26 + 200);
          }
          else {
            uVar8 = (uVar15 & 0xffffffff) + 0xf & 0xfffffffffffffffc;
            if (0x20000 < uVar8) {
              if (0x3fffffff < uVar14) {
                uVar13 = **(ulong **)(unaff_x26 + 0x1428);
                uVar12 = uVar13 + 0xc;
                if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar9 = uVar13 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar12;
                }
                else {
                  lVar9 = FUN_01348560(param_1,0xc);
                }
                *(int *)(lVar9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(lVar9 + 3) = (double)(uVar15 & 0xffffffff);
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f98),lVar16);
            }
            uVar13 = **(ulong **)(unaff_x26 + 0x1428);
            uVar8 = uVar13 + uVar8;
            if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar13 = uVar13 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar8;
            }
            else {
              uVar13 = FUN_01348560();
            }
            *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
            *(uint *)(uVar13 + 7) = uVar14;
            *(undefined4 *)(uVar13 + 3) = 7;
          }
          if (lVar11 != lVar11 + uVar15) {
            lVar16 = uVar12 + lVar16 + 0xb;
            lVar3 = lVar16 + uVar15;
            lVar11 = 0xb;
            while( true ) {
              puVar2 = (undefined1 *)(lVar9 + -0xb + lVar16);
              lVar16 = lVar16 + 1;
              *(undefined1 *)(uVar13 + lVar11) = *puVar2;
              if (lVar16 == lVar3) break;
              lVar11 = lVar11 + 1;
            }
          }
          return uVar13;
        }
        lVar11 = (uVar12 + lVar16) * 2 + 0xb;
        if (uVar14 == 0) {
          uVar13 = *(ulong *)(unaff_x26 + 200);
        }
        else {
          uVar8 = (uVar15 & 0xffffffff) * 2 + 0xf & 0xfffffffffffffffc;
          if (0x20000 < uVar8) {
            if (0x3fffffff < uVar14) {
              uVar13 = **(ulong **)(unaff_x26 + 0x1428);
              uVar12 = uVar13 + 0xc;
              if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
                lVar9 = uVar13 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar12;
              }
              else {
                lVar9 = FUN_01348560(param_1,0xc);
              }
              *(int *)(lVar9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(lVar9 + 3) = (double)(uVar15 & 0xffffffff);
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1fa0),lVar16);
          }
          uVar13 = **(ulong **)(unaff_x26 + 0x1428);
          uVar8 = uVar13 + uVar8;
          if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar13 = uVar13 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar8;
          }
          else {
            uVar13 = FUN_01348560();
          }
          *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
          *(uint *)(uVar13 + 7) = uVar14;
          *(undefined4 *)(uVar13 + 3) = 7;
        }
        if (lVar11 != lVar11 + uVar15 * 2) {
          lVar16 = (uVar12 + lVar16) * 2 + 0xb;
          lVar3 = lVar16 + uVar15 * 2;
          lVar11 = 0xb;
          while( true ) {
            puVar1 = (undefined2 *)(lVar9 + -0xb + lVar16);
            lVar16 = lVar16 + 2;
            *(undefined2 *)(uVar13 + lVar11) = *puVar1;
            if (lVar16 == lVar3) break;
            lVar11 = lVar11 + 2;
          }
        }
        return uVar13;
      }
    }
  }
  else if (uVar12 == 0) {
    return param_1;
  }
LAB_013c0298:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x25f0));
}

