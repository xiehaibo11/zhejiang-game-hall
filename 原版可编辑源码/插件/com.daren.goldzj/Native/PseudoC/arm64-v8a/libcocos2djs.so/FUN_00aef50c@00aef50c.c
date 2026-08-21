
int FUN_00aef50c(ASN1_VALUE *param_1,uchar **param_2,uint *param_3,uint param_4,uint param_5)

{
  uint aclass;
  uint xclass;
  uint uVar1;
  uint tag;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *ptr;
  uchar *ptr_00;
  uint uVar7;
  undefined8 *puVar8;
  uint xclass_00;
  ASN1_ITEM *it;
  ASN1_VALUE *local_80;
  ASN1_VALUE *local_78;
  uchar *local_70;
  ASN1_VALUE *local_68;
  
  uVar1 = *param_3;
  if ((uVar1 >> 0xc & 1) != 0) {
    local_78 = param_1;
    param_1 = (ASN1_VALUE *)&local_78;
  }
  if ((uVar1 & 0x18) == 0) {
    xclass_00 = param_5 & 0xc0;
    if (param_4 == 0xffffffff) {
      xclass_00 = 0;
    }
LAB_00aef57c:
                    /* try { // try from 00aef584 to 00bef58b has its CatchHandler @ 00af061c */
    aclass = param_5 & 0xffffff3f;
    iVar2 = ((uVar1 & param_5) >> 0xb & 1) + 1;
    if ((uVar1 & 6) == 0) {
      if ((uVar1 >> 4 & 1) == 0) {
        iVar2 = ASN1_item_ex_i2d((ASN1_VALUE **)param_1,param_2,*(ASN1_ITEM **)(param_3 + 8),param_4
                                 ,xclass_00 | aclass);
        return iVar2;
      }
      iVar5 = ASN1_item_ex_i2d((ASN1_VALUE **)param_1,(uchar **)0x0,*(ASN1_ITEM **)(param_3 + 8),-1,
                               aclass);
      if (iVar5 != 0) {
        iVar3 = ASN1_object_size(iVar2,iVar5,param_4);
        if (param_2 == (uchar **)0x0) {
          return iVar3;
        }
        if (iVar3 == -1) {
          return -1;
        }
        ASN1_put_object(param_2,iVar2,iVar5,param_4,xclass_00);
        ASN1_item_ex_i2d((ASN1_VALUE **)param_1,param_2,*(ASN1_ITEM **)(param_3 + 8),-1,aclass);
        if (iVar2 != 2) {
          return iVar3;
        }
LAB_00aef9e8:
        ASN1_put_eoc(param_2);
        return iVar3;
      }
    }
    else {
      param_1 = *(ASN1_VALUE **)param_1;
      if (param_1 != (ASN1_VALUE *)0x0) {
        if ((uVar1 >> 1 & 1) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (uVar1 >> 2 & 1) + 1;
        }
        uVar7 = 0x10;
        if (iVar5 != 0) {
          uVar7 = 0x11;
        }
        xclass = xclass_00;
        tag = param_4;
        if ((uVar1 & 0x10) != 0 || param_4 == 0xffffffff) {
          xclass = 0;
          tag = uVar7;
        }
        iVar3 = OPENSSL_sk_num(param_1);
        iVar6 = 0;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            local_80 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar3);
                    /* try { // try from 00aef640 to 00bef677 has its CatchHandler @ 00af0500 */
            iVar4 = ASN1_item_ex_i2d(&local_80,(uchar **)0x0,*(ASN1_ITEM **)(param_3 + 8),-1,aclass)
            ;
            if (iVar4 == -1) {
              return -1;
            }
            if (0x7fffffff - iVar4 < iVar6) {
              return -1;
            }
            iVar6 = iVar4 + iVar6;
            iVar3 = iVar3 + 1;
            iVar4 = OPENSSL_sk_num(param_1);
          } while (iVar3 < iVar4);
        }
        iVar4 = ASN1_object_size(iVar2,iVar6,tag);
        if (iVar4 != -1) {
          iVar3 = iVar4;
          if ((uVar1 >> 4 & 1) != 0) {
            iVar3 = ASN1_object_size(iVar2,iVar4,param_4);
          }
          if (param_2 == (uchar **)0x0) {
            return iVar3;
          }
          if (iVar3 == -1) {
            return -1;
          }
          if ((uVar1 >> 4 & 1) != 0) {
            ASN1_put_object(param_2,iVar2,iVar4,param_4,xclass_00);
          }
          ASN1_put_object(param_2,iVar2,iVar6,tag,xclass);
          it = *(ASN1_ITEM **)(param_3 + 8);
          local_70 = (uchar *)0x0;
          if ((iVar5 == 0) || (iVar4 = OPENSSL_sk_num(param_1), iVar4 < 2)) {
                    /* try { // try from 00aef714 to 00bef7a3 has its CatchHandler @ 00af061c */
            iVar5 = OPENSSL_sk_num(param_1);
            if (0 < iVar5) {
              iVar5 = 0;
              do {
                local_68 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar5);
                ASN1_item_ex_i2d(&local_68,param_2,it,-1,aclass);
                iVar5 = iVar5 + 1;
                iVar6 = OPENSSL_sk_num(param_1);
              } while (iVar5 < iVar6);
            }
          }
          else {
            iVar4 = OPENSSL_sk_num(param_1);
            ptr = CRYPTO_malloc(iVar4 * 0x18,"crypto/asn1/tasn_enc.c",0x17e);
            if (ptr != (undefined8 *)0x0) {
              ptr_00 = CRYPTO_malloc(iVar6,"crypto/asn1/tasn_enc.c",0x181);
              if (ptr_00 == (uchar *)0x0) {
                CRYPTO_free(ptr);
              }
              else {
                local_70 = ptr_00;
                iVar6 = OPENSSL_sk_num(param_1);
                if (0 < iVar6) {
                  iVar6 = 0;
                  puVar8 = ptr;
                  do {
                    /* try { // try from 00aef874 to 00bef88b has its CatchHandler @ 00af0584 */
                    local_68 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar6);
                    *puVar8 = local_70;
                    iVar4 = ASN1_item_ex_i2d(&local_68,&local_70,it,-1,aclass);
                    *(int *)(puVar8 + 1) = iVar4;
                    iVar6 = iVar6 + 1;
                    puVar8[2] = local_68;
                    iVar4 = OPENSSL_sk_num(param_1);
                    puVar8 = puVar8 + 3;
                  } while (iVar6 < iVar4);
                }
                iVar6 = OPENSSL_sk_num(param_1);
                qsort(ptr,(long)iVar6,0x18,(__compar_fn_t)&LAB_00aefb28);
                local_70 = *param_2;
                iVar6 = OPENSSL_sk_num(param_1);
                    /* try { // try from 00aef8f8 to 00bef8ff has its CatchHandler @ 00af054c */
                if (0 < iVar6) {
                  iVar6 = 0;
                  puVar8 = ptr;
                  do {
                    memcpy(local_70,(void *)*puVar8,(long)*(int *)(puVar8 + 1));
                    iVar6 = iVar6 + 1;
                    local_70 = local_70 + *(int *)(puVar8 + 1);
                    iVar4 = OPENSSL_sk_num(param_1);
                    puVar8 = puVar8 + 3;
                    /* try { // try from 00aef93c to 00befa3b has its CatchHandler @ 00af061c */
                  } while (iVar6 < iVar4);
                }
                *param_2 = local_70;
                if ((iVar5 == 2) && (iVar5 = OPENSSL_sk_num(param_1), 0 < iVar5)) {
                  iVar5 = 0;
                  puVar8 = ptr + 2;
                  do {
                    OPENSSL_sk_set(param_1,iVar5,*puVar8);
                    iVar5 = iVar5 + 1;
                    iVar6 = OPENSSL_sk_num(param_1);
                    puVar8 = puVar8 + 3;
                  } while (iVar5 < iVar6);
                }
                CRYPTO_free(ptr);
                CRYPTO_free(ptr_00);
              }
            }
          }
          if (iVar2 != 2) {
            return iVar3;
          }
          ASN1_put_eoc(param_2);
          if ((uVar1 >> 4 & 1) == 0) {
            return iVar3;
          }
          goto LAB_00aef9e8;
        }
        goto LAB_00aef55c;
      }
    }
    iVar2 = 0;
  }
  else {
    if (param_4 == 0xffffffff) {
      param_4 = param_3[2];
      xclass_00 = uVar1 & 0xc0;
      goto LAB_00aef57c;
    }
LAB_00aef55c:
    iVar2 = -1;
  }
                    /* try { // try from 00aef7f0 to 00bef7fb has its CatchHandler @ 00af0560 */
  return iVar2;
}

