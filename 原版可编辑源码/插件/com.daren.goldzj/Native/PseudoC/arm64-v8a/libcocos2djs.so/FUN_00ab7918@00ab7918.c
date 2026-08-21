
bool FUN_00ab7918(BIO *param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x30,"ssl/bio_ssl.c",0x37);
  if (lVar1 == 0) {
    ERR_put_error(0x20,0x76,0x41,"ssl/bio_ssl.c",0x3a);
  }
  else {
    BIO_set_init(param_1,0);
    BIO_set_data(param_1,lVar1);
    BIO_clear_flags(param_1,-1);
  }
  return lVar1 != 0;
}

