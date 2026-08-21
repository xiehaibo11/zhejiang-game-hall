
long FUN_013732e0(ulong param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  uint *puVar13;
  long unaff_x26;
  long unaff_x27;
  
  lVar5 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  param_3 = param_3 >> 1;
  lVar8 = (long)param_3;
  uVar10 = *(uint *)(lVar5 + -1);
  uVar4 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           ((long)(int)(uint)(*(byte *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 10) >> 3) + 0x56
           ) * 4 + 7);
  if (lVar8 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
    uVar7 = param_1;
  }
  else if (uVar10 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    if (0x3fffffe < lVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar7 = lVar8 * 8 + 8;
    if (0x3fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = (uint *)*puVar12;
    if (0x20000 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    if ((uint *)puVar12[1] <= puVar13 + lVar8 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    uVar7 = (long)puVar13 + 1;
    *puVar12 = (ulong)(puVar13 + lVar8 * 2 + 2);
    *puVar13 = uVar10;
    if ((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar10 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      FUN_0133eb00(uVar7,puVar13,2,2);
    }
    puVar13[1] = param_3 * 2;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x1373534;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    param_1 = (**(code **)(unaff_x26 + 0x11d0))
                        (puVar13 + 2,lVar5 + ((long)((ulong)param_2 << 0x20) >> 0x21) * 8 + 7,
                         lVar8 * 8,param_3,uVar7,puVar13 + 2);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  else {
    if (uVar10 == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      uVar10 = (uint)*(undefined8 *)(unaff_x26 + 0xe0);
    }
    if (0x7fffffd < lVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    lVar6 = **(long **)(unaff_x26 + 0x1428);
    uVar7 = lVar8 * 4 + 8;
    uVar2 = lVar6 + uVar7;
    if ((uVar2 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar7 < 0x20000)) {
      **(ulong **)(unaff_x26 + 0x1428) = uVar2;
      uVar7 = lVar6 + 1;
    }
    else {
      param_1 = FUN_01348500(param_1,uVar7);
      uVar7 = param_1;
    }
    *(uint *)(uVar7 - 1) = uVar10;
    *(int *)(uVar7 + 3) = param_3 * 2;
    lVar11 = (long)((int)param_2 >> 1);
    lVar6 = lVar11 * 4 + 7;
    if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x1373428;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      param_1 = (**(code **)(unaff_x26 + 0x11d0))
                          (uVar7 + 7,lVar5 + lVar6,lVar8 * 4,uVar4,uVar7,lVar5);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
    }
    else {
      lVar8 = (lVar11 + lVar8) * 4 + 7;
      if (lVar6 != lVar8) {
        do {
          puVar1 = (undefined4 *)(lVar5 + lVar6);
          lVar3 = lVar6 + lVar11 * -4;
          lVar6 = lVar6 + 4;
          *(undefined4 *)(uVar7 + lVar3) = *puVar1;
        } while (lVar6 != lVar8);
      }
    }
  }
  uVar9 = **(ulong **)(unaff_x26 + 0x1428);
  uVar2 = uVar9 + 0x10;
  if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar5 = uVar9 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar2;
  }
  else {
    lVar5 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(lVar5 + -1) = uVar4;
  *(int *)(lVar5 + 0xb) = param_3 * 2;
  *(int *)(lVar5 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar5 + 7) = (int)uVar7;
  return lVar5;
}

