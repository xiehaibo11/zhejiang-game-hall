
undefined8 ssl_bad_method(void)

{
                    /* try { // try from 00ad8fb8 to 00bd8fcb has its CatchHandler @ 00ad9018 */
  ERR_put_error(0x14,0xa0,0x42,"ssl/ssl_lib.c",0xbfd);
                    /* try { // try from 00ad8fcc to 00bd9037 has its CatchHandler @ 00ad8f54 */
  return 0;
}

