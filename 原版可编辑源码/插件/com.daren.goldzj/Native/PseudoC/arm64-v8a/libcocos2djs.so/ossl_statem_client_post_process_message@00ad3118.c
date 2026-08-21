
undefined8 ossl_statem_client_post_process_message(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5c) == 7) {
    uVar1 = tls_prepare_client_certificate();
    return uVar1;
  }
  return 0;
}

