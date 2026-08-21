
ASN1_STRING * FUN_00b7cd00(BIGNUM *param_1,ASN1_STRING *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ASN1_STRING *str;
  int iVar3;
  
  if (param_2 == (ASN1_STRING *)0x0) {
    str = ASN1_STRING_type_new(param_3);
    if (str == (ASN1_STRING *)0x0) {
      iVar2 = 0x3a;
      iVar3 = 0x1e4;
      goto LAB_00b7cdf8;
    }
  }
  else {
    param_2->type = param_3;
    str = param_2;
  }
  iVar2 = BN_is_negative(param_1);
  if ((iVar2 != 0) && (iVar2 = BN_is_zero(param_1), iVar2 == 0)) {
    str->type = str->type | 0x102;
  }
  iVar2 = BN_num_bits(param_1);
  uVar1 = iVar2 + 0xeU;
  if (-1 < (int)(iVar2 + 7U)) {
    uVar1 = iVar2 + 7U;
  }
  iVar3 = (int)uVar1 >> 3;
  if (iVar2 + 0xeU < 0xf) {
    iVar3 = 1;
  }
  iVar2 = ASN1_STRING_set(str,(void *)0x0,iVar3);
  if (iVar2 != 0) {
    iVar2 = BN_is_zero(param_1);
    if (iVar2 != 0) {
      *str->data = '\0';
      str->length = iVar3;
      return str;
    }
    iVar2 = BN_bn2bin(param_1,str->data);
    str->length = iVar2;
    return str;
  }
  iVar2 = 0x41;
  iVar3 = 0x1f1;
LAB_00b7cdf8:
  ERR_put_error(0xd,0xe5,iVar2,"crypto/asn1/a_int.c",iVar3);
  if (str != param_2) {
    ASN1_INTEGER_free(str);
  }
  return (ASN1_STRING *)0x0;
}

