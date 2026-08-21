
undefined8 ssl_cert_add1_chain_cert(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int reason;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x148);
                    /* try { // try from 00ac12e8 to 00bc13df has its CatchHandler @ 00ac1044 */
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(param_2 + 0x120);
  }
  lVar4 = *(long *)*puVar1;
  if (lVar4 != 0) {
    reason = ssl_security_cert(param_1,param_2,param_3,0,0);
    if (reason == 1) {
      lVar2 = *(long *)(lVar4 + 0x10);
      if (lVar2 == 0) {
        lVar2 = OPENSSL_sk_new_null();
        *(long *)(lVar4 + 0x10) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = OPENSSL_sk_push(lVar2,param_3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      X509_up_ref(param_3);
      return 1;
    }
    ERR_put_error(0x14,0x15a,reason,"ssl/ssl_cert.c",0x131);
  }
  return 0;
}

