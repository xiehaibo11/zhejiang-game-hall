
undefined8 FUN_00b27d74(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *aobj;
  uchar *puVar3;
  uchar *local_40;
  ASN1_OCTET_STRING local_38;
  
  local_40 = (uchar *)0x0;
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (puVar3 = *(uchar **)(*(long *)(param_2 + 0x20) + 0x20), puVar3 == (uchar *)0x0)) {
    iVar1 = 0x7b;
    iVar2 = 0xab;
  }
  else {
    local_38.flags = 0;
    local_38.length = 0x20;
    local_38.data = puVar3;
    iVar1 = i2d_ASN1_OCTET_STRING(&local_38,&local_40);
    if (iVar1 < 0) {
      iVar1 = 0x41;
      iVar2 = 0xb5;
    }
    else {
      aobj = OBJ_nid2obj(0x40a);
      iVar2 = PKCS8_pkey_set0(param_1,aobj,0,-1,(void *)0x0,local_40,iVar1);
      if (iVar2 != 0) {
        return 1;
      }
      CRYPTO_clear_free(local_40,(long)iVar1,"crypto/ec/ecx_meth.c",0xbb);
      iVar1 = 0x41;
      iVar2 = 0xbc;
    }
  }
  ERR_put_error(0x10,0x10b,iVar1,"crypto/ec/ecx_meth.c",iVar2);
  return 0;
}

