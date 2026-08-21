
ulong FUN_01366ad8(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int in_w8;
  undefined8 uVar9;
  ulong extraout_x8;
  long extraout_x8_00;
  long in_x9;
  long lVar10;
  long lVar11;
  long extraout_x9;
  ulong in_x11;
  ulong uVar12;
  ulong extraout_x11;
  ulong uVar13;
  long unaff_x26;
  
  uVar8 = (uint)param_6;
  *(int *)(in_x11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  lVar10 = in_x9 + 7;
  *(int *)(in_x11 + 3) = in_w8 * 2;
  if (lVar10 != 7) {
    uVar9 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar10 = lVar10 + -4;
      *(int *)(in_x11 + lVar10) = (int)uVar9;
    } while (lVar10 != 7);
  }
  lVar10 = param_7 * 8 + 7;
  if (lVar10 != 7) {
    lVar7 = param_7 * 4 + 7;
    lVar11 = -0x8000000080001;
    while( true ) {
      lVar10 = lVar10 + -8;
      if (*(long *)(param_8 + lVar10) != lVar11) {
        uVar13 = **(ulong **)(unaff_x26 + 0x1428);
        uVar9 = *(undefined8 *)(param_8 + lVar10);
        uVar5 = uVar13 + 0xc;
        if (uVar5 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar13 = uVar13 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar5;
        }
        else {
          uVar13 = FUN_01348560(param_1,0xc);
          lVar11 = -0x8000000080001;
        }
        *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar13 + 3) = uVar9;
        *(int *)(in_x11 + lVar7 + -4) = (int)uVar13;
        if (((((uint)*(undefined8 *)((in_x11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar13 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar13 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          FUN_0133eb00(in_x11,in_x11 + lVar7 + -4,0,2);
          lVar10 = extraout_x8_00;
          lVar11 = extraout_x9;
          in_x11 = extraout_x11;
        }
      }
      uVar8 = (uint)param_6;
      if (lVar10 == 7) break;
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
  *(uint *)(param_2 - 1) = uVar8;
  if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_2,param_2 - 1,2,2);
  }
  uVar5 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
  if ((param_3 & 1) == 0) {
    uVar13 = (long)(param_3 << 0x20) >> 0x21;
  }
  else {
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) {
      uVar5 = FUN_01367618(param_1,param_2);
      return uVar5;
    }
    uVar13 = (ulong)*(double *)(param_3 + 3);
    if (*(double *)(param_3 + 3) != (double)(long)uVar13) {
      uVar5 = FUN_01367618(param_1,param_2);
      return uVar5;
    }
    if (0x3ffffffffffffe < uVar13 + 0x1fffffffffffff) {
      uVar5 = FUN_01367618(param_1,param_2);
      return uVar5;
    }
  }
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x423) {
    uVar8 = *(uint *)(param_2 + 0xb);
  }
  else {
    uVar8 = *(uint *)(uVar5 + 3);
  }
  uVar3 = (long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21;
  if (uVar3 <= uVar13) {
    uVar5 = FUN_01367618(param_1,param_2);
    return uVar5;
  }
  uVar6 = uVar5;
  if (*(int *)(uVar5 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
    iVar2 = (int)unaff_x26 + *(int *)(uVar5 + 3) >> 1;
    uVar12 = (ulong)iVar2;
    if (0x7ffd < uVar12) {
      uVar5 = FUN_01367618(param_1,param_2);
      return uVar5;
    }
    if (0x7fffffd < (long)uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar6 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar6 + uVar12 * 4 + 8;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar6 = uVar6 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar6 = FUN_01348560();
    }
    *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    *(int *)(uVar6 + 3) = iVar2 * 2;
    lVar10 = uVar12 * 4 + 7;
    lVar7 = uVar3 * 4 + 7;
    if (lVar10 != lVar7) {
      uVar9 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar10 = lVar10 + -4;
        *(int *)(uVar6 + lVar10) = (int)uVar9;
      } while (lVar10 != lVar7);
    }
    while (lVar7 != 7) {
      lVar7 = lVar7 + -4;
      *(undefined4 *)(uVar6 + lVar7) = *(undefined4 *)(uVar5 + lVar7);
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
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1367d68);
    (*pcVar4)();
  }
  lVar10 = uVar13 * 4 + 7;
  *(int *)(uVar6 + lVar10) = (int)param_1;
  if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_1 & 1) != 0)) &&
     (param_1 = unaff_x26 + (param_1 & 0xffffffff),
     ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar6,uVar6 + lVar10,0,2);
  }
  return param_1;
}

