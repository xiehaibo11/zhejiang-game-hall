
ulong FUN_00b75300(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ASN1_VALUE *pAVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uchar *local_58;
  ASN1_VALUE *local_48;
  
  param_1 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 1) == 0) {
LAB_00b75448:
    uVar8 = *(ulong *)param_1[2];
    if (param_2 != (long *)0x0) {
      memcpy((void *)*param_2,(void *)((ulong *)param_1[2])[1],(long)(int)uVar8);
      *param_2 = *param_2 + (long)(int)uVar8;
    }
  }
  else {
    pAVar5 = (ASN1_VALUE *)OPENSSL_sk_new_null();
    local_48 = pAVar5;
    if (pAVar5 != (ASN1_VALUE *)0x0) {
      iVar1 = OPENSSL_sk_num(*param_1);
      if (0 < iVar1) {
        iVar1 = 0;
        lVar9 = 0;
        iVar2 = -1;
        do {
          lVar6 = OPENSSL_sk_value(*param_1,iVar1);
          if (*(int *)(lVar6 + 0x10) != iVar2) {
                    /* try { // try from 00b75374 to 00c7538f has its CatchHandler @ 00b753a8 */
            lVar9 = OPENSSL_sk_new_null();
            if ((lVar9 == 0) || (iVar2 = OPENSSL_sk_push(pAVar5,lVar9), iVar2 == 0))
            goto LAB_00b7547c;
            iVar2 = *(int *)(lVar6 + 0x10);
          }
          iVar3 = OPENSSL_sk_push(lVar9,lVar6);
          if (iVar3 == 0) goto LAB_00b7547c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b75374 with catch @ 00b753a8
                        */
          iVar1 = iVar1 + 1;
          iVar3 = OPENSSL_sk_num(*param_1);
        } while (iVar1 < iVar3);
      }
      uVar4 = ASN1_item_ex_i2d(&local_48,(uchar **)0x0,(ASN1_ITEM *)&DAT_016c10c8,-1,-1);
      uVar8 = (ulong)uVar4;
      iVar1 = BUF_MEM_grow((BUF_MEM *)param_1[2],(long)(int)uVar4);
      pAVar5 = local_48;
      if (iVar1 != 0) {
        local_58 = *(uchar **)(param_1[2] + 8);
        ASN1_item_ex_i2d(&local_48,&local_58,(ASN1_ITEM *)&DAT_016c10c8,-1,-1);
        OPENSSL_sk_pop_free(local_48,&LAB_00b758d0);
        *(undefined4 *)(param_1 + 1) = 0;
        if ((int)uVar4 < 0) goto LAB_00b754ac;
        uVar7 = FUN_00b754f8(param_1);
        uVar8 = uVar7 & 0xffffffff;
        if ((int)uVar7 < 0) goto LAB_00b754ac;
        goto LAB_00b75448;
      }
    }
LAB_00b7547c:
    OPENSSL_sk_pop_free(pAVar5,&LAB_00b758d0);
    ERR_put_error(0xd,0xcb,0x41,"crypto/x509/x_name.c",0x120);
    uVar8 = 0xffffffff;
  }
LAB_00b754ac:
  return uVar8 & 0xffffffff;
}

