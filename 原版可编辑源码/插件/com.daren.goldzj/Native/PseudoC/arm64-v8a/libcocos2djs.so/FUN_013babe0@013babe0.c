
undefined8 FUN_013babe0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long unaff_x26;
  long unaff_x27;
  
  *(undefined4 *)(param_1 + 0x2b) = 2;
  if ((((param_2 & 1) == 0) ||
      (lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1), *(short *)(lVar2 + 7) != 0x42d)) ||
     (((lVar5 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13),
       *(int *)(lVar2 + 0xf) != *(int *)(lVar5 + 0x23b) ||
       (*(int *)(*(long *)(unaff_x26 + 0xec8) + 0xb) == 0)) &&
      (iVar4 = FUN_013c0ba0(param_2,*(undefined8 *)(unaff_x26 + 0x5d0)),
      iVar4 != *(int *)(lVar5 + 0x393))))) {
    uVar8 = **(ulong **)(unaff_x26 + 0x1428);
    lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    uVar1 = uVar8 + 0x60;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar5 = uVar8 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar5 = FUN_01348560(param_1,0x60);
    }
    *(undefined4 *)(lVar5 + -1) = *(undefined4 *)(lVar2 + 0x1b7);
    *(undefined4 *)(lVar5 + 3) = 6;
    *(undefined4 *)(lVar5 + 7) = *(undefined4 *)(lVar2 + 7);
    *(int *)(lVar5 + 0xb) = (int)lVar2;
    *(int *)(lVar5 + 0xf) = (int)param_1;
    *(undefined4 *)(lVar5 + 0x13) =
         *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0x393) + 0x1b);
    uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar5 + 0x17) = uVar9;
    *(undefined4 *)(lVar5 + 0x1b) = uVar9;
    *(undefined4 *)(lVar5 + 0x1f) = 0;
    *(undefined4 *)(lVar5 + 0x23) = 0;
    *(undefined4 *)(lVar5 + 0x27) = *(undefined4 *)(lVar2 + 0x2c7);
    *(undefined4 *)(lVar5 + 0x2b) = uVar9;
    *(undefined4 *)(lVar5 + 0x2f) = uVar9;
    uVar7 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
    *(undefined4 *)(lVar5 + 0x3b) = uVar7;
    lVar3 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x5b);
    *(int *)(lVar5 + 0x33) = (int)lVar3;
    *(int *)(lVar5 + 0x37) = (int)lVar5;
    *(int *)(lVar5 + 0x3f) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar3 + 3) << 0x20) >> 0x21) * 8);
    *(undefined4 *)(lVar5 + 0x43) = *(undefined4 *)(lVar2 + 0x2c7);
    *(undefined4 *)(lVar5 + 0x47) = uVar9;
    *(undefined4 *)(lVar5 + 0x4b) = uVar9;
    *(undefined4 *)(lVar5 + 0x57) = uVar7;
    lVar2 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x53);
    *(int *)(lVar5 + 0x4f) = (int)lVar2;
    *(int *)(lVar5 + 0x53) = (int)lVar5;
    *(int *)(lVar5 + 0x5b) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar2 + 3) << 0x20) >> 0x21) * 8);
    if (**(char **)(unaff_x26 + 0x1488) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x23e8));
    }
    uVar6 = *(undefined8 *)(unaff_x26 + 0xa0);
    FUN_0139b2c0(lVar5 + 0x14);
    FUN_013fa780(lVar5 + 0x14,lVar5 + 0x28,lVar5 + 0x44,uVar6);
  }
  else {
    uVar8 = **(ulong **)(unaff_x26 + 0x1428);
    lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    uVar1 = uVar8 + 0x4c;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar5 = uVar8 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar5 = FUN_01348560(param_1,0x4c);
    }
    *(undefined4 *)(lVar5 + -1) = *(undefined4 *)(lVar2 + 0x1b7);
    *(undefined4 *)(lVar5 + 3) = 6;
    *(undefined4 *)(lVar5 + 7) = *(undefined4 *)(lVar2 + 7);
    *(int *)(lVar5 + 0xb) = (int)lVar2;
    *(int *)(lVar5 + 0xf) = (int)param_1;
    *(undefined4 *)(lVar5 + 0x13) = *(undefined4 *)(lVar2 + 0x2c7);
    uVar7 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar5 + 0x17) = uVar7;
    *(undefined4 *)(lVar5 + 0x1b) = uVar7;
    uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
    *(undefined4 *)(lVar5 + 0x27) = uVar9;
    lVar3 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x5b);
    *(int *)(lVar5 + 0x1f) = (int)lVar3;
    *(int *)(lVar5 + 0x23) = (int)lVar5;
    *(int *)(lVar5 + 0x2b) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar3 + 3) << 0x20) >> 0x21) * 8);
    *(undefined4 *)(lVar5 + 0x2f) = *(undefined4 *)(lVar2 + 0x2c7);
    *(undefined4 *)(lVar5 + 0x33) = uVar7;
    *(undefined4 *)(lVar5 + 0x37) = uVar7;
    *(undefined4 *)(lVar5 + 0x43) = uVar9;
    lVar2 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x53);
    *(int *)(lVar5 + 0x3b) = (int)lVar2;
    *(int *)(lVar5 + 0x3f) = (int)lVar5;
    *(int *)(lVar5 + 0x47) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar2 + 3) << 0x20) >> 0x21) * 8);
    if (**(char **)(unaff_x26 + 0x1488) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x23e0));
    }
    FUN_013fa780(param_2,lVar5 + 0x14,lVar5 + 0x30,*(undefined8 *)(unaff_x26 + 0xa0),
                 *(undefined8 *)(unaff_x26 + 0xa0));
  }
  return *(undefined8 *)(unaff_x26 + 0xa0);
}

