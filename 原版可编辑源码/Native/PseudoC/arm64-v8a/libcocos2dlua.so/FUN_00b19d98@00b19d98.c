
undefined4 FUN_00b19d98(BIO *param_1,EC_KEY *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  point_conversion_form_t pVar4;
  int iVar5;
  EC_GROUP *x;
  EC_POINT *pEVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  void *local_58;
  undefined8 local_48;
  
  local_48 = 0;
  local_58 = (void *)0x0;
  if ((param_2 == (EC_KEY *)0x0) || (x = EC_KEY_get0_group(param_2), x == (EC_GROUP *)0x0)) {
    ERR_put_error(0x10,0xdd,0x43,"crypto/ec/ec_ameth.c",0x158);
    return 0;
  }
  if (param_4 == 2) {
    bVar3 = false;
    lVar11 = 0;
    lVar10 = 0;
LAB_00b19e90:
    iVar5 = BIO_indent(param_1,param_3,0x80);
    if (iVar5 != 0) {
      pcVar1 = "Public-Key";
      if (param_4 != 1) {
        pcVar1 = "ECDSA-Parameters";
      }
      pcVar2 = "Private-Key";
      if (!bVar3) {
        pcVar2 = pcVar1;
      }
      uVar8 = EC_GROUP_order_bits(x);
      iVar5 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar2,uVar8 & 0xffffffff);
      if ((((0 < iVar5) &&
           ((lVar10 == 0 ||
            ((iVar5 = BIO_printf(param_1,"%*spriv:\n",(ulong)param_3,&DAT_013c996e), 0 < iVar5 &&
             (iVar5 = ASN1_buf_print(param_1,local_48,lVar10,param_3 + 4), iVar5 != 0)))))) &&
          ((lVar11 == 0 ||
           ((iVar5 = BIO_printf(param_1,"%*spub:\n",(ulong)param_3,&DAT_013c996e), 0 < iVar5 &&
            (iVar5 = ASN1_buf_print(param_1,local_58,lVar11,param_3 + 4), iVar5 != 0)))))) &&
         (iVar5 = ECPKParameters_print(param_1,x,param_3), iVar5 != 0)) {
        uVar9 = 1;
        goto LAB_00b19fb0;
      }
    }
  }
  else {
    pEVar6 = EC_KEY_get0_public_key(param_2);
    if (pEVar6 == (EC_POINT *)0x0) {
      lVar11 = 0;
LAB_00b19e54:
      if (param_4 == 0) {
        pBVar7 = EC_KEY_get0_private_key(param_2);
        if (pBVar7 == (BIGNUM *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = EC_KEY_priv2buf(param_2,&local_48);
          if (lVar10 == 0) goto LAB_00b19f90;
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
        lVar10 = 0;
      }
      goto LAB_00b19e90;
    }
    pVar4 = EC_KEY_get_conv_form(param_2);
    lVar11 = EC_KEY_key2buf(param_2,pVar4,&local_58,0);
    if (lVar11 != 0) goto LAB_00b19e54;
    lVar10 = 0;
  }
LAB_00b19f90:
  ERR_put_error(0x10,0xdd,0x10,"crypto/ec/ec_ameth.c",0x188);
  uVar9 = 0;
LAB_00b19fb0:
  CRYPTO_clear_free(local_48,lVar10,"crypto/ec/ec_ameth.c",0x189);
  CRYPTO_free(local_58);
  return uVar9;
}

