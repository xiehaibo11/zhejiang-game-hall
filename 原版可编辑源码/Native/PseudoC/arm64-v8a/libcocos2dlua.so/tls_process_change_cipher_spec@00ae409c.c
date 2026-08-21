
undefined8 tls_process_change_cipher_spec(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) {
    if (lVar3 != 0) {
      iVar1 = 0x99;
LAB_00ae4118:
      ERR_put_error(0x14,0x16b,0x67,"ssl/statem/statem_lib.c",iVar1);
      uVar2 = 0x2f;
      goto LAB_00ae4120;
    }
  }
  else if (((lVar3 != 2) && (*param_1 == 0x100)) || ((lVar3 != 0 && (*param_1 != 0x100)))) {
    iVar1 = 0x92;
    goto LAB_00ae4118;
  }
  if (*(long *)(*(long *)(param_1 + 0x24) + 0x228) == 0) {
    ERR_put_error(0x14,0x16b,0x85,"ssl/statem/statem_lib.c",0xa1);
    uVar2 = 10;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x24) + 0xe8) = 1;
    iVar1 = ssl3_do_change_cipher_spec(param_1);
    if (iVar1 != 0) {
      if (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0) &&
         (dtls1_reset_seq_numbers(param_1,1), *param_1 == 0x100)) {
        *(short *)(*(long *)(param_1 + 0x26) + 0x10c) =
             *(short *)(*(long *)(param_1 + 0x26) + 0x10c) + 1;
      }
      return 3;
    }
    ERR_put_error(0x14,0x16b,0x44,"ssl/statem/statem_lib.c",0xa8);
    uVar2 = 0x50;
  }
LAB_00ae4120:
  ssl3_send_alert(param_1,2,uVar2);
  ossl_statem_set_error(param_1);
  return 0;
}

