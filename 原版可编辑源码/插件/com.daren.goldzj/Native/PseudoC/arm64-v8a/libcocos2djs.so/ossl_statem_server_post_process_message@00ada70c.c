
undefined8 ossl_statem_server_post_process_message(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0x1d) {
    return 2;
  }
  if (iVar1 != 0x1c) {
    if (iVar1 == 0x14) {
      uVar2 = tls_post_process_client_hello();
      return uVar2;
    }
    return 0;
  }
  uVar2 = tls_post_process_client_key_exchange();
  return uVar2;
}

