
uint getNbits(long *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    uVar6 = uVar1 >> 3;
    bVar2 = *(byte *)(lVar7 + ((ulong)(uVar1 >> 3) & 0x1fff));
    bVar3 = *(byte *)(lVar7 + ((ulong)(uVar6 + 1) & 0x1fff));
    bVar4 = *(byte *)(lVar7 + ((ulong)(uVar6 + 2) & 0x1fff));
    bVar5 = *(byte *)(lVar7 + ((ulong)(uVar6 + 3) & 0x1fff));
                    /* try { // try from 00ec990c to 00fc9913 has its CatchHandler @ 00ec9924 */
                    /* try { // try from 00ec9914 to 00fc995f has its CatchHandler @ 00ec98b0 */
                    /* catch() { ... } // from try @ 00ec990c with catch @ 00ec9924 */
    *(uint *)(param_1 + 1) = uVar1 + param_2;
    return (((uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5) <<
           ((ulong)uVar1 & 7)) >> (ulong)(-param_2 & 0x1f);
  }
  return 0;
}

