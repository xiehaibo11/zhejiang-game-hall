
void FUN_010ae768(uint *param_1,ushort param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = param_1[1];
                    /* try { // try from 010ae774 to 011ae7a3 has its CatchHandler @ 010ae7cc */
                    /* try { // try from 010ae7a4 to 011ae88f has its CatchHandler @ 010ae6f8 */
  if (((((long)(param_4 - param_3) < (long)(int)uVar3) &&
       (uVar4 = (param_3 + (int)uVar3) - 1U & (long)(int)-uVar3,
       uVar4 == ((long)(int)-uVar3 & param_4))) &&
      (uVar4 = (long)uVar4 >> ((ulong)*param_1 & 0x3f), -1 < (long)uVar4)) &&
     (uVar4 < param_1[0x2c])) {
    uVar3 = param_1[0x2e];
                    /* catch() { ... } // from try @ 010ae774 with catch @ 010ae7cc */
    pbVar1 = (byte *)((*(long *)(param_1 + 0x16) + (long)((int)((uint)param_2 << 0x10) >> 0x13)) -
                     uVar4 * (long)(int)uVar3);
    pbVar2 = pbVar1 + uVar3 * (param_1[0x2c] - 1);
    if ((int)uVar3 < 1) {
      pbVar2 = pbVar1;
    }
    *pbVar2 = (byte)(0x80 >> (ulong)((int)(short)param_2 & 7)) | *pbVar2;
  }
  return;
}

