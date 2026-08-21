
ulong FUN_0139c980(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long unaff_x26;
  long unaff_x27;
  
  lVar6 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  iVar3 = *(int *)(lVar6 + 0x393);
  iVar4 = (int)param_1;
  if ((((param_2 & 1) == 0) ||
      (lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1), *(short *)(lVar2 + 7) != 0x42d)) ||
     (((*(int *)(lVar2 + 0xf) != *(int *)(lVar6 + 0x23b) ||
       ((*(int *)(*(long *)(unaff_x26 + 0xec8) + 0xb) == 0 || (iVar3 != iVar4)))) &&
      (iVar5 = FUN_013c0ba0(param_2,*(undefined8 *)(unaff_x26 + 0x5d0)), iVar5 != iVar4)))) {
    if (iVar3 == iVar4) {
      param_2 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = param_2 + 0x14;
      uVar7 = *(undefined4 *)
               (unaff_x26 +
                (ulong)*(uint *)(unaff_x26 +
                                 (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) +
                                                 0x13) + 0x393) + 0x1b);
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        param_2 = param_2 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        param_2 = FUN_01348560(param_1,0x14);
      }
      *(undefined4 *)(param_2 - 1) = uVar7;
      uVar7 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
      *(undefined4 *)(param_2 + 3) = uVar7;
      *(undefined4 *)(param_2 + 7) = uVar7;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)(param_2 + 0xf) = 0;
      if (**(char **)(unaff_x26 + 0x1480) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x23d8));
      }
      FUN_0139b2c0(param_2);
    }
    else {
      lVar6 = FUN_013f9d00(param_1,*(undefined8 *)(unaff_x26 + 0xb8));
      FUN_0133fb80(1,unaff_x26 + (ulong)*(uint *)(lVar6 + 7),lVar6);
      param_2 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 3);
    }
  }
  return param_2;
}

