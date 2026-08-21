
undefined8 ossl_statem_client_process_message(long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong __n;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 2:
    uVar4 = param_2[1];
    if (1 < uVar4) {
      lVar3 = *param_2;
      *param_2 = lVar3 + 2;
      param_2[1] = uVar4 - 2;
      if (uVar4 - 2 != 0) {
        bVar1 = *(byte *)(lVar3 + 2);
        __n = (ulong)bVar1;
        if (__n <= uVar4 - 3) {
          *param_2 = lVar3 + 3 + __n;
          param_2[1] = (uVar4 - 3) - __n;
          memcpy(*(void **)(param_1 + 0x98),(void *)(lVar3 + 3),__n);
          *(uint *)(*(long *)(param_1 + 0x98) + 0x100) = (uint)bVar1;
          return 1;
        }
      }
    }
    ERR_put_error(0x14,0x182,0x9f,"ssl/statem/statem_clnt.c",0x373);
    ssl3_send_alert(param_1,2,0x32);
    ossl_statem_set_error(param_1);
    break;
  case 3:
    uVar2 = tls_process_server_hello(param_1);
    return uVar2;
  case 4:
    uVar2 = tls_process_server_certificate(param_1);
    return uVar2;
  case 5:
    uVar2 = tls_process_cert_status(param_1);
    return uVar2;
  case 6:
    uVar2 = tls_process_key_exchange(param_1);
    return uVar2;
  case 7:
    uVar2 = tls_process_certificate_request(param_1);
    return uVar2;
  case 8:
    uVar2 = tls_process_server_done(param_1);
    return uVar2;
  case 9:
    uVar2 = tls_process_new_session_ticket(param_1);
    return uVar2;
  case 10:
    uVar2 = tls_process_change_cipher_spec(param_1);
    return uVar2;
  case 0xb:
    uVar2 = tls_process_finished(param_1);
    return uVar2;
  }
  return 0;
}

