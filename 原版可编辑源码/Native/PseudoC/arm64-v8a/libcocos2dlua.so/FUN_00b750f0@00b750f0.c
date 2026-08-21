
ulong FUN_00b750f0(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  int param_5,int param_6,char param_7,ASN1_TLC *param_8)

{
  ASN1_VALUE *pAVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *ptr;
  uchar *__src;
  ASN1_VALUE *local_58;
  ASN1_VALUE *local_50;
  uchar *local_48;
  
  __src = (uchar *)*param_2;
  if (0xfffff < param_3) {
    param_3 = 0x100000;
  }
  local_58 = (ASN1_VALUE *)0x0;
  local_50 = (ASN1_VALUE *)0x0;
  local_48 = __src;
  uVar2 = ASN1_item_ex_d2i(&local_50,&local_48,param_3,(ASN1_ITEM *)&DAT_016c10c8,param_5,param_6,
                           param_7,param_8);
  uVar8 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    ptr = (undefined8 *)*param_1;
    if (ptr != (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)ptr[2]);
      OPENSSL_sk_pop_free(*ptr,X509_NAME_ENTRY_free);
      CRYPTO_free((void *)ptr[3]);
      CRYPTO_free(ptr);
      *param_1 = 0;
    }
    iVar3 = FUN_00b74fc0(&local_58,0);
    pAVar1 = local_58;
    if ((iVar3 != 0) &&
       (iVar3 = BUF_MEM_grow(*(BUF_MEM **)(local_58 + 0x10),(long)local_48 - (long)__src),
       iVar3 != 0)) {
      memcpy(*(void **)(*(long *)(pAVar1 + 0x10) + 8),__src,(long)local_48 - (long)__src);
      iVar3 = OPENSSL_sk_num(local_50);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar6 = OPENSSL_sk_value(local_50,iVar3);
          iVar4 = OPENSSL_sk_num();
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              lVar7 = OPENSSL_sk_value(uVar6,iVar4);
              *(int *)(lVar7 + 0x10) = iVar3;
              iVar5 = OPENSSL_sk_push(*(undefined8 *)pAVar1,lVar7);
              if (iVar5 == 0) goto LAB_00b7528c;
              iVar4 = iVar4 + 1;
              iVar5 = OPENSSL_sk_num(uVar6);
            } while (iVar4 < iVar5);
          }
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(local_50);
        } while (iVar3 < iVar4);
      }
      OPENSSL_sk_pop_free(local_50,&LAB_00b754f4);
      local_50 = (ASN1_VALUE *)0x0;
      uVar8 = FUN_00b754f8(pAVar1);
                    /* try { // try from 00b75274 to 00c7528f has its CatchHandler @ 00b752a0 */
      if ((int)uVar8 != 0) {
        *(undefined4 *)(pAVar1 + 8) = 0;
        *param_1 = pAVar1;
        *param_2 = local_48;
        return uVar8;
      }
    }
LAB_00b7528c:
    pAVar1 = local_58;
    if (local_50 != (ASN1_VALUE *)0x0) {
      OPENSSL_sk_zero(*(undefined8 *)local_58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b75274 with catch @ 00b752a0
                        */
      OPENSSL_sk_pop_free(local_50,&LAB_00b758b8);
    }
    ASN1_item_free(pAVar1,(ASN1_ITEM *)X509_NAME_it);
    ERR_put_error(0xd,0x9e,0x3a,"crypto/x509/x_name.c",0xd2);
    uVar8 = 0;
  }
  return uVar8;
}

