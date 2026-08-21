
int BN_asc2bn(BIGNUM **a,char *str)

{
  char *str_00;
  int iVar1;
  
  str_00 = str + 1;
                    /* catch() { ... } // from try @ 00b0dbe4 with catch @ 00b0de48 */
  if (*str != '-') {
    str_00 = str;
  }
                    /* catch() { ... } // from try @ 00b0dd00 with catch @ 00b0de4c
                       catch() { ... } // from try @ 00b0dd88 with catch @ 00b0de4c */
                    /* catch() { ... } // from try @ 00b0dc5c with catch @ 00b0de50 */
  if ((*str_00 == '0') && ((byte)(str_00[1] | 0x20U) == 0x78)) {
    iVar1 = BN_hex2bn(a,str_00 + 2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = BN_dec2bn(a,str_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((*str == '-') && ((*a)->top != 0)) {
    (*a)->neg = 1;
  }
  return 1;
}

