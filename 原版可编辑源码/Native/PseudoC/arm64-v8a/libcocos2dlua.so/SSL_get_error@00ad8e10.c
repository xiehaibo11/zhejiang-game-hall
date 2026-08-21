
int SSL_get_error(SSL *s,int ret_code)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  BIO *b;
  
  if (0 < ret_code) {
    return 0;
  }
  uVar3 = ERR_peek_error();
  if (uVar3 != 0) {
    if ((uVar3 & 0xff000000) != 0x2000000) {
      return 1;
    }
    return 5;
  }
  if (ret_code < 0) {
    iVar1 = s->rwstate;
                    /* try { // try from 00ad8e78 to 00bd8e7f has its CatchHandler @ 00ad8ed0 */
    if (iVar1 == 3) {
                    /* try { // try from 00ad8e80 to 00bd8f07 has its CatchHandler @ 00ad8de4 */
      b = s->rbio;
      iVar1 = BIO_test_flags(b,1);
      if (iVar1 != 0) {
        return 2;
      }
      iVar1 = BIO_test_flags(b,2);
      if (iVar1 != 0) {
        return 3;
      }
      iVar1 = BIO_test_flags(b,4);
      if (iVar1 != 0) goto LAB_00ad8f04;
      iVar1 = s->rwstate;
    }
    if (iVar1 == 2) {
      b = s->wbio;
                    /* catch() { ... } // from try @ 00ad8e78 with catch @ 00ad8ed0 */
      iVar1 = BIO_test_flags(b,2);
      if (iVar1 != 0) {
        return 3;
      }
      iVar1 = BIO_test_flags(b,1);
      if (iVar1 != 0) {
        return 2;
      }
      iVar1 = BIO_test_flags(b,4);
      if (iVar1 != 0) {
LAB_00ad8f04:
        iVar2 = BIO_get_retry_reason(b);
        iVar1 = 8;
        if (iVar2 != 3) {
          iVar1 = 5;
        }
        if (iVar2 != 2) {
          return iVar1;
        }
        return 7;
      }
      iVar1 = s->rwstate;
    }
    if (iVar1 - 4U < 3) {
      return *(int *)(&DAT_013d2a7c + (long)(int)(iVar1 - 4U) * 4);
    }
  }
  else if ((((byte)s->shutdown >> 1 & 1) != 0) && (*(int *)(*(long *)&s->read_ahead + 0xec) == 0)) {
    return 6;
  }
                    /* try { // try from 00ad8f54 to 00bd8f9b has its CatchHandler @ 00ad8f54
                       catch() { ... } // from try @ 00ad8f54 with catch @ 00ad8f54
                       catch() { ... } // from try @ 00ad8fcc with catch @ 00ad8f54 */
  return 5;
}

