
stack_st_CONF_VALUE *
FUN_00b70de0(X509V3_EXT_METHOD *param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  void *pvVar8;
  long lVar9;
  char acStack_b0 [80];
  
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 < 1) {
    if (param_3 == (stack_st_CONF_VALUE *)0x0) {
LAB_00b70f18:
      param_3 = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
    }
  }
  else {
    iVar2 = 0;
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar2);
      param_3 = i2v_GENERAL_NAME(param_1,(GENERAL_NAME *)puVar4[1],param_3);
      if (param_3 == (stack_st_CONF_VALUE *)0x0) goto LAB_00b70f18;
      lVar5 = OPENSSL_sk_value(param_3,iVar2);
      i2t_ASN1_OBJECT(acStack_b0,0x50,(ASN1_OBJECT *)*puVar4);
      sVar6 = strlen(acStack_b0);
      sVar7 = strlen(*(char **)(lVar5 + 8));
      lVar1 = ((ulong)(uint)((int)sVar7 + (int)sVar6) << 0x20) + 0x500000000;
      lVar9 = lVar1 >> 0x20;
      pvVar8 = CRYPTO_malloc((int)((ulong)lVar1 >> 0x20),"crypto/x509v3/v3_info.c",0x4e);
      if (pvVar8 == (void *)0x0) {
        ERR_put_error(0x22,0x8a,0x41,"crypto/x509v3/v3_info.c",0x51);
        return (stack_st_CONF_VALUE *)0x0;
      }
      OPENSSL_strlcpy(pvVar8,acStack_b0,lVar9);
      OPENSSL_strlcat(pvVar8,&DAT_019afdd6,lVar9);
      OPENSSL_strlcat(pvVar8,*(undefined8 *)(lVar5 + 8),lVar9);
      CRYPTO_free(*(void **)(lVar5 + 8));
      *(void **)(lVar5 + 8) = pvVar8;
      iVar2 = iVar2 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar2 < iVar3);
  }
  return param_3;
}

