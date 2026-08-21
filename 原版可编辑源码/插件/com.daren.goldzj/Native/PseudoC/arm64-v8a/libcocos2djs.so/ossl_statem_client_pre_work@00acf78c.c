
undefined8 ossl_statem_client_pre_work(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 1) {
    uVar2 = tls_finish_handshake(param_1);
    return uVar2;
  }
  if (iVar1 == 0x10) {
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) &&
       (*(int *)(param_1 + 0xb0) != 0)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  else if (((iVar1 == 0xc) &&
           (*(undefined4 *)(param_1 + 0x44) = 0,
           (*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0)) &&
          (iVar1 = ssl3_init_finished_mac(param_1), iVar1 == 0)) {
    ossl_statem_set_error(param_1);
    return 0;
  }
  return 2;
}

