
undefined8 ssl_add_clienthello_renegotiate_ext(long param_1,byte *param_2,int *param_3,int param_4)

{
  byte bVar1;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x90) + 0x380);
    if (param_4 <= (int)(uint)bVar1) {
      ERR_put_error(0x14,0x12a,0x14f,"ssl/t1_reneg.c",0x15);
      return 0;
    }
    *param_2 = bVar1;
                    /* try { // try from 00af0d3c to 00bf0da7 has its CatchHandler @ 00af0e24 */
    memcpy(param_2 + 1,(void *)(*(long *)(param_1 + 0x90) + 0x340),
           (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x380));
  }
  *param_3 = *(byte *)(*(long *)(param_1 + 0x90) + 0x380) + 1;
  return 1;
}

