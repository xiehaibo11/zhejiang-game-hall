
long FUN_013bf600(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x26;
  
  uVar5 = *(uint *)(param_1 + 7);
  if (uVar5 == 0) {
    return param_2;
  }
  uVar6 = *(uint *)(param_2 + 7);
  if (uVar6 == 0) {
    return param_1;
  }
  uVar4 = uVar5 + uVar6;
  uVar13 = (ulong)uVar4;
  if (uVar4 < 0xffffff1) {
    lVar9 = param_1;
    if (0xc < uVar4) {
      if (((*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) &
           *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7)) >> 3 & 1) == 0) {
        uVar11 = *(undefined8 *)(unaff_x26 + 0x2f0);
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x26 + 0x2e8);
      }
      uVar14 = **(ulong **)(unaff_x26 + 0x1428);
      uVar13 = uVar14 + 0x14;
      if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar9 = uVar14 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar13;
      }
      else {
        lVar9 = FUN_01348560(param_1,0x14,uVar11,param_2);
      }
      *(int *)(lVar9 + -1) = (int)uVar11;
      *(uint *)(lVar9 + 7) = uVar4;
      *(undefined4 *)(lVar9 + 3) = 7;
      *(int *)(lVar9 + 0xb) = (int)param_1;
      *(int *)(lVar9 + 0xf) = (int)param_2;
      return lVar9;
    }
    while( true ) {
      uVar7 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar9 + -1) + 7);
      uVar8 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7);
      if (((uVar7 ^ uVar8) >> 3 & 1) != 0) break;
      if (((uVar7 | uVar8) & 7) == 0) {
        if (((uVar7 | uVar8) >> 3 & 1) == 0) {
          if (uVar4 == 0) {
            lVar10 = *(long *)(unaff_x26 + 200);
          }
          else {
            uVar14 = uVar13 * 2 + 0xf & 0xfffffffffffffffc;
            if (0x20000 < uVar14) {
              if (0x3fffffff < uVar4) {
                uVar15 = **(ulong **)(unaff_x26 + 0x1428);
                uVar14 = uVar15 + 0xc;
                if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar9 = uVar15 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar14;
                }
                else {
                  lVar9 = FUN_01348560(param_1,0xc);
                }
                *(int *)(lVar9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(lVar9 + 3) = (double)uVar13;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1fa0));
            }
            uVar13 = **(ulong **)(unaff_x26 + 0x1428);
            uVar14 = uVar13 + uVar14;
            if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar10 = uVar13 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar14;
            }
            else {
              lVar10 = FUN_01348560();
            }
            *(int *)(lVar10 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
            *(uint *)(lVar10 + 7) = uVar4;
            *(undefined4 *)(lVar10 + 3) = 7;
          }
          lVar12 = (ulong)uVar5 * 2 + 0xb;
          if (lVar12 != 0xb) {
            lVar16 = 0xb;
            do {
              lVar3 = lVar16 + 2;
              *(undefined2 *)(lVar10 + lVar16) = *(undefined2 *)(lVar9 + lVar16);
              lVar16 = lVar3;
            } while (lVar3 != lVar12);
          }
          lVar9 = (ulong)uVar6 * 2 + 0xb;
          if (lVar9 != 0xb) {
            lVar16 = 0xb;
            while( true ) {
              puVar2 = (undefined2 *)(param_2 + lVar16);
              lVar16 = lVar16 + 2;
              *(undefined2 *)(lVar10 + lVar12) = *puVar2;
              if (lVar16 == lVar9) break;
              lVar12 = lVar12 + 2;
            }
          }
          return lVar10;
        }
        if (uVar4 == 0) {
          lVar10 = *(long *)(unaff_x26 + 200);
        }
        else {
          uVar14 = uVar13 + 0xf & 0xfffffffffffffffc;
          if (0x20000 < uVar14) {
            if (0x3fffffff < uVar4) {
              uVar15 = **(ulong **)(unaff_x26 + 0x1428);
              uVar14 = uVar15 + 0xc;
              if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
                lVar9 = uVar15 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar14;
              }
              else {
                lVar9 = FUN_01348560(param_1,0xc);
              }
              *(int *)(lVar9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(lVar9 + 3) = (double)uVar13;
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f98));
          }
          uVar13 = **(ulong **)(unaff_x26 + 0x1428);
          uVar14 = uVar13 + uVar14;
          if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar10 = uVar13 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar14;
          }
          else {
            lVar10 = FUN_01348560();
          }
          *(int *)(lVar10 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
          *(uint *)(lVar10 + 7) = uVar4;
          *(undefined4 *)(lVar10 + 3) = 7;
        }
        lVar12 = (ulong)uVar5 + 0xb;
        if (lVar12 != 0xb) {
          lVar16 = 0xb;
          do {
            lVar3 = lVar16 + 1;
            *(undefined1 *)(lVar10 + lVar16) = *(undefined1 *)(lVar9 + lVar16);
            lVar16 = lVar3;
          } while (lVar3 != lVar12);
        }
        lVar16 = 0xb;
        lVar9 = (ulong)uVar6 + 0xb;
        if (lVar9 != 0xb) {
          while( true ) {
            puVar1 = (undefined1 *)(param_2 + lVar16);
            lVar16 = lVar16 + 1;
            *(undefined1 *)(lVar10 + lVar12) = *puVar1;
            if (lVar16 == lVar9) break;
            lVar12 = lVar12 + 1;
          }
        }
        return lVar10;
      }
      uVar8 = uVar8 & 7;
      if (((uVar7 & 7) == 5) ||
         (((uVar7 & 7) == 1 && (*(int *)(lVar9 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 200))))) {
        lVar9 = unaff_x26 + (ulong)*(uint *)(lVar9 + 0xb);
        if ((uVar8 == 5) ||
           ((uVar8 == 1 && (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 200))))) {
          param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
        }
      }
      else {
        if ((uVar8 != 5) &&
           ((uVar8 != 1 || (*(int *)(param_2 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))))
        break;
        param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2570));
}

