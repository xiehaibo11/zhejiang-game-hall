
BIGNUM * ASN1_INTEGER_to_BN(ASN1_INTEGER *ai,BIGNUM *bn)

{
  BIGNUM *b;
  
                    /* try { // try from 00b8b634 to 00c8b6ff has its CatchHandler @ 00b8b3a8 */
  if ((ai->type & 0xfffffeffU) == 2) {
    b = BN_bin2bn(ai->data,ai->length,bn);
    if (b == (BIGNUM *)0x0) {
                    /* catch() { ... } // from try @ 00b8b61c with catch @ 00b8b6a4 */
      ERR_put_error(0xd,0xe4,0x69,"crypto/asn1/a_int.c",0x20e);
    }
    else if ((ai->type & 0x100) != 0) {
      BN_set_negative(b,1);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00b8b5bc with catch @ 00b8b684 */
                    /* catch() { ... } // from try @ 00b8b558 with catch @ 00b8b688 */
    ERR_put_error(0xd,0xe4,0xe1,"crypto/asn1/a_int.c",0x208);
    b = (BIGNUM *)0x0;
  }
  return b;
}

