
undefined8 ossl_statem_server_post_work(int *param_1)

{
  int iVar1;
  
  param_1[0x22] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar1 = statem_flush(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    iVar1 = ssl3_init_finished_mac(param_1);
    if (iVar1 == 0) goto LAB_00ad6944;
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
LAB_00ad6944:
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
    iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x22);
    if (iVar1 == 0) goto LAB_00ad6944;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) {
      dtls1_reset_seq_numbers(param_1,2);
    }
  }
  return 2;
}

