
int FUN_010939c8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar1 = uVar3 + uVar2 >> 1;
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
                    /* try { // try from 010939f0 to 011939ff has its CatchHandler @ 01093ca4 */
    if (uVar4 == param_2) {
                    /* try { // try from 01093a14 to 01193a27 has its CatchHandler @ 01093c9c */
      return *(ushort *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10 + 8) + 1;
    }
    if (uVar4 < param_2) {
      uVar3 = uVar1 + 1;
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
  } while (uVar3 < uVar2);
  return 0;
}

