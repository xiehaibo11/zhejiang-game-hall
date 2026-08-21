
ulong FUN_0135eed4(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  int in_w8;
  undefined8 uVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long in_x9;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong in_x11;
  ulong uVar12;
  ulong extraout_x11;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x13;
  long unaff_x26;
  undefined8 unaff_x27;
  
  *(int *)(in_x11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  lVar9 = in_x9 + 7;
  *(int *)(in_x11 + 3) = in_w8 * 2;
  if (lVar9 != 7) {
    uVar8 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar9 = lVar9 + -4;
      *(int *)(in_x11 + lVar9) = (int)uVar8;
    } while (lVar9 != 7);
  }
  lVar9 = param_7 * 8 + 7;
  if (lVar9 != 7) {
    lVar7 = param_7 * 4 + 7;
    lVar10 = -0x8000000080001;
    while( true ) {
      lVar9 = lVar9 + -8;
      if (*(long *)(param_8 + lVar9) != lVar10) {
        uVar13 = **(ulong **)(unaff_x26 + 0x1428);
        uVar8 = *(undefined8 *)(param_8 + lVar9);
        uVar6 = uVar13 + 0xc;
        if (uVar6 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar13 = uVar13 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar6;
        }
        else {
          uVar13 = FUN_01348560(param_1,0xc);
          lVar10 = -0x8000000080001;
        }
        *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar13 + 3) = uVar8;
        *(int *)(in_x11 + lVar7 + -4) = (int)uVar13;
        if (((((uint)*(undefined8 *)((in_x11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar13 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar13 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          FUN_0133eb00(in_x11,in_x11 + lVar7 + -4,0,2);
          lVar9 = extraout_x8_01;
          lVar10 = extraout_x9_00;
          in_x11 = extraout_x11;
        }
      }
      if (lVar9 == 7) break;
      lVar7 = lVar7 + -4;
    }
  }
  *(int *)(param_2 + 7) = (int)in_x11;
  if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((in_x11 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (in_x11 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(param_2,param_2 + 7,0,2);
  }
  *(int *)(param_2 - 1) = (int)param_6;
  if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
     (((uint)*(undefined8 *)((unaff_x26 + (param_6 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1
      ) != 0)) {
    FUN_0133eb00(param_2,param_2 - 1,2,2);
  }
  uVar6 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
  if ((param_3 & 1) == 0) {
    uVar13 = (long)(param_3 << 0x20) >> 0x21;
  }
  else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
           (uVar13 = (ulong)*(double *)(param_3 + 3),
           *(double *)(param_3 + 3) != (double)(long)uVar13)) ||
          (0x3ffffffffffffe < uVar13 + 0x1fffffffffffff)) goto LAB_0135f9cc;
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x423) {
    uVar4 = *(uint *)(param_2 + 0xb);
  }
  else {
    uVar4 = *(uint *)(uVar6 + 3);
  }
  uVar11 = (long)(unaff_x26 + (ulong)uVar4 << 0x20) >> 0x21;
  uVar14 = uVar6;
  if (uVar13 < uVar11) {
    if (uVar11 <= uVar13) goto LAB_0135f9cc;
  }
  else {
    uVar12 = (long)(unaff_x26 + (ulong)*(uint *)(uVar6 + 3) << 0x20) >> 0x21;
    if (uVar12 <= uVar13) {
      if ((uVar12 + 0x400 <= uVar13) ||
         (uVar2 = uVar13 + 1 + (uVar13 + 1 >> 1) + 0x10, 0x7ffd < uVar2)) {
        if (-1 < (long)uVar13) {
          if (0x3fffffff < uVar13) {
            uVar14 = **(ulong **)(unaff_x26 + 0x1428);
            uVar6 = uVar14 + 0xc;
            if (uVar6 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar9 = uVar14 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar6;
            }
            else {
              lVar9 = FUN_01348560(param_1,0xc);
            }
            *(int *)(lVar9 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(lVar9 + 3) = (double)uVar13;
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1b68),unaff_x27,param_1);
        }
        goto LAB_0135f9cc;
      }
      if (0x7fffffd < (long)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar14 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar14 + uVar2 * 4 + 8;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar14 = uVar14 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        uVar14 = FUN_01348560();
      }
      *(int *)(uVar14 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(uVar14 + 3) = (int)uVar2 * 2;
      lVar9 = uVar2 * 4 + 7;
      lVar7 = uVar12 * 4 + 7;
      if (lVar9 != lVar7) {
        uVar8 = *(undefined8 *)(unaff_x26 + 0xa8);
        do {
          lVar9 = lVar9 + -4;
          *(int *)(uVar14 + lVar9) = (int)uVar8;
        } while (lVar9 != lVar7);
      }
      while (lVar7 != 7) {
        lVar7 = lVar7 + -4;
        *(undefined4 *)(uVar14 + lVar7) = *(undefined4 *)(uVar6 + lVar7);
      }
      *(int *)(param_2 + 7) = (int)uVar14;
      if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar14 & 1) != 0)) &&
         (uVar14 = unaff_x26 + (uVar14 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(param_2,param_2 + 7,0,2);
        uVar14 = extraout_x13;
        uVar13 = extraout_x8_00;
        uVar11 = extraout_x9;
      }
    }
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x423) {
      *(int *)(param_2 + 0xb) = ((int)uVar13 + 1) * 2;
    }
  }
  uVar6 = uVar14;
  if (*(int *)(uVar14 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
    iVar3 = (int)unaff_x26 + *(int *)(uVar14 + 3) >> 1;
    uVar12 = (ulong)iVar3;
    if (0x7ffd < uVar12) {
LAB_0135f9cc:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(6,*(undefined8 *)(unaff_x26 + 0x1ed0));
    }
    if (0x7fffffd < (long)uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar6 = **(ulong **)(unaff_x26 + 0x1428);
    uVar2 = uVar6 + uVar12 * 4 + 8;
    if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar6 = uVar6 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar2;
    }
    else {
      uVar6 = FUN_01348560();
    }
    *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    *(int *)(uVar6 + 3) = iVar3 * 2;
    lVar9 = uVar12 * 4 + 7;
    lVar7 = uVar11 * 4 + 7;
    if (lVar9 != lVar7) {
      uVar8 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar9 = lVar9 + -4;
        *(int *)(uVar6 + lVar9) = (int)uVar8;
      } while (lVar9 != lVar7);
    }
    while (lVar7 != 7) {
      lVar7 = lVar7 + -4;
      *(undefined4 *)(uVar6 + lVar7) = *(undefined4 *)(uVar14 + lVar7);
    }
    *(int *)(param_2 + 7) = (int)uVar6;
    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar6 & 1) != 0)) &&
       (uVar6 = unaff_x26 + (uVar6 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_2,param_2 + 7,0,2);
      uVar13 = extraout_x8;
    }
  }
  if ((ulong)((long)((ulong)*(uint *)(uVar6 + 3) << 0x20) >> 0x21) <= uVar13) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0,0x136174c);
    (*pcVar5)();
  }
  lVar9 = uVar13 * 4 + 7;
  *(int *)(uVar6 + lVar9) = (int)param_1;
  if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_1 & 1) != 0)) &&
     (param_1 = unaff_x26 + (param_1 & 0xffffffff),
     ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar6,uVar6 + lVar9,0,2);
  }
  return param_1;
}

