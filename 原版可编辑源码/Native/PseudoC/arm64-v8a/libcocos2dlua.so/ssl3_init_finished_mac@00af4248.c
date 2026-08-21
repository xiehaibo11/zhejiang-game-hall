
bool ssl3_init_finished_mac(long param_1)

{
  BIO_METHOD *type;
  BIO *bp;
  long lVar1;
  
  type = BIO_s_mem();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0x14,0x18d,0x41,"ssl/s3_enc.c",0x151);
  }
  else {
    BIO_free(*(BIO **)(*(long *)(param_1 + 0x90) + 0xd8));
    lVar1 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(lVar1 + 0xd8) = 0;
    EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0xe0));
    lVar1 = *(long *)(param_1 + 0x90);
    *(BIO **)(lVar1 + 0xd8) = bp;
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    BIO_ctrl(bp,9,1,(void *)0x0);
  }
  return bp != (BIO *)0x0;
}

