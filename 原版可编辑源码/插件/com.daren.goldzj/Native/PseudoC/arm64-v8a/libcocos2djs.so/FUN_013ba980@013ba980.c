
long FUN_013ba980(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long unaff_x26;
  long unaff_x27;
  
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
  uVar3 = *(uint *)(lVar2 + 3);
  *(uint *)(param_1 + 0x27) = uVar3;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar3 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + 0x27,0,2);
  }
  uVar6 = **(ulong **)(unaff_x26 + 0x1428);
  lVar2 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0xf);
  uVar1 = uVar6 + 0x14;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar4 = uVar6 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar4 = FUN_01348560(lVar2,0x14,param_3,param_2);
  }
  *(undefined4 *)(lVar4 + -1) =
       *(undefined4 *)
        (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) + 0x15b);
  uVar5 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar4 + 3) = uVar5;
  *(undefined4 *)(lVar4 + 7) = uVar5;
  *(int *)(lVar4 + 0xb) = (int)param_2;
  *(int *)(lVar4 + 0xf) = (int)param_3;
  if ((**(long **)(unaff_x26 + 0x1470) == 0) && (*(int *)(*(long *)(unaff_x26 + 0xf00) + 0xb) != 0))
  {
    FUN_013f95e0(lVar2,lVar4,lVar2);
  }
  else {
    FUN_0139b2c0(lVar2,lVar4,lVar2);
  }
  return lVar2;
}

