
undefined8
FUN_00b18d5c(EVP_PKEY *param_1,X509_ALGOR *param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  void *__dest;
  uchar *buf;
  int line;
  byte *pbVar2;
  undefined8 uVar3;
  int local_34;
  
  if (param_5 != 2) {
    if ((param_2 != (X509_ALGOR *)0x0) &&
       (X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_34,(void **)0x0,param_2), local_34 != -1)) {
      iVar1 = 0x66;
      line = 0x2f;
      goto LAB_00b18e94;
    }
    if ((param_3 == (undefined8 *)0x0) || (param_4 != 0x20)) {
      iVar1 = 0x66;
      line = 0x35;
      goto LAB_00b18e94;
    }
  }
  __dest = (void *)CRYPTO_zalloc(0x28,"crypto/ec/ecx_meth.c",0x3a);
  if (__dest == (void *)0x0) {
    iVar1 = 0x41;
    line = 0x3c;
LAB_00b18e94:
    ERR_put_error(0x10,0x10a,iVar1,"crypto/ec/ecx_meth.c",line);
    return 0;
  }
  if (param_5 == 0) {
    memcpy(__dest,param_3,(long)param_4);
  }
  else {
    buf = (uchar *)CRYPTO_secure_malloc(0x20,"crypto/ec/ecx_meth.c",0x43);
    *(uchar **)((long)__dest + 0x20) = buf;
    if (buf == (uchar *)0x0) {
      ERR_put_error(0x10,0x10a,0x41,"crypto/ec/ecx_meth.c",0x45);
LAB_00b18f3c:
      CRYPTO_free(__dest);
      return 0;
    }
    if (param_5 == 2) {
      iVar1 = RAND_bytes(buf,0x20);
      pbVar2 = *(byte **)((long)__dest + 0x20);
      if (iVar1 < 1) {
        CRYPTO_secure_free(pbVar2,"crypto/ec/ecx_meth.c",0x4b);
        goto LAB_00b18f3c;
      }
      *pbVar2 = *pbVar2 & 0xf8;
      *(byte *)(*(long *)((long)__dest + 0x20) + 0x1f) =
           *(byte *)(*(long *)((long)__dest + 0x20) + 0x1f) & 0x7f;
      *(byte *)(*(long *)((long)__dest + 0x20) + 0x1f) =
           *(byte *)(*(long *)((long)__dest + 0x20) + 0x1f) | 0x40;
    }
    else {
      uVar3 = param_3[2];
      *(undefined8 *)(buf + 0x18) = param_3[3];
      *(undefined8 *)(buf + 0x10) = uVar3;
      uVar3 = *param_3;
      *(undefined8 *)(buf + 8) = param_3[1];
      *(undefined8 *)buf = uVar3;
    }
    X25519_public_from_private(__dest,*(undefined8 *)((long)__dest + 0x20));
  }
  EVP_PKEY_assign(param_1,0x40a,__dest);
  return 1;
}

