
int X509_signature_print(BIO *bp,X509_ALGOR *alg,ASN1_STRING *sig)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  EVP_PKEY_ASN1_METHOD *pEVar5;
  uchar *puVar6;
  long lVar7;
  int iStack_68;
  int local_64;
  
  iVar3 = BIO_puts(bp,"    Signature Algorithm: ");
  if ((0 < iVar3) && (iVar3 = i2a_ASN1_OBJECT(bp,alg->algorithm), 0 < iVar3)) {
    iVar3 = OBJ_obj2nid(alg->algorithm);
    if ((iVar3 != 0) &&
       (((iVar3 = OBJ_find_sigid_algs(iVar3,&iStack_68,&local_64), iVar3 != 0 &&
         (pEVar5 = EVP_PKEY_asn1_find((ENGINE **)0x0,local_64),
         pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0)) && (*(code **)(pEVar5 + 0xa0) != (code *)0x0)))) {
      iVar3 = (**(code **)(pEVar5 + 0xa0))(bp,alg,sig,9,0);
      return iVar3;
    }
    if (sig == (ASN1_STRING *)0x0) {
      iVar3 = BIO_puts(bp,"\n");
      return (uint)(0 < iVar3);
    }
    iVar3 = sig->length;
    puVar6 = sig->data;
    lVar7 = 0;
    do {
      if (iVar3 <= lVar7) {
        iVar3 = BIO_write(bp,&DAT_013c61e6,1);
        return (uint)(iVar3 == 1);
      }
      if ((int)lVar7 % 0x12 == 0) {
        iVar4 = BIO_write(bp,&DAT_013c61e6,1);
        if (iVar4 < 1) {
          return 0;
        }
        iVar4 = BIO_indent(bp,9,9);
        if (iVar4 < 1) {
          return 0;
        }
      }
      pbVar1 = puVar6 + lVar7;
      puVar2 = &DAT_013c996e;
      if (iVar3 + -1 != (int)lVar7) {
        puVar2 = &DAT_012f06b7;
      }
      lVar7 = lVar7 + 1;
      iVar4 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,puVar2);
    } while (0 < iVar4);
  }
  return 0;
}

