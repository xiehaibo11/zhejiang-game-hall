
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
    if (iVar1 == 3) {
      b = s->rbio;
      iVar1 = BIO_test_flags(b,1);
      if (iVar1 != 0) {
        return 2;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac9944 with catch @ 00ac99bc
                        */
      iVar1 = BIO_test_flags(b,2);
      if (iVar1 != 0) {
        return 3;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac9980 with catch @ 00ac99c8
                        */
      iVar1 = BIO_test_flags(b,4);
      if (iVar1 != 0) goto LAB_00ac9a1c;
      iVar1 = s->rwstate;
    }
                    /* catch() { ... } // from try @ 00ac9a6c with catch @ 00ac99dc
                       catch() { ... } // from try @ 00ac9b3c with catch @ 00ac99dc */
    if (iVar1 == 2) {
      b = s->wbio;
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
LAB_00ac9a1c:
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
      return *(int *)(&DAT_018a45e8 + (long)(int)(iVar1 - 4U) * 4);
    }
  }
  else {
                    /* try { // try from 00ac9980 to 00bc9983 has its CatchHandler @ 00ac99c8 */
    if ((((byte)s->shutdown >> 1 & 1) != 0) && (*(int *)(*(long *)&s->read_ahead + 0xec) == 0)) {
      return 6;
    }
  }
                    /* try { // try from 00ac9a6c to 00bc9abf has its CatchHandler @ 00ac99dc */
  return 5;
}

