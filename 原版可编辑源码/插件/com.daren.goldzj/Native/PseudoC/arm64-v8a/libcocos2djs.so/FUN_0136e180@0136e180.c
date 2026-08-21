
long FUN_0136e180(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long unaff_x26;
  
  uVar4 = **(ulong **)(unaff_x26 + 0x1428);
  uVar3 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x16b);
  uVar1 = uVar4 + 0x28;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar2 = uVar4 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar2 = FUN_01348560(param_1,0x28);
  }
  *(undefined4 *)(lVar2 + -1) = uVar3;
  *(undefined4 *)(lVar2 + 0xb) = 0;
  *(int *)(lVar2 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar2 + 7) = (int)lVar2 + 0x10;
  *(int *)(lVar2 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(undefined4 *)(lVar2 + 0x13) = 8;
  uVar3 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa8);
  *(undefined4 *)(lVar2 + 0x23) = uVar3;
  *(undefined4 *)(lVar2 + 0x1f) = uVar3;
  *(undefined4 *)(lVar2 + 0x1b) = uVar3;
  *(undefined4 *)(lVar2 + 0x17) = uVar3;
  return lVar2;
}

