
undefined8 ssl_bad_method(void)

{
                    /* try { // try from 00ac9ac0 to 00bc9ac7 has its CatchHandler @ 00ac9b44 */
  ERR_put_error(0x14,0xa0,0x42,"ssl/ssl_lib.c",0xbfd);
  return 0;
}

