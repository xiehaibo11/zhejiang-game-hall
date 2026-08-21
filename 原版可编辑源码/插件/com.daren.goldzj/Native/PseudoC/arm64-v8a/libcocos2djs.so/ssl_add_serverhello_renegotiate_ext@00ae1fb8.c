
undefined8
ssl_add_serverhello_renegotiate_ext(long param_1,undefined1 *param_2,int *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00ae1fc4 to 00be1fcb has its CatchHandler @ 00ae1fcc */
                    /* catch() { ... } // from try @ 00ae1f68 with catch @ 00ae1fcc
                       catch() { ... } // from try @ 00ae1fc4 with catch @ 00ae1fcc
                       try { // try from 00ae1fcc to 00be2007 has its CatchHandler @ 00ae1eb4 */
  if (param_2 != (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 00ae1f04 with catch @ 00ae1fe4 */
    iVar1 = (uint)*(byte *)(*(long *)(param_1 + 0x90) + 0x3c1) +
            (uint)*(byte *)(*(long *)(param_1 + 0x90) + 0x380);
    if (param_4 <= iVar1) {
      ERR_put_error(0x14,299,0x14f,"ssl/t1_reneg.c",0x54);
      return 0;
    }
    *param_2 = (char)iVar1;
    memcpy(param_2 + 1,(void *)(*(long *)(param_1 + 0x90) + 0x340),
           (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x380));
    lVar2 = *(long *)(param_1 + 0x90);
    memcpy(param_2 + 1 + *(byte *)(lVar2 + 0x380),(void *)(lVar2 + 0x381),
           (ulong)*(byte *)(lVar2 + 0x3c1));
  }
  *param_3 = (uint)*(byte *)(*(long *)(param_1 + 0x90) + 0x380) +
             (uint)*(byte *)(*(long *)(param_1 + 0x90) + 0x3c1) + 1;
  return 1;
}

