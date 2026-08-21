
long FUN_0136e340(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x26;
  undefined8 uVar5;
  
  uVar4 = **(ulong **)(unaff_x26 + 0x1428);
  uVar2 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x173);
  uVar1 = uVar4 + 0x38;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar3 = uVar4 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar3 = FUN_01348560(param_1,0x38);
  }
  *(undefined4 *)(lVar3 + -1) = uVar2;
  *(undefined4 *)(lVar3 + 0xb) = 0;
  *(int *)(lVar3 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar3 + 7) = (int)lVar3 + 0x10;
  *(int *)(lVar3 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
  *(undefined4 *)(lVar3 + 0x13) = 8;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x26 + 0xa8) + 3);
  *(undefined8 *)(lVar3 + 0x2f) = uVar5;
  *(undefined8 *)(lVar3 + 0x27) = uVar5;
  *(undefined8 *)(lVar3 + 0x1f) = uVar5;
  *(undefined8 *)(lVar3 + 0x17) = uVar5;
  return lVar3;
}

