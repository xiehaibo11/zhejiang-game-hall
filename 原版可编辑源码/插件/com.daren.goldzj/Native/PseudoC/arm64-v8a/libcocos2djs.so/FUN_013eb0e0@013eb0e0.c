
long FUN_013eb0e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x26;
  
  uVar4 = *(uint *)(param_1 + 3);
  uVar7 = (ulong)(int)(uVar4 >> 1 & 0x3fffffff);
  if (uVar7 == 0) {
    return param_1;
  }
  if (0x1000000 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
  }
  uVar8 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar7 * 8 + 8;
  uVar3 = uVar8 + uVar1;
  if ((uVar3 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar1 < 0x20000)) {
    lVar5 = uVar8 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar3;
  }
  else {
    lVar5 = FUN_01348500();
  }
  *(int *)(lVar5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
  *(uint *)(lVar5 + 3) = uVar4 & 0x7ffffffe;
  *(uint *)(lVar5 + 3) = uVar4 & 0x7ffffffe | (uint)((uVar4 & 1) == 0);
  for (lVar6 = 0; lVar6 < (long)uVar7; lVar6 = lVar6 + 1) {
    lVar2 = lVar6 * 8 + 7;
    *(undefined8 *)(lVar5 + lVar2) = *(undefined8 *)(param_1 + lVar2);
  }
  return lVar5;
}

