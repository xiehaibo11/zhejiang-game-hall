
long FUN_01342e8c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long unaff_x26;
  long unaff_x27;
  
  uVar5 = **(ulong **)(unaff_x26 + 0x1438);
  uVar1 = uVar5 + 0x1c;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1440)) {
    uVar5 = uVar5 + 1;
    **(ulong **)(unaff_x26 + 0x1438) = uVar1;
  }
  else {
    uVar5 = FUN_01348620(param_1,0x1c);
  }
  *(int *)(uVar5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xdd0);
  *(undefined4 *)(uVar5 + 3) = 0;
  *(undefined4 *)(uVar5 + 7) = 0;
  *(undefined4 *)(uVar5 + 0xf) = 0;
  *(undefined4 *)(uVar5 + 0x13) = 0;
  *(int *)(uVar5 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x420);
  puVar4 = *(ulong **)(unaff_x26 + 0x1408);
  uVar2 = (uint)*puVar4;
  *(uint *)(uVar5 + 0x17) = uVar2;
  if (((((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar2 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar5,uVar5 + 0x17,0,2);
  }
  *puVar4 = uVar5;
  *(int *)(param_1 + param_3) = (int)uVar5;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar5 & 1) != 0)) &&
     (uVar5 = unaff_x26 + (uVar5 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + param_3,0,2);
  }
  uVar7 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar7 + 0x18;
  uVar6 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           ((long)(int)((int)unaff_x26 + *(int *)(uVar5 + 3) >> 1 & 0x1f) + 0x56) * 4 + 7);
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar3 = uVar7 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar3 = FUN_01348560(uVar5,0x18);
  }
  *(undefined4 *)(lVar3 + -1) = uVar6;
  *(undefined4 *)(lVar3 + 0xb) = 0;
  uVar6 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar3 + 3) = uVar6;
  *(int *)(lVar3 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
  *(int *)(lVar3 + 0x13) = (int)uVar5;
  *(int *)(uVar5 + 0x13) = *(int *)(uVar5 + 0x13) + 1;
  *(undefined4 *)(lVar3 + 7) = uVar6;
  return lVar3;
}

