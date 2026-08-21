
undefined8 ossl_statem_server_post_work(int *param_1)

{
  int iVar1;
  
                    /* try { // try from 00ae5720 to 00be579f has its CatchHandler @ 00ae5694 */
  param_1[0x22] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar1 = statem_flush(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    iVar1 = ssl3_init_finished_mac(param_1);
    if (iVar1 == 0) goto LAB_00ae57f8;
    break;
  case 0x15:
    iVar1 = statem_flush(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    if ((*param_1 == 0x100) || (iVar1 = ssl3_init_finished_mac(param_1), iVar1 != 0)) {
      param_1[0x80] = 1;
      return 2;
    }
LAB_00ae57f8:
    ossl_statem_set_error(param_1);
    return 0;
  case 0x1a:
  case 0x24:
    iVar1 = statem_flush(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    break;
  case 0x23:
                    /* catch() { ... } // from try @ 00ae56f8 with catch @ 00ae5784 */
    iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x22);
    if (iVar1 == 0) goto LAB_00ae57f8;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) {
      dtls1_reset_seq_numbers(param_1,2);
    }
  }
  return 2;
}

