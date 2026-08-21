
void FUN_010ba088(long param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (0 < (long)param_2) {
    uVar2 = param_2 & 0xffffffff;
    if (param_2 <= (param_2 & 0xffffffff)) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
                    /* try { // try from 010ba0a0 to 011ba0e3 has its CatchHandler @ 010ba1bc */
      uVar3 = 0;
      uVar4 = 1;
      do {
        uVar5 = param_3 & 0xffff;
        param_3 = (uVar5 + *(byte *)(param_1 + uVar3)) * 0xce6d + 0x58bf;
        *(byte *)(param_1 + uVar3) = *(byte *)(param_1 + uVar3) ^ (byte)(uVar5 >> 8);
        bVar1 = uVar4 < uVar2;
        uVar3 = uVar4;
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (bVar1);
    }
  }
  return;
}

