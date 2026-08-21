
int X509V3_add1_i2d(stack_st_X509_EXTENSION **x,int nid,void *value,int crit,ulong flags)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  X509_EXTENSION *pXVar4;
  stack_st_X509_EXTENSION *psVar5;
  X509_EXTENSION *a;
  long lVar6;
  int reason;
  
  if ((flags & 0xf) == 1) {
    bVar2 = false;
    iVar3 = -1;
LAB_00b718c4:
    pXVar4 = X509V3_EXT_i2d(nid,crit,value);
    if (pXVar4 == (X509_EXTENSION *)0x0) {
      reason = 0x90;
      iVar3 = 0x14f;
LAB_00b719c8:
      ERR_put_error(0x22,0x8c,reason,"crypto/x509v3/v3_lib.c",iVar3);
      return 0;
    }
    psVar5 = *x;
    if (!bVar2) {
      if (psVar5 == (stack_st_X509_EXTENSION *)0x0) {
        psVar5 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null();
        *x = psVar5;
        if (psVar5 == (stack_st_X509_EXTENSION *)0x0) {
          return -1;
        }
      }
      iVar3 = OPENSSL_sk_push(psVar5,pXVar4);
      bVar2 = iVar3 == 0;
      goto LAB_00b71984;
    }
    a = (X509_EXTENSION *)OPENSSL_sk_value(psVar5,iVar3);
    X509_EXTENSION_free(a);
    lVar6 = OPENSSL_sk_set(*x,iVar3,pXVar4);
  }
  else {
    iVar3 = X509v3_get_ext_by_NID(*x,nid,-1);
    uVar1 = (uint)flags & 0xf;
    if (iVar3 < 0) {
      reason = 0x66;
      if ((uVar1 == 3) || (uVar1 == 5)) goto LAB_00b719b0;
      bVar2 = false;
      goto LAB_00b718c4;
    }
    if ((flags & 0xf) == 0) {
      reason = 0x91;
LAB_00b719b0:
      if (((uint)flags >> 4 & 1) != 0) {
        return 0;
      }
      iVar3 = 0x166;
      goto LAB_00b719c8;
    }
    bVar2 = true;
    if (uVar1 == 4) {
      return 1;
    }
    if (uVar1 != 5) goto LAB_00b718c4;
    lVar6 = OPENSSL_sk_delete(*x,iVar3);
  }
  bVar2 = lVar6 == 0;
LAB_00b71984:
  if (bVar2) {
    return -1;
  }
  return 1;
}

