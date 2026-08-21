
undefined8 ossl_statem_server_pre_work(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    uVar2 = tls_finish_handshake(param_1);
    return uVar2;
  case 0x13:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00ae55e4 with catch @ 00ae565c */
      dtls1_clear_sent_buffer(param_1);
    }
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      return 2;
    }
    dtls1_clear_sent_buffer(param_1);
    goto LAB_00ae56e8;
  case 0x16:
                    /* try { // try from 00ae5694 to 00be56f7 has its CatchHandler @ 00ae5694
                       catch() { ... } // from try @ 00ae5694 with catch @ 00ae5694
                       catch() { ... } // from try @ 00ae5720 with catch @ 00ae5694 */
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      return 2;
    }
    break;
  case 0x23:
    *(undefined8 *)(*(long *)(param_1 + 0x178) + 0xd8) =
         *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x228);
    iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if (iVar1 == 0) {
                    /* try { // try from 00ae56f8 to 00be571f has its CatchHandler @ 00ae5784 */
      ossl_statem_set_error(param_1);
      return 0;
    }
  case 0x21:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
LAB_00ae56e8:
      *(undefined4 *)(param_1 + 0x70) = 0;
      return 2;
    }
  }
  return 2;
}

