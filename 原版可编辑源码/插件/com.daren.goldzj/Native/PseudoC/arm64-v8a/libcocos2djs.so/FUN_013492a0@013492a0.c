
ulong FUN_013492a0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_1 & 1) == 0) {
    uVar4 = 0x7a;
  }
  else {
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if (0xa8 < *(ushort *)(lVar2 + 7)) {
      return param_1;
    }
    uVar4 = (ulong)*(byte *)(lVar2 + 4);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
  }
  uVar5 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar5 + 0x10;
  uVar3 = *(undefined4 *)
           (unaff_x26 +
            (ulong)*(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                            uVar4 * 4 + 7) + 0x1b);
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar5 = uVar5 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    uVar5 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(uVar5 - 1) = uVar3;
  uVar3 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(uVar5 + 3) = uVar3;
  *(undefined4 *)(uVar5 + 7) = uVar3;
  *(int *)(uVar5 + 0xb) = (int)param_1;
  return uVar5;
}

