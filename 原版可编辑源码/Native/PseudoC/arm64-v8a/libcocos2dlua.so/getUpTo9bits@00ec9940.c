
uint getUpTo9bits(long *param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined1 *)(*param_1 + ((ulong)(uVar1 >> 3) & 0x1fff));
  uVar3 = *(undefined1 *)(*param_1 + ((ulong)((uVar1 >> 3) + 1) & 0x1fff));
                    /* catch() { ... } // from try @ 00ec998c with catch @ 00ec9960 */
  *(uint *)(param_1 + 1) = uVar1 + param_2;
                    /* try { // try from 00ec9984 to 00fc998b has its CatchHandler @ 00ec99d0 */
  return ((uint)CONCAT11(uVar2,uVar3) << ((ulong)uVar1 & 7) & 0xffff) >>
         (ulong)(0x10U - param_2 & 0x1f);
}

