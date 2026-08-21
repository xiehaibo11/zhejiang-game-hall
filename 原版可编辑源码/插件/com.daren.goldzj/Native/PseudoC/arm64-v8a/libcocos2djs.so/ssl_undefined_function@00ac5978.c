
undefined8 ssl_undefined_function(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl/ssl_lib.c",0xbeb);
                    /* try { // try from 00ac59a0 to 00bc5aeb has its CatchHandler @ 00ac59a0
                       catch() { ... } // from try @ 00ac59a0 with catch @ 00ac59a0
                       catch() { ... } // from try @ 00ac5be8 with catch @ 00ac59a0 */
  return 0;
}

