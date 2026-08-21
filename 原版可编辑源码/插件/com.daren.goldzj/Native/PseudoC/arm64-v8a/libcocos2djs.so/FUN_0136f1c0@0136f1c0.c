
long FUN_0136f1c0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x26;
  undefined8 uVar8;
  uint in_stack_00000000;
  
  uVar2 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x173);
  if (((in_stack_00000000 & 1) == 0) && (in_stack_00000000 < 0x7ff8)) {
    lVar5 = (long)((int)in_stack_00000000 >> 1);
    if (lVar5 == 0) {
      uVar6 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar6 + 0x10;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar4 = uVar6 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar4 = FUN_01348560(param_1,0x10);
      }
      *(undefined4 *)(lVar4 + -1) = uVar2;
      *(uint *)(lVar4 + 0xb) = in_stack_00000000;
      lVar7 = *(long *)(unaff_x26 + 0x168);
      *(int *)(lVar4 + 3) = (int)lVar7;
      *(int *)(lVar4 + 7) = (int)lVar7;
      bVar3 = true;
    }
    else {
      uVar6 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar6 + lVar5 * 8 + 0x18;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar4 = uVar6 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar4 = FUN_01348560();
      }
      *(undefined4 *)(lVar4 + -1) = uVar2;
      lVar7 = lVar4 + 0x10;
      *(uint *)(lVar4 + 0xb) = in_stack_00000000;
      *(int *)(lVar4 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar4 + 7) = (int)lVar7;
      *(int *)(lVar4 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
      *(int *)(lVar4 + 0x13) = ((int)in_stack_00000000 >> 1) * 2;
      bVar3 = false;
    }
    if (!bVar3) {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x26 + 0xa8) + 3);
      lVar5 = lVar5 * 8 + 7;
      while (lVar5 != 7) {
        lVar5 = lVar5 + -8;
        *(undefined8 *)(lVar7 + lVar5) = uVar8;
      }
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1b78));
}

