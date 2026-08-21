
/* WARNING: Removing unreachable block (ram,0x013d25b8) */

undefined8 FUN_013d2504(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x26;
  long unaff_x27;
  
  uVar3 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar3 + 0x10;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar3 = uVar3 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    uVar3 = FUN_01348560(param_1,0x10);
  }
  *(int *)(uVar3 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(undefined4 *)(uVar3 + 3) = 4;
  lVar2 = 0xf;
  uVar4 = *(undefined8 *)(unaff_x26 + 0xa8);
  do {
    lVar2 = lVar2 + -4;
    *(int *)(uVar3 + lVar2) = (int)uVar4;
  } while (lVar2 != 7);
  uVar1 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  *(int *)(uVar1 + 0x33) = (int)uVar3;
  if (((((uint)*(undefined8 *)((uVar1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar3 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (uVar3 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
      != 0)) {
    FUN_0133eb00(uVar1,uVar1 + 0x33,0,2);
  }
  return *(undefined8 *)(unaff_x26 + 0xa0);
}

