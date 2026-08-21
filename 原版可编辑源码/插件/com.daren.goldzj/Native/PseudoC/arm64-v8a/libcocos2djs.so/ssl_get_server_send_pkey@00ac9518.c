
long ssl_get_server_send_pkey(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00ac9500 with catch @ 00ac9528 */
  if ((*(long *)(param_1 + 0x90) != 0) && (*(long *)(*(long *)(param_1 + 0x90) + 0x228) != 0)) {
    lVar3 = *(long *)(param_1 + 0x148);
                    /* catch() { ... } // from try @ 00ac94f4 with catch @ 00ac953c */
    ssl_set_masks(param_1);
                    /* catch() { ... } // from try @ 00ac94e8 with catch @ 00ac954c */
    uVar1 = ssl_cipher_get_cert_index(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228));
    if (uVar1 != 0xffffffff) {
                    /* catch() { ... } // from try @ 00ac94dc with catch @ 00ac955c */
      if (uVar1 != 8) {
        if (uVar1 == 0) {
                    /* catch() { ... } // from try @ 00ac9484 with catch @ 00ac956c */
          uVar1 = (uint)(*(long *)(*(long *)(param_1 + 0x148) + 0x20) == 0);
        }
        else if ((int)uVar1 < 0) {
          return 0;
        }
LAB_00ac95b0:
        return lVar3 + (long)(int)uVar1 * 0x28 + 0x20;
      }
      lVar2 = *(long *)(param_1 + 0x148);
      if (*(long *)(lVar2 + 0x110) != 0) {
        uVar1 = 6;
        goto LAB_00ac95b0;
      }
                    /* try { // try from 00ac9598 to 00bc95c3 has its CatchHandler @ 00ac9598
                       catch() { ... } // from try @ 00ac9598 with catch @ 00ac9598
                       catch() { ... } // from try @ 00ac95d0 with catch @ 00ac9598 */
      if (*(long *)(lVar2 + 0xe8) != 0) {
        uVar1 = 5;
        goto LAB_00ac95b0;
      }
      if (*(long *)(lVar2 + 0xc0) != 0) {
        uVar1 = 4;
        goto LAB_00ac95b0;
      }
    }
                    /* try { // try from 00ac95c4 to 00bc95cf has its CatchHandler @ 00ac95fc */
                    /* try { // try from 00ac95d0 to 00bc960f has its CatchHandler @ 00ac9598 */
    ERR_put_error(0x14,0x142,0x44,"ssl/ssl_lib.c",0xad0);
  }
  return 0;
}

