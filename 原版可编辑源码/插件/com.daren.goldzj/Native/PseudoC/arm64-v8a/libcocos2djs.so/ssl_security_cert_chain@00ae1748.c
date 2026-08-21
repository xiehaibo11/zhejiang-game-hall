
undefined8
ssl_security_cert_chain(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = OPENSSL_sk_value(param_2,0);
  }
  uVar4 = (uint)bVar1;
  uVar3 = ssl_security_cert(param_1,0,param_3,param_4,1);
  if ((int)uVar3 == 1) {
    iVar2 = OPENSSL_sk_num(param_2);
    if ((int)uVar4 < iVar2) {
      do {
        uVar3 = OPENSSL_sk_value(param_2,uVar4);
        uVar3 = ssl_security_cert(param_1,0,uVar3,param_4,0);
        if ((int)uVar3 != 1) {
          return uVar3;
        }
        uVar4 = uVar4 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while ((int)uVar4 < iVar2);
    }
    uVar3 = 1;
  }
  return uVar3;
}

