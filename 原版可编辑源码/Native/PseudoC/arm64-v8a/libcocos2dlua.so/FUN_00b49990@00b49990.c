
bool FUN_00b49990(stack_st_X509_EXTENSION **param_1,void *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int local_48 [2];
  uchar *local_40;
  uchar *local_28;
  
  iVar2 = 0x10;
  if (0 < param_3) {
    iVar2 = param_3;
  }
  local_48[0] = ASN1_object_size(0,iVar2,4);
  if (local_48[0] < 0) {
    return false;
  }
  local_40 = CRYPTO_malloc(local_48[0],"crypto/ocsp/ocsp_ext.c",0x106);
  if (local_40 == (uchar *)0x0) {
LAB_00b49a5c:
    bVar1 = false;
  }
  else {
    local_28 = local_40;
    ASN1_put_object(&local_28,0,iVar2,4,0);
    if (param_2 == (void *)0x0) {
      iVar2 = RAND_bytes(local_28,iVar2);
      if (iVar2 < 1) goto LAB_00b49a5c;
    }
    else {
      memcpy(local_28,param_2,(long)iVar2);
    }
    iVar2 = X509V3_add1_i2d(param_1,0x16e,local_48,0,2);
    bVar1 = iVar2 != 0;
  }
  CRYPTO_free(local_40);
  return bVar1;
}

