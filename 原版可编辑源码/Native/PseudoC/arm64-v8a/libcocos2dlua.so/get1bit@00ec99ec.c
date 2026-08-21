
uint get1bit(long *param_1)

{
  uint uVar1;
  byte bVar2;
  
                    /* catch() { ... } // from try @ 00ec9a18 with catch @ 00ec99ec */
  uVar1 = *(uint *)(param_1 + 1);
  bVar2 = *(byte *)(*param_1 + ((ulong)(uVar1 >> 3) & 0x1fff));
  *(uint *)(param_1 + 1) = uVar1 + 1;
                    /* try { // try from 00ec9a10 to 00fc9a17 has its CatchHandler @ 00ec9a5c */
  return ((uint)bVar2 << ((ulong)uVar1 & 7)) >> 7 & 1;
}

