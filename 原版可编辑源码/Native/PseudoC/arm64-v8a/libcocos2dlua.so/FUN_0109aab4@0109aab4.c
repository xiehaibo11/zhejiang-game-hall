
undefined8 FUN_0109aab4(long param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[1] = 0xc;
                    /* try { // try from 0109aac4 to 0119aad3 has its CatchHandler @ 0109aed0 */
                    /* try { // try from 0109aad4 to 0119aae3 has its CatchHandler @ 0109aecc */
  *param_2 = (ulong)*(byte *)(lVar1 + 8) << 0x18 | (ulong)*(byte *)(lVar1 + 9) << 0x10 |
             (ulong)*(byte *)(lVar1 + 10) << 8 | (ulong)*(byte *)(lVar1 + 0xb);
  return 0;
}

