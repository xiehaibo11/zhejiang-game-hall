
bool tls_construct_client_certificate(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x90) + 0x238) == 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x148);
  }
  lVar1 = ssl3_output_cert_chain(param_1,uVar2);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x163,0x44,"ssl/statem/statem_clnt.c",0xae2);
    ssl3_send_alert(param_1,2,0x50);
    ossl_statem_set_error(param_1);
  }
  return lVar1 != 0;
}

