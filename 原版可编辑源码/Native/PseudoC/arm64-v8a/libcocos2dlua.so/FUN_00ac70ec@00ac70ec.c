
bool FUN_00ac70ec(BIO *param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x30,"ssl/bio_ssl.c",0x37);
  if (lVar1 == 0) {
                    /* try { // try from 00ac714c to 00bc715f has its CatchHandler @ 00ac71e4 */
    ERR_put_error(0x20,0x76,0x41,"ssl/bio_ssl.c",0x3a);
  }
  else {
                    /* try { // try from 00ac7118 to 00bc714b has its CatchHandler @ 00ac7218 */
    BIO_set_init(param_1,0);
    BIO_set_data(param_1,lVar1);
    BIO_clear_flags(param_1,-1);
  }
                    /* try { // try from 00ac7164 to 00bc7197 has its CatchHandler @ 00ac71e8 */
  return lVar1 != 0;
}

