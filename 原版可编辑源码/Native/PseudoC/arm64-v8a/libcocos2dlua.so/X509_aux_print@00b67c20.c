
undefined8 X509_aux_print(BIO *param_1,X509 *param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ASN1_OBJECT *pAVar6;
  uchar *puVar7;
  ulong uVar8;
  char acStack_a0 [80];
  int local_44;
  
  uVar8 = (ulong)param_3;
  iVar2 = X509_trusted(param_2);
  if (iVar2 != 0) {
    lVar4 = X509_get0_trust_objects(param_2);
    lVar5 = X509_get0_reject_objects(param_2);
    if (lVar4 == 0) {
      BIO_printf(param_1,"%*sNo Trusted Uses.\n",uVar8,&DAT_013c996e);
    }
    else {
      BIO_printf(param_1,"%*sTrusted Uses:\n%*s",uVar8,&DAT_013c996e,(ulong)(param_3 + 2),
                 &DAT_013c996e);
      iVar2 = OPENSSL_sk_num(lVar4);
      if (0 < iVar2) {
        pAVar6 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar4,0);
        OBJ_obj2txt(acStack_a0,0x50,pAVar6,0);
        BIO_puts(param_1,acStack_a0);
        iVar2 = OPENSSL_sk_num(lVar4);
        if (1 < iVar2) {
          iVar2 = 1;
          do {
            BIO_puts(param_1,", ");
            pAVar6 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar4,iVar2);
            OBJ_obj2txt(acStack_a0,0x50,pAVar6,0);
            BIO_puts(param_1,acStack_a0);
            iVar2 = iVar2 + 1;
            iVar3 = OPENSSL_sk_num(lVar4);
          } while (iVar2 < iVar3);
        }
      }
      BIO_puts(param_1,"\n");
    }
    if (lVar5 == 0) {
      BIO_printf(param_1,"%*sNo Rejected Uses.\n",uVar8,&DAT_013c996e);
    }
    else {
      BIO_printf(param_1,"%*sRejected Uses:\n%*s",uVar8,&DAT_013c996e,(ulong)(param_3 + 2),
                 &DAT_013c996e);
      iVar2 = OPENSSL_sk_num(lVar5);
      if (0 < iVar2) {
        pAVar6 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar5,0);
        OBJ_obj2txt(acStack_a0,0x50,pAVar6,0);
        BIO_puts(param_1,acStack_a0);
        iVar2 = OPENSSL_sk_num(lVar5);
        if (1 < iVar2) {
          iVar2 = 1;
          do {
            BIO_puts(param_1,", ");
            pAVar6 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar5,iVar2);
            OBJ_obj2txt(acStack_a0,0x50,pAVar6,0);
            BIO_puts(param_1,acStack_a0);
            iVar2 = iVar2 + 1;
            iVar3 = OPENSSL_sk_num(lVar5);
          } while (iVar2 < iVar3);
        }
      }
      BIO_puts(param_1,"\n");
    }
    puVar7 = X509_alias_get0(param_2,(int *)0x0);
    if (puVar7 != (uchar *)0x0) {
      BIO_printf(param_1,"%*sAlias: %s\n",uVar8,&DAT_013c996e,puVar7);
    }
    puVar7 = X509_keyid_get0(param_2,&local_44);
    if (puVar7 != (uchar *)0x0) {
      BIO_printf(param_1,"%*sKey Id: ",uVar8,&DAT_013c996e);
      if (0 < local_44) {
        lVar4 = 0;
        do {
          puVar1 = &DAT_012f06b7;
          if (lVar4 == 0) {
            puVar1 = &DAT_013c996e;
          }
          BIO_printf(param_1,"%s%02X",puVar1,(ulong)puVar7[lVar4]);
          lVar4 = lVar4 + 1;
        } while (lVar4 < local_44);
      }
      BIO_write(param_1,&DAT_013c61e6,1);
    }
    return 1;
  }
  return 1;
}

