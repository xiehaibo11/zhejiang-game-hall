
long FUN_0136ea40(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x26;
  uint in_stack_00000000;
  
  uVar2 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x163);
  if (((in_stack_00000000 & 1) == 0) && (in_stack_00000000 < 0xfff0)) {
    lVar6 = (long)((int)in_stack_00000000 >> 1);
    if (lVar6 == 0) {
      uVar7 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar7 + 0x10;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar4 = uVar7 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar4 = FUN_01348560(param_1,0x10);
      }
      *(undefined4 *)(lVar4 + -1) = uVar2;
      *(uint *)(lVar4 + 0xb) = in_stack_00000000;
      lVar8 = *(long *)(unaff_x26 + 0x168);
      *(int *)(lVar4 + 3) = (int)lVar8;
      *(int *)(lVar4 + 7) = (int)lVar8;
      bVar3 = true;
    }
    else {
      uVar7 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar7 + lVar6 * 4 + 0x18;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar4 = uVar7 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        lVar4 = FUN_01348560();
      }
      *(undefined4 *)(lVar4 + -1) = uVar2;
      lVar8 = lVar4 + 0x10;
      *(uint *)(lVar4 + 0xb) = in_stack_00000000;
      *(int *)(lVar4 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar4 + 7) = (int)lVar8;
      *(int *)(lVar4 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(lVar4 + 0x13) = ((int)in_stack_00000000 >> 1) * 2;
      bVar3 = false;
    }
    if ((!bVar3) && (lVar6 = lVar6 * 4 + 7, lVar6 != 7)) {
      uVar5 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar6 = lVar6 + -4;
        *(int *)(lVar8 + lVar6) = (int)uVar5;
      } while (lVar6 != 7);
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1b78));
}

