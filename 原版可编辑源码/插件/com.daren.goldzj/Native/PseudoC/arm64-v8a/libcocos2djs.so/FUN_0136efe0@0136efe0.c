
/* WARNING: Removing unreachable block (ram,0x0136f0c8) */
/* WARNING: Removing unreachable block (ram,0x0136f008) */
/* WARNING: Removing unreachable block (ram,0x0136f11c) */
/* WARNING: Removing unreachable block (ram,0x0136f02c) */
/* WARNING: Removing unreachable block (ram,0x0136f034) */
/* WARNING: Removing unreachable block (ram,0x0136f0b0) */

long FUN_0136efe0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long unaff_x26;
  uint in_stack_00000000;
  
  uVar4 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x16f);
  if ((in_stack_00000000 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1b78));
  }
  if (in_stack_00000000 == 0) {
    uVar3 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar3 + 0x10;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar2 = uVar3 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar2 = FUN_01348560(param_1,0x10);
    }
    *(undefined4 *)(lVar2 + -1) = uVar4;
    *(undefined4 *)(lVar2 + 0xb) = 0;
    uVar4 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar2 + 3) = uVar4;
    *(undefined4 *)(lVar2 + 7) = uVar4;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630));
}

