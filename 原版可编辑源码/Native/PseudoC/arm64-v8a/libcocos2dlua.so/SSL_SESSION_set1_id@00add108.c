
undefined8 SSL_SESSION_set1_id(long param_1,void *param_2,uint param_3)

{
                    /* try { // try from 00add114 to 00bdd1a3 has its CatchHandler @ 00add114
                       catch() { ... } // from try @ 00add114 with catch @ 00add114
                       catch() { ... } // from try @ 00add1d4 with catch @ 00add114 */
  if (0x20 < param_3) {
    ERR_put_error(0x14,0x1a7,0x198,"ssl/ssl_sess.c",0x324);
    return 0;
  }
  *(uint *)(param_1 + 0x38) = param_3;
  memcpy((void *)(param_1 + 0x3c),param_2,(ulong)param_3);
  return 1;
}

