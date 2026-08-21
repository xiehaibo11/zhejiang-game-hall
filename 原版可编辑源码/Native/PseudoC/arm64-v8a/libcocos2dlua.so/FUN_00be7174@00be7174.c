
long FUN_00be7174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  char *s;
  ASN1_OBJECT *pAVar5;
  
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x67,0x41,"crypto/x509v3/v3_extku.c",0x50);
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar1);
        s = (char *)puVar4[2];
        if (s == (char *)0x0) {
          s = (char *)puVar4[1];
        }
        pAVar5 = OBJ_txt2obj(s,0);
        if (pAVar5 == (ASN1_OBJECT *)0x0) {
          OPENSSL_sk_pop_free(lVar3,ASN1_OBJECT_free);
          ERR_put_error(0x22,0x67,0x6e,"crypto/x509v3/v3_extku.c",0x5d);
          ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          return 0;
        }
        OPENSSL_sk_push(lVar3,pAVar5);
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

