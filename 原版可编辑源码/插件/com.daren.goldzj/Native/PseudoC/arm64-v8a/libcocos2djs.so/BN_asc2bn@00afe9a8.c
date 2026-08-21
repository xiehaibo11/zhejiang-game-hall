
int BN_asc2bn(BIGNUM **a,char *str)

{
  char *str_00;
  int iVar1;
  
  str_00 = str + 1;
  if (*str != '-') {
    str_00 = str;
  }
  if ((*str_00 == '0') && ((byte)(str_00[1] | 0x20U) == 0x78)) {
    iVar1 = BN_hex2bn(a,str_00 + 2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = BN_dec2bn(a,str_00);
                    /* try { // try from 00afea04 to 00bfeaa3 has its CatchHandler @ 00afea04
                       catch() { ... } // from try @ 00afea04 with catch @ 00afea04
                       catch() { ... } // from try @ 00afeaac with catch @ 00afea04
                       catch() { ... } // from try @ 00afeaec with catch @ 00afea04 */
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((*str == '-') && ((*a)->top != 0)) {
    (*a)->neg = 1;
  }
  return 1;
}

