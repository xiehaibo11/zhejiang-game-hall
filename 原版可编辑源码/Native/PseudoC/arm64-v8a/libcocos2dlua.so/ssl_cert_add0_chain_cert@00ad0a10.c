
bool ssl_cert_add0_chain_cert(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x148);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(param_2 + 0x120);
  }
  lVar4 = *(long *)*puVar1;
  if (lVar4 != 0) {
    iVar2 = ssl_security_cert(param_1,param_2,param_3,0,0);
    if (iVar2 == 1) {
      lVar3 = *(long *)(lVar4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(long *)(lVar4 + 0x10) = lVar3;
        if (lVar3 == 0) {
          return false;
        }
      }
      iVar2 = OPENSSL_sk_push(lVar3,param_3);
      return iVar2 != 0;
    }
    ERR_put_error(0x14,0x15a,iVar2,"ssl/ssl_cert.c",0x131);
  }
  return false;
}

