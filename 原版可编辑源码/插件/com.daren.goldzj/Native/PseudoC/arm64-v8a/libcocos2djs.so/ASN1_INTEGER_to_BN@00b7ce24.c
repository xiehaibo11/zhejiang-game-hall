
BIGNUM * ASN1_INTEGER_to_BN(ASN1_INTEGER *ai,BIGNUM *bn)

{
  BIGNUM *b;
  
  if ((ai->type & 0xfffffeffU) == 2) {
    b = BN_bin2bn(ai->data,ai->length,bn);
    if (b == (BIGNUM *)0x0) {
      ERR_put_error(0xd,0xe4,0x69,"crypto/asn1/a_int.c",0x20e);
    }
    else if ((ai->type & 0x100) != 0) {
      BN_set_negative(b,1);
    }
  }
  else {
    ERR_put_error(0xd,0xe4,0xe1,"crypto/asn1/a_int.c",0x208);
    b = (BIGNUM *)0x0;
  }
  return b;
}

