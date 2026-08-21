
long ssl_get_server_send_pkey(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x90) != 0) && (*(long *)(*(long *)(param_1 + 0x90) + 0x228) != 0)) {
    lVar3 = *(long *)(param_1 + 0x148);
    ssl_set_masks(param_1);
    uVar1 = ssl_cipher_get_cert_index(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228));
    if (uVar1 != 0xffffffff) {
      if (uVar1 != 8) {
        if (uVar1 == 0) {
          uVar1 = (uint)(*(long *)(*(long *)(param_1 + 0x148) + 0x20) == 0);
        }
        else {
                    /* try { // try from 00ad8a74 to 00bd8a7b has its CatchHandler @ 00ad8ab0 */
          if ((int)uVar1 < 0) {
            return 0;
          }
        }
LAB_00ad8a98:
        return lVar3 + (long)(int)uVar1 * 0x28 + 0x20;
      }
      lVar2 = *(long *)(param_1 + 0x148);
      if (*(long *)(lVar2 + 0x110) != 0) {
        uVar1 = 6;
        goto LAB_00ad8a98;
      }
                    /* try { // try from 00ad8a7c to 00bd8ae7 has its CatchHandler @ 00ad8910 */
      if (*(long *)(lVar2 + 0xe8) != 0) {
        uVar1 = 5;
        goto LAB_00ad8a98;
      }
      if (*(long *)(lVar2 + 0xc0) != 0) {
        uVar1 = 4;
        goto LAB_00ad8a98;
      }
    }
                    /* catch() { ... } // from try @ 00ad8a74 with catch @ 00ad8ab0 */
    ERR_put_error(0x14,0x142,0x44,"ssl/ssl_lib.c",0xad0);
  }
  return 0;
}

