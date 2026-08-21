
ASN1_VALUE * FUN_00b1ac18(long param_1)

{
  long lVar1;
  ASN1_STRING *str;
  BIGNUM *pBVar2;
  ASN1_INTEGER *pAVar3;
  ASN1_VALUE *unaff_x19;
  long unaff_x20;
  EC_GROUP *unaff_x21;
  void *in_stack_00000010;
  
  if (param_1 == 0) {
    ERR_put_error(0x10,0x105,0x71,"crypto/ec/ec_asn1.c",0x1f7);
  }
  else {
    EC_GROUP_get_point_conversion_form(unaff_x21);
    lVar1 = EC_POINT_point2buf();
    if (lVar1 == 0) {
      ERR_put_error(0x10,0x105,0x10,"crypto/ec/ec_asn1.c",0x1ff);
    }
    else {
      str = *(ASN1_STRING **)(unaff_x19 + 0x18);
      if (str == (ASN1_STRING *)0x0) {
        str = ASN1_OCTET_STRING_new();
        *(ASN1_STRING **)(unaff_x19 + 0x18) = str;
        if (str == (ASN1_OCTET_STRING *)0x0) {
          CRYPTO_free(in_stack_00000010);
          ERR_put_error(0x10,0x105,0x41,"crypto/ec/ec_asn1.c",0x204);
          goto joined_r0x00b1adbc;
        }
      }
      ASN1_STRING_set0(str,in_stack_00000010,(int)lVar1);
      pBVar2 = (BIGNUM *)EC_GROUP_get0_order();
      if (pBVar2 == (BIGNUM *)0x0) {
        ERR_put_error(0x10,0x105,0x10,"crypto/ec/ec_asn1.c",0x20c);
      }
      else {
        pAVar3 = BN_to_ASN1_INTEGER(pBVar2,*(ASN1_INTEGER **)(unaff_x19 + 0x20));
        *(ASN1_INTEGER **)(unaff_x19 + 0x20) = pAVar3;
        if (pAVar3 == (ASN1_INTEGER *)0x0) {
          ERR_put_error(0x10,0x105,0xd,"crypto/ec/ec_asn1.c",0x211);
        }
        else {
          pBVar2 = (BIGNUM *)EC_GROUP_get0_cofactor();
          if (pBVar2 == (BIGNUM *)0x0) {
            return unaff_x19;
          }
          pAVar3 = BN_to_ASN1_INTEGER(pBVar2,*(ASN1_INTEGER **)(unaff_x19 + 0x28));
          *(ASN1_INTEGER **)(unaff_x19 + 0x28) = pAVar3;
          if (pAVar3 != (ASN1_INTEGER *)0x0) {
            return unaff_x19;
          }
          ERR_put_error(0x10,0x105,0xd,"crypto/ec/ec_asn1.c",0x21a);
        }
      }
    }
  }
joined_r0x00b1adbc:
  if (unaff_x20 == 0) {
    ASN1_item_free(unaff_x19,(ASN1_ITEM *)ECPARAMETERS_it);
  }
  return (ASN1_VALUE *)0x0;
}

