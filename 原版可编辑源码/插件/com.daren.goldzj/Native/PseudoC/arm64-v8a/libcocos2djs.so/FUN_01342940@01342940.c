
long FUN_01342940(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x26;
  long unaff_x27;
  
  if (*(int *)(param_2 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x210)) {
    *(int *)(param_2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x220);
  }
  else if (*(int *)(param_2 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x220)) {
    *(int *)(param_2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1f8);
  }
  uVar7 = **(ulong **)(unaff_x26 + 0x1428);
  lVar1 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                          (((ulong)(*(uint *)(param_1 + 0x1b) >> 0xf) & 0x1f) + 0xa9) * 4 + 7);
  lVar5 = (ulong)*(byte *)(lVar1 + 3) * 4;
  uVar2 = uVar7 + lVar5;
  if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar3 = uVar7 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar2;
  }
  else {
    lVar3 = FUN_01348560(param_1,lVar5,lVar1,lVar5,param_2);
  }
  *(int *)(lVar3 + -1) = (int)lVar1;
  lVar5 = lVar5 + -1;
  if (lVar5 != 0x1b) {
    uVar6 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      lVar5 = lVar5 + -4;
      *(int *)(lVar3 + lVar5) = (int)uVar6;
    } while (lVar5 != 0x1b);
  }
  uVar4 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar3 + 3) = uVar4;
  *(undefined4 *)(lVar3 + 7) = uVar4;
  if (*(char *)(lVar1 + 9) < '\0') {
    *(int *)(lVar3 + 0x1b) = (int)*(undefined8 *)(unaff_x26 + 0xa8);
  }
  *(int *)(lVar3 + 0x13) = (int)param_2;
  *(int *)(lVar3 + 0xb) = (int)param_1;
  *(int *)(lVar3 + 0xf) = (int)unaff_x27;
  *(int *)(lVar3 + 0x17) = (int)*(undefined8 *)(unaff_x26 + 0x5c68);
  return lVar3;
}

