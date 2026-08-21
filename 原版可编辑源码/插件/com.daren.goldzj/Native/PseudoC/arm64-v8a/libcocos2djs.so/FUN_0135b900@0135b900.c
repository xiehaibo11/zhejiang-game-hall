
ulong FUN_0135b900(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int in_w8;
  undefined8 uVar5;
  long extraout_x8;
  long in_x9;
  long lVar6;
  long lVar7;
  long extraout_x9;
  ulong in_x11;
  ulong extraout_x11;
  ulong uVar8;
  long unaff_x26;
  
  uVar3 = (uint)param_6;
  *(int *)(in_x11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  lVar6 = in_x9 + 7;
  *(int *)(in_x11 + 3) = in_w8 * 2;
  if (lVar6 != 7) {
    uVar5 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar6 = lVar6 + -4;
      *(int *)(in_x11 + lVar6) = (int)uVar5;
    } while (lVar6 != 7);
  }
  lVar6 = param_7 * 8 + 7;
  if (lVar6 != 7) {
    lVar4 = param_7 * 4 + 7;
    lVar7 = -0x8000000080001;
    while( true ) {
      lVar6 = lVar6 + -8;
      if (*(long *)(param_8 + lVar6) != lVar7) {
        uVar8 = **(ulong **)(unaff_x26 + 0x1428);
        uVar5 = *(undefined8 *)(param_8 + lVar6);
        uVar2 = uVar8 + 0xc;
        if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar8 = uVar8 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar2;
        }
        else {
          uVar8 = FUN_01348560(param_1,0xc);
          lVar7 = -0x8000000080001;
        }
        *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar8 + 3) = uVar5;
        *(int *)(in_x11 + lVar4 + -4) = (int)uVar8;
        if (((((uint)*(undefined8 *)((in_x11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar8 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar8 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
            & 1) != 0)) {
          FUN_0133eb00(in_x11,in_x11 + lVar4 + -4,0,2);
          lVar6 = extraout_x8;
          lVar7 = extraout_x9;
          in_x11 = extraout_x11;
        }
      }
      uVar3 = (uint)param_6;
      if (lVar6 == 7) break;
      lVar4 = lVar4 + -4;
    }
  }
  *(int *)(param_2 + 7) = (int)in_x11;
  if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((in_x11 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (in_x11 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(param_2,param_2 + 7,0,2);
  }
  *(uint *)(param_2 - 1) = uVar3;
  if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_2,param_2 - 1,2,2);
  }
  uVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
  if (*(int *)(uVar2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
    uVar2 = FUN_0135be94(param_1,param_2);
    return uVar2;
  }
  if ((param_3 & 1) == 0) {
    uVar8 = (long)(param_3 << 0x20) >> 0x21;
  }
  else {
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) {
      uVar2 = FUN_0135be94(param_1,param_2);
      return uVar2;
    }
    uVar8 = (ulong)*(double *)(param_3 + 3);
    if (*(double *)(param_3 + 3) != (double)(long)uVar8) {
      uVar2 = FUN_0135be94(param_1,param_2);
      return uVar2;
    }
    if (0x3ffffffffffffe < uVar8 + 0x1fffffffffffff) {
      uVar2 = FUN_0135be94(param_1,param_2);
      return uVar2;
    }
  }
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x423) {
    uVar3 = *(uint *)(param_2 + 0xb);
  }
  else {
    uVar3 = *(uint *)(uVar2 + 3);
  }
  if ((ulong)((long)(unaff_x26 + (ulong)uVar3 << 0x20) >> 0x21) <= uVar8) {
    uVar2 = FUN_0135be94(param_1,param_2);
    return uVar2;
  }
  if (uVar8 < (ulong)((long)((ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21)) {
    lVar6 = uVar8 * 4 + 7;
    *(int *)(uVar2 + lVar6) = (int)param_1;
    if (((((uint)*(undefined8 *)((uVar2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_1 & 1) != 0)) &&
       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar2,uVar2 + lVar6,0,2);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x135c498);
  (*pcVar1)();
}

