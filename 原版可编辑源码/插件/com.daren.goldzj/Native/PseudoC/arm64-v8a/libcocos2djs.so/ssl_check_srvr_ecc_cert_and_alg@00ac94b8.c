
undefined8 ssl_check_srvr_ecc_cert_and_alg(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x90) + 0x228) + 0x18) >> 3 & 1) == 0) {
    return 1;
  }
                    /* try { // try from 00ac94dc to 00bc94e3 has its CatchHandler @ 00ac955c */
  uVar1 = X509_get_key_usage();
  if ((uVar1 >> 7 & 1) == 0) {
                    /* try { // try from 00ac94e8 to 00bc94ef has its CatchHandler @ 00ac954c */
                    /* try { // try from 00ac94f4 to 00bc94fb has its CatchHandler @ 00ac953c */
    ERR_put_error(0x14,0x117,0x13e,"ssl/ssl_lib.c",0xab6);
                    /* try { // try from 00ac9500 to 00bc9503 has its CatchHandler @ 00ac9528 */
                    /* try { // try from 00ac9504 to 00bc957f has its CatchHandler @ 00ac9440 */
    return 0;
  }
  return 1;
}

