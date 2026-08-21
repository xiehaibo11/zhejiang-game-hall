
int dtls1_min_mtu(SSL *param_1)

{
  BIO *bp;
  long lVar1;
  
  bp = SSL_get_wbio(param_1);
                    /* try { // try from 00ae40e8 to 00be40ef has its CatchHandler @ 00ae4174 */
                    /* try { // try from 00ae40f0 to 00be4113 has its CatchHandler @ 00ae404c */
  lVar1 = BIO_ctrl(bp,0x31,0,(void *)0x0);
  return 0x100 - (int)lVar1;
}

