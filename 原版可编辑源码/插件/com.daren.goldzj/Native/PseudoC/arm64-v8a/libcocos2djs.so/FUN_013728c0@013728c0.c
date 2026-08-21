
long FUN_013728c0(ulong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x8;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  long unaff_x26;
  long unaff_x27;
  
  lVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  iVar7 = (int)lVar11;
  uVar1 = iVar7 >> 1;
  uVar8 = (ulong)uVar1;
  lVar10 = (long)(int)uVar1;
  bVar4 = *(byte *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 10) >> 3;
  uVar5 = (uint)bVar4;
  if ((bVar4 & 1) == 0) {
    uVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
    uVar14 = *(uint *)(uVar13 - 1);
    if (lVar10 == 0) {
      param_1 = *(ulong *)(unaff_x26 + 0x168);
      uVar15 = param_1;
    }
    else if (uVar14 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
      if (0x3fffffe < lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar15 = lVar10 * 8 + 8;
      if (0x3fffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
      }
      puVar16 = (uint *)**(undefined8 **)(unaff_x26 + 0x1428);
      if (0x20000 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
      }
      if ((uint *)(*(undefined8 **)(unaff_x26 + 0x1428))[1] <= puVar16 + lVar10 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
      }
      uVar15 = (long)puVar16 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = (ulong)(puVar16 + lVar10 * 2 + 2);
      *puVar16 = uVar14;
      if ((((uint)*(undefined8 *)((uVar15 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar14 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(uVar15,puVar16,2,2);
      }
      puVar16[1] = uVar1 * 2;
      *(undefined8 *)(unaff_x26 + 0x40) = 0x1372af8;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      param_1 = (**(code **)(unaff_x26 + 0x11d0))
                          (puVar16 + 2,uVar13 + 7,lVar10 * 8,uVar15,lVar11,uVar8);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
    }
    else {
      uVar15 = uVar13;
      if (uVar14 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
        if (0x7fffffd < lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
        }
        lVar11 = **(long **)(unaff_x26 + 0x1428);
        uVar8 = lVar10 * 4 + 8;
        uVar15 = lVar11 + uVar8;
        if ((uVar15 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 < 0x20000)) {
          **(ulong **)(unaff_x26 + 0x1428) = uVar15;
          uVar15 = lVar11 + 1;
        }
        else {
          param_1 = FUN_01348500();
          uVar15 = param_1;
        }
        *(uint *)(uVar15 - 1) = uVar14;
        *(uint *)(uVar15 + 3) = uVar1 * 2;
        if (((uint)*(undefined8 *)((uVar15 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13729e8;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar15 + 7,uVar13 + 7);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
        }
        else {
          lVar11 = lVar10 * 4 + 7;
          if (lVar11 != 7) {
            lVar10 = 7;
            do {
              lVar17 = lVar10 + 4;
              *(undefined4 *)(uVar15 + lVar10) = *(undefined4 *)(uVar13 + lVar10);
              lVar10 = lVar17;
            } while (lVar17 != lVar11);
          }
        }
      }
    }
    goto LAB_01372ea4;
  }
  lVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar14 = *(uint *)(lVar11 + -1);
  if (lVar10 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
    bVar3 = false;
    uVar15 = param_1;
  }
  else if (uVar14 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    if (0x3fffffe < lVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar8 = lVar10 * 8 + 8;
    if (0x3fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    puVar16 = (uint *)**(undefined8 **)(unaff_x26 + 0x1428);
    if (0x20000 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    if ((uint *)(*(undefined8 **)(unaff_x26 + 0x1428))[1] <= puVar16 + lVar10 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    param_1 = (long)puVar16 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = (ulong)(puVar16 + lVar10 * 2 + 2);
    *puVar16 = uVar14;
    if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar14 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      FUN_0133eb00(param_1,puVar16,2,2);
    }
    puVar16[1] = uVar1 * 2;
    lVar17 = lVar10 * 8 + 7;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x26 + 0xa8) + 3);
    lVar12 = lVar17;
    if (lVar17 == 7) {
      bVar3 = true;
    }
    else {
      do {
        lVar12 = lVar12 + -8;
        *(undefined8 *)(param_1 + lVar12) = uVar9;
      } while (lVar12 != 7);
      bVar3 = false;
    }
    lVar12 = lVar17;
    uVar15 = param_1;
    if (!bVar3) {
LAB_01372d3c:
      lVar12 = lVar12 + -8;
      if (*(long *)(lVar11 + lVar12) != -0x8000000080001) goto code_r0x01372d4c;
      if (0x7fffffd < lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      lVar12 = **(long **)(unaff_x26 + 0x1428);
      uVar8 = lVar10 * 4 + 8;
      uVar13 = lVar12 + uVar8;
      if ((uVar13 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 < 0x20000)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar13;
        uVar8 = lVar12 + 1;
      }
      else {
        param_1 = FUN_01348500();
        uVar8 = param_1;
      }
      lVar12 = -0x8000000080001;
      *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(uint *)(uVar8 + 3) = uVar1 * 2;
      if (lVar10 * 4 != 0) {
        lVar6 = lVar10 * 4 + 7;
        uVar9 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar6 = lVar6 + -4;
          *(int *)(uVar8 + lVar6) = (int)uVar9;
        } while (lVar6 != 7);
      }
      if (lVar17 != 7) {
        lVar10 = lVar10 * 4 + 7;
        lVar6 = lVar11;
        while( true ) {
          lVar17 = lVar17 + -8;
          if (*(long *)(lVar6 + lVar17) != lVar12) {
            uVar15 = **(ulong **)(unaff_x26 + 0x1428);
            uVar9 = *(undefined8 *)(lVar6 + lVar17);
            uVar13 = uVar15 + 0xc;
            if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
              **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              uVar13 = uVar15 + 1;
            }
            else {
              param_1 = FUN_01348560(param_1,0xc);
              lVar12 = -0x8000000080001;
              lVar6 = lVar11;
              uVar13 = param_1;
            }
            *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(undefined8 *)(uVar13 + 3) = uVar9;
            *(int *)(uVar8 + lVar10 + -4) = (int)uVar13;
            if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar13 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar13 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar8,uVar8 + lVar10 + -4,0,2);
              lVar12 = extraout_x8;
            }
          }
          if (lVar17 == 7) break;
          lVar10 = lVar10 + -4;
        }
      }
      param_1 = uVar8;
      bVar3 = true;
      uVar15 = param_1;
      goto LAB_01372e90;
    }
    bVar3 = false;
  }
  else {
    if (uVar14 == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      uVar14 = (uint)*(undefined8 *)(unaff_x26 + 0xe0);
    }
    if (0x7fffffd < lVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    lVar12 = **(long **)(unaff_x26 + 0x1428);
    uVar8 = lVar10 * 4 + 8;
    lVar17 = lVar10 * 4 + 7;
    uVar13 = lVar12 + uVar8;
    if ((uVar13 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 < 0x20000)) {
      **(ulong **)(unaff_x26 + 0x1428) = uVar13;
      uVar15 = lVar12 + 1;
    }
    else {
      param_1 = FUN_01348500();
      uVar15 = param_1;
    }
    *(uint *)(uVar15 - 1) = uVar14;
    *(uint *)(uVar15 + 3) = uVar1 * 2;
    if (lVar17 == 7) {
      bVar3 = true;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x26 + 0xa0);
      do {
        lVar17 = lVar17 + -4;
        *(int *)(uVar15 + lVar17) = (int)uVar9;
      } while (lVar17 != 7);
      bVar3 = false;
    }
    if (bVar3) {
      bVar3 = false;
    }
    else {
      lVar10 = lVar10 * 4 + 7;
      bVar3 = false;
      uVar9 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar10 = lVar10 + -4;
        if (*(int *)(lVar11 + lVar10) == (int)uVar9) {
          bVar3 = true;
        }
        else {
          *(int *)(uVar15 + lVar10) = *(int *)(lVar11 + lVar10);
        }
      } while (lVar10 != 7);
    }
  }
  goto LAB_01372e90;
code_r0x01372d4c:
  *(undefined8 *)(param_1 + lVar12) = *(undefined8 *)(lVar11 + lVar12);
  if (lVar12 == 7) goto code_r0x01372d5c;
  goto LAB_01372d3c;
code_r0x01372d5c:
  bVar3 = false;
LAB_01372e90:
  if (bVar3) {
    uVar5 = 2;
  }
LAB_01372ea4:
  if (5 < uVar5) {
    uVar5 = 2;
  }
  uVar13 = **(ulong **)(unaff_x26 + 0x1428);
  uVar8 = uVar13 + 0x10;
  uVar2 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           ((long)(int)uVar5 + 0x56) * 4 + 7);
  if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar11 = uVar13 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar8;
  }
  else {
    lVar11 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(lVar11 + -1) = uVar2;
  *(int *)(lVar11 + 0xb) = iVar7;
  *(int *)(lVar11 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar11 + 7) = (int)uVar15;
  return lVar11;
}

