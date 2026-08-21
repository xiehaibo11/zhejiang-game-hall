
undefined8 ssl3_renegotiate_check(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x90) + 0xfc) != 0) {
    iVar1 = RECORD_LAYER_read_pending(param_1 + 0x3a0);
    if (((iVar1 == 0) && (iVar1 = RECORD_LAYER_write_pending(param_1 + 0x3a0), iVar1 == 0)) &&
       (iVar1 = SSL_in_init(param_1), iVar1 == 0)) {
      ossl_statem_set_renegotiate(param_1);
      lVar2 = *(long *)(param_1 + 0x90);
      *(int *)(lVar2 + 0x104) = *(int *)(lVar2 + 0x104) + 1;
      *(undefined4 *)(lVar2 + 0xfc) = 0;
      *(int *)(lVar2 + 0x100) = *(int *)(lVar2 + 0x100) + 1;
      return 1;
    }
  }
  return 0;
}

