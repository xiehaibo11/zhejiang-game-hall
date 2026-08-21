
undefined8 FUN_00b27ae4(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  int line;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    iVar1 = 0x74;
    line = 0x62;
  }
  else {
    penc = (uchar *)CRYPTO_memdup(*(long *)(param_2 + 0x20),0x20,"crypto/ec/ecx_meth.c",0x66);
    if (penc == (uchar *)0x0) {
      iVar1 = 0x41;
      line = 0x68;
    }
    else {
      aobj = OBJ_nid2obj(0x40a);
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,-1,(void *)0x0,penc,0x20);
      if (iVar1 != 0) {
        return 1;
      }
      CRYPTO_free(penc);
      iVar1 = 0x41;
      line = 0x6f;
    }
  }
  ERR_put_error(0x10,0x10c,iVar1,"crypto/ec/ecx_meth.c",line);
  return 0;
}

