
ulong FUN_00b3cf14(X509 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char *name;
  EVP_MD *md;
  X509_NAME *data;
  undefined8 *puVar3;
  ulong uVar4;
  uchar auStack_70 [64];
  
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar1);
        uVar4 = FUN_00b3cf14(param_1,*puVar3,0);
        if ((int)uVar4 < 1) {
          return uVar4;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
    }
    return 1;
  }
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  name = OBJ_nid2sn(iVar1);
  md = EVP_get_digestbyname(name);
  if (md == (EVP_MD *)0x0) {
    ERR_put_error(0x27,0x6d,0x77,"crypto/ocsp/ocsp_vfy.c",0x115);
  }
  else {
    iVar1 = EVP_MD_size(md);
    if (-1 < iVar1) {
      if ((*(int *)(param_2 + 2) == iVar1) && (*(int *)(param_2 + 5) == iVar1)) {
        data = X509_get_subject_name(param_1);
        iVar2 = X509_NAME_digest(data,md,auStack_70,(uint *)0x0);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        iVar2 = memcmp(auStack_70,(void *)param_2[3],(long)iVar1);
        if (iVar2 == 0) {
          X509_pubkey_digest(param_1,md,auStack_70,(uint *)0x0);
          iVar1 = memcmp(auStack_70,(void *)param_2[6],(long)iVar1);
          return (ulong)(iVar1 == 0);
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

