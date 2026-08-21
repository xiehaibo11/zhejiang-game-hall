
void FUN_013549c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,long param_8,ulong param_9)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong extraout_x8;
  int in_w9;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong in_x11;
  ulong extraout_x11;
  long in_x13;
  long unaff_x26;
  
  *(int *)(in_x11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(in_x11 + 3) = in_w9 * 2;
  lVar6 = in_x13 + 7;
  lVar5 = param_1 * 4 + 7;
  if (lVar6 != lVar5) {
    uVar7 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar6 = lVar6 + -4;
      *(int *)(in_x11 + lVar6) = (int)uVar7;
    } while (lVar6 != lVar5);
  }
  while (lVar5 != 7) {
    lVar5 = lVar5 + -4;
    *(undefined4 *)(in_x11 + lVar5) = *(undefined4 *)(param_8 + lVar5);
  }
  *(int *)(param_3 + 7) = (int)in_x11;
  if (((((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((in_x11 & 1) != 0)) &&
     (in_x11 = unaff_x26 + (in_x11 & 0xffffffff),
     ((uint)*(undefined8 *)((in_x11 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_3,param_3 + 7,0,2);
    param_3 = extraout_x8;
    in_x11 = extraout_x11;
  }
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) == 0x423) {
    *(int *)(param_3 + 0xb) = ((int)param_9 + 1) * 2;
  }
  uVar4 = in_x11;
  if (*(int *)(in_x11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
    iVar2 = (int)unaff_x26 + *(int *)(in_x11 + 3) >> 1;
    uVar8 = (ulong)iVar2;
    if (0x7ffd < uVar8) {
      FUN_01355a60(param_2,param_3,param_4,param_5,param_6);
      return;
    }
    if (0x7fffffd < (long)uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + uVar8 * 4 + 8;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar4 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar4 = FUN_01348560();
    }
    *(int *)(uVar4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    *(int *)(uVar4 + 3) = iVar2 * 2;
    lVar6 = uVar8 * 4 + 7;
    lVar5 = param_7 * 4 + 7;
    if (lVar6 != lVar5) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar6 = lVar6 + -4;
        *(int *)(uVar4 + lVar6) = (int)uVar7;
      } while (lVar6 != lVar5);
    }
    while (lVar5 != 7) {
      lVar5 = lVar5 + -4;
      *(undefined4 *)(uVar4 + lVar5) = *(undefined4 *)(in_x11 + lVar5);
    }
    *(int *)(param_3 + 7) = (int)uVar4;
    if (((((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar4 & 1) != 0)) &&
       (uVar4 = unaff_x26 + (uVar4 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_3,param_3 + 7,0,2);
    }
  }
  if (param_9 < (ulong)((long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21)) {
    *(int *)(uVar4 + param_9 * 4 + 7) = (int)param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(0,0x1355fe4);
  (*pcVar3)();
}

