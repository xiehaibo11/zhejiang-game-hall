
long FUN_0137aaa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x26;
  long unaff_x27;
  
  uVar6 = **(ulong **)(unaff_x26 + 0x1428);
  lVar1 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                          0x15b);
  lVar7 = (ulong)*(byte *)(lVar1 + 3) * 4;
  uVar2 = uVar6 + lVar7;
  if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar3 = uVar6 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar2;
  }
  else {
    lVar3 = FUN_01348560(param_1,lVar7,lVar1,param_2);
  }
  *(int *)(lVar3 + -1) = (int)lVar1;
  lVar7 = lVar7 + -1;
  uVar4 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar3 + 3) = uVar4;
  *(undefined4 *)(lVar3 + 7) = uVar4;
  if (lVar7 != 0xb) {
    uVar5 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      lVar7 = lVar7 + -4;
      *(int *)(lVar3 + lVar7) = (int)uVar5;
    } while (lVar7 != 0xb);
  }
  *(int *)(lVar3 + 0xb) = (int)param_1;
  *(int *)(lVar3 + 0xf) = (int)param_2;
  return lVar3;
}

