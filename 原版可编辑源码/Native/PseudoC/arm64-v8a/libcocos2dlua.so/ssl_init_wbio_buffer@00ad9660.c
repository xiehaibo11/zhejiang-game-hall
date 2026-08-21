
undefined8 ssl_init_wbio_buffer(long param_1)

{
  BIO_METHOD *type;
  BIO *pBVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    type = BIO_f_buffer();
    pBVar1 = BIO_new(type);
                    /* try { // try from 00ad9688 to 00bd9697 has its CatchHandler @ 00ad9708 */
                    /* try { // try from 00ad9698 to 00bd9787 has its CatchHandler @ 00ad95c4 */
    if ((pBVar1 == (BIO *)0x0) || (lVar2 = BIO_int_ctrl(pBVar1,0x75,1,0), lVar2 == 0)) {
      BIO_free(pBVar1);
      ERR_put_error(0x14,0xb8,7,"ssl/ssl_lib.c",0xcef);
      return 0;
    }
    *(BIO **)(param_1 + 0x20) = pBVar1;
    pBVar1 = BIO_push(pBVar1,*(BIO **)(param_1 + 0x18));
    *(BIO **)(param_1 + 0x18) = pBVar1;
  }
  return 1;
}

