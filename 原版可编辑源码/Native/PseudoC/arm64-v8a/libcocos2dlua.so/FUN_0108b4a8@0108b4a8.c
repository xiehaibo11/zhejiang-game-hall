
int FUN_0108b4a8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  do {
                    /* try { // try from 0108b4b8 to 0118b4bf has its CatchHandler @ 0108b770 */
    uVar1 = uVar4 + (uVar3 - uVar4 >> 1);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
                    /* try { // try from 0108b4c8 to 0118b4ef has its CatchHandler @ 0108b780 */
    if (uVar2 == param_2) {
      return uVar1 + 1;
    }
    if (uVar2 < param_2) {
      uVar4 = uVar1 + 1;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
  } while (uVar4 < uVar3);
  return 0;
}

