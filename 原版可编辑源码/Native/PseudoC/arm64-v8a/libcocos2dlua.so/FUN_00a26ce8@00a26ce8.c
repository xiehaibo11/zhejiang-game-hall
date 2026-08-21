
void FUN_00a26ce8(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  if (param_2 == 1) {
    bVar2 = 1;
    bVar3 = bVar2;
  }
  else if (param_2 == 2) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x400) + 0x7c);
    if ((uVar1 >> 9 & 1) != 0) {
      return;
    }
                    /* try { // try from 00a26d08 to 00b26d1b has its CatchHandler @ 00a26d78 */
    bVar2 = (byte)(uVar1 >> 9) & 1 ^ 1;
    bVar3 = 1;
  }
  else {
    bVar2 = 0;
    bVar3 = bVar2;
  }
  if (bVar3 != *(byte *)(param_1 + 0x3b9)) {
    *(byte *)(param_1 + 0x3b9) = bVar2;
  }
  return;
}

