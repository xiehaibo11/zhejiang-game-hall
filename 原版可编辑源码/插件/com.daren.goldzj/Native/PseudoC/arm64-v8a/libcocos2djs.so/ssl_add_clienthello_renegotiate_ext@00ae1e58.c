
undefined8 ssl_add_clienthello_renegotiate_ext(long param_1,byte *param_2,int *param_3,int param_4)

{
  byte bVar1;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x90) + 0x380);
                    /* try { // try from 00ae1e78 to 00be1e7f has its CatchHandler @ 00ae1e94 */
    if (param_4 <= (int)(uint)bVar1) {
                    /* try { // try from 00ae1eb4 to 00be1f03 has its CatchHandler @ 00ae1eb4
                       catch() { ... } // from try @ 00ae1eb4 with catch @ 00ae1eb4
                       catch() { ... } // from try @ 00ae1f70 with catch @ 00ae1eb4
                       catch() { ... } // from try @ 00ae1fcc with catch @ 00ae1eb4 */
      ERR_put_error(0x14,0x12a,0x14f,"ssl/t1_reneg.c",0x15);
      return 0;
    }
                    /* try { // try from 00ae1e80 to 00be1eb3 has its CatchHandler @ 00ae1db8 */
    *param_2 = bVar1;
                    /* catch() { ... } // from try @ 00ae1e78 with catch @ 00ae1e94 */
                    /* catch() { ... } // from try @ 00ae1dec with catch @ 00ae1e98 */
    memcpy(param_2 + 1,(void *)(*(long *)(param_1 + 0x90) + 0x340),
           (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x380));
  }
  *param_3 = *(byte *)(*(long *)(param_1 + 0x90) + 0x380) + 1;
  return 1;
}

