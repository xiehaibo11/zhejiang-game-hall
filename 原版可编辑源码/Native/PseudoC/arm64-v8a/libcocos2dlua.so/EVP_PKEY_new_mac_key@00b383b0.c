
EVP_PKEY * EVP_PKEY_new_mac_key(int type,ENGINE *e,uchar *key,int keylen)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  int reason;
  int line;
  long lVar2;
  
  ctx = EVP_PKEY_CTX_new_id(type,e);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    return (EVP_PKEY *)0x0;
  }
  lVar2 = *(long *)ctx;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x38) == 0)) {
    iVar1 = 0x93;
    reason = 0x96;
    line = 0x49;
    goto LAB_00b38490;
  }
  *(undefined4 *)(ctx + 0x20) = 4;
  if ((*(code **)(lVar2 + 0x30) != (code *)0x0) &&
     (iVar1 = (**(code **)(lVar2 + 0x30))(ctx), iVar1 < 1)) {
    pkey = (EVP_PKEY *)0x0;
    *(undefined4 *)(ctx + 0x20) = 0;
    goto LAB_00b38498;
  }
  iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,4,6,keylen,key);
  if (0 < iVar1) {
    if ((*(long *)ctx == 0) || (*(long *)(*(long *)ctx + 0x38) == 0)) {
      iVar1 = 0x92;
      reason = 0x96;
      line = 0x5b;
    }
    else {
      if (*(int *)(ctx + 0x20) == 4) {
        pkey = EVP_PKEY_new();
        if ((pkey == (EVP_PKEY *)0x0) ||
           (iVar1 = (**(code **)(*(long *)ctx + 0x38))(ctx,pkey), 0 < iVar1)) goto LAB_00b38498;
        EVP_PKEY_free(pkey);
        goto LAB_00b38494;
      }
      iVar1 = 0x92;
      reason = 0x97;
      line = 0x5f;
    }
LAB_00b38490:
    ERR_put_error(6,iVar1,reason,"crypto/evp/pmeth_gn.c",line);
  }
LAB_00b38494:
  pkey = (EVP_PKEY *)0x0;
LAB_00b38498:
  EVP_PKEY_CTX_free(ctx);
  return pkey;
}

