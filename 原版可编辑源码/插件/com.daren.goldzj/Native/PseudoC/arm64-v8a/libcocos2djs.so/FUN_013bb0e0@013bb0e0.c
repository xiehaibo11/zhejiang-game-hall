
undefined8 FUN_013bb0e0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long unaff_x26;
  long unaff_x27;
  
  if (*(int *)(param_1 + 0x1f) == -2) {
    lVar6 = 0x18;
    lVar7 = 0x17;
  }
  else {
    lVar6 = 0x13;
    lVar7 = 0x16;
  }
  *(undefined4 *)(param_1 + 0x2b) = 2;
  lVar7 = lVar7 * 4 + 7;
  lVar6 = lVar6 * 4 + 7;
  if ((((param_2 & 1) == 0) ||
      (lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1), *(short *)(lVar2 + 7) != 0x42d)) ||
     (((lVar4 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13),
       *(int *)(lVar2 + 0xf) != *(int *)(lVar4 + 0x23b) ||
       (*(int *)(*(long *)(unaff_x26 + 0xec8) + 0xb) == 0)) &&
      (iVar3 = FUN_013c0ba0(param_1,param_2,*(undefined8 *)(unaff_x26 + 0x5d0)),
      iVar3 != *(int *)(lVar4 + 0x393))))) {
    uVar9 = **(ulong **)(unaff_x26 + 0x1428);
    lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    uVar1 = uVar9 + 0x60;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar4 = uVar9 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar4 = FUN_01348560(param_2,param_1,0x60);
    }
    *(undefined4 *)(lVar4 + -1) = *(undefined4 *)(lVar2 + 0x1b7);
    *(undefined4 *)(lVar4 + 3) = 6;
    *(undefined4 *)(lVar4 + 7) = *(undefined4 *)(lVar2 + 7);
    *(int *)(lVar4 + 0xb) = (int)lVar2;
    *(int *)(lVar4 + 0xf) = (int)param_1;
    *(undefined4 *)(lVar4 + 0x13) =
         *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0x393) + 0x1b);
    uVar10 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar4 + 0x17) = uVar10;
    *(undefined4 *)(lVar4 + 0x1b) = uVar10;
    *(undefined4 *)(lVar4 + 0x1f) = 0;
    *(undefined4 *)(lVar4 + 0x23) = 0;
    *(undefined4 *)(lVar4 + 0x27) = *(undefined4 *)(lVar2 + 0x2c7);
    *(undefined4 *)(lVar4 + 0x2b) = uVar10;
    *(undefined4 *)(lVar4 + 0x2f) = uVar10;
    uVar8 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
    *(undefined4 *)(lVar4 + 0x3b) = uVar8;
    lVar7 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar7);
    *(int *)(lVar4 + 0x33) = (int)lVar7;
    *(int *)(lVar4 + 0x37) = (int)lVar4;
    *(int *)(lVar4 + 0x3f) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar7 + 3) << 0x20) >> 0x21) * 8);
    *(undefined4 *)(lVar4 + 0x43) = *(undefined4 *)(lVar2 + 0x2c7);
    *(undefined4 *)(lVar4 + 0x47) = uVar10;
    *(undefined4 *)(lVar4 + 0x4b) = uVar10;
    *(undefined4 *)(lVar4 + 0x57) = uVar8;
    lVar6 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar6);
    *(int *)(lVar4 + 0x4f) = (int)lVar6;
    *(int *)(lVar4 + 0x53) = (int)lVar4;
    *(int *)(lVar4 + 0x5b) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar6 + 3) << 0x20) >> 0x21) * 8);
    if (**(char **)(unaff_x26 + 0x1488) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x23e8));
    }
    uVar5 = *(undefined8 *)(unaff_x26 + 0xa0);
    FUN_0139b2c0(lVar4 + 0x14);
    FUN_013fa780(lVar4 + 0x14,lVar4 + 0x28,lVar4 + 0x44,uVar5);
  }
  else {
    uVar9 = **(ulong **)(unaff_x26 + 0x1428);
    lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    uVar1 = uVar9 + 0x4c;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar4 = uVar9 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar4 = FUN_01348560(param_2,param_1,0x4c);
    }
    *(undefined4 *)(lVar4 + -1) = *(undefined4 *)(lVar2 + 0x1b7);
    *(undefined4 *)(lVar4 + 3) = 6;
    *(undefined4 *)(lVar4 + 7) = *(undefined4 *)(lVar2 + 7);
    *(int *)(lVar4 + 0xb) = (int)lVar2;
    *(int *)(lVar4 + 0xf) = (int)param_1;
    *(undefined4 *)(lVar4 + 0x13) = *(undefined4 *)(lVar2 + 0x2c7);
    uVar8 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar4 + 0x17) = uVar8;
    *(undefined4 *)(lVar4 + 0x1b) = uVar8;
    uVar10 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
    *(undefined4 *)(lVar4 + 0x27) = uVar10;
    lVar7 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar7);
    *(int *)(lVar4 + 0x1f) = (int)lVar7;
    *(int *)(lVar4 + 0x23) = (int)lVar4;
    *(int *)(lVar4 + 0x2b) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar7 + 3) << 0x20) >> 0x21) * 8);
    *(undefined4 *)(lVar4 + 0x2f) = *(undefined4 *)(lVar2 + 0x2c7);
    *(undefined4 *)(lVar4 + 0x33) = uVar8;
    *(undefined4 *)(lVar4 + 0x37) = uVar8;
    *(undefined4 *)(lVar4 + 0x43) = uVar10;
    lVar6 = unaff_x26 + (ulong)*(uint *)(lVar2 + lVar6);
    *(int *)(lVar4 + 0x3b) = (int)lVar6;
    *(int *)(lVar4 + 0x3f) = (int)lVar4;
    *(int *)(lVar4 + 0x47) =
         (int)*(undefined8 *)
               (unaff_x26 + 0x5a58 + ((long)((ulong)*(uint *)(lVar6 + 3) << 0x20) >> 0x21) * 8);
    if (**(char **)(unaff_x26 + 0x1488) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x23e0));
    }
    FUN_013fa780(param_2,lVar4 + 0x14,lVar4 + 0x30,*(undefined8 *)(unaff_x26 + 0xa0),
                 *(undefined8 *)(unaff_x26 + 0xa0));
  }
  return *(undefined8 *)(unaff_x26 + 0xa0);
}

