
void jpeg_fdct_2x1(int *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  memset(param_1,0,0x100);
                    /* try { // try from 01106218 to 012062bb has its CatchHandler @ 01106218
                       catch() { ... } // from try @ 01106218 with catch @ 01106218
                       catch() { ... } // from try @ 011062dc with catch @ 01106218 */
  uVar2 = (uint)*(byte *)(*param_2 + (ulong)param_3);
  uVar1 = (uint)((byte *)(*param_2 + (ulong)param_3))[1];
  *param_1 = (uVar1 + uVar2) * 0x20 + -0x2000;
  param_1[1] = (uVar2 - uVar1) * 0x20;
  return;
}

