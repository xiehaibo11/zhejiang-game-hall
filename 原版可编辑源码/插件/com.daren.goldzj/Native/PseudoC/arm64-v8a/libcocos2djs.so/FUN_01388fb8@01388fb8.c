
void FUN_01388fb8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long in_x4;
  ulong uVar3;
  long unaff_x26;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(in_x4 + 3);
  uVar3 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar3 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar2 = uVar3 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar2 = FUN_01348560(param_1,0xc);
  }
  *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(undefined8 *)(lVar2 + 3) = uVar4;
  return;
}

