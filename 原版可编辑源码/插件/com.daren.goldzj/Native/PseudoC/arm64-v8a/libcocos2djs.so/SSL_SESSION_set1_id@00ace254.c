
undefined8 SSL_SESSION_set1_id(long param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
                    /* try { // try from 00ace264 to 00bce42b has its CatchHandler @ 00ace264
                       catch(type#1 @ 00000000) { ... } // from try @ 00ace264 with catch @ 00ace264
                       catch(type#1 @ 00000000) { ... } // from try @ 00ace464 with catch @ 00ace264
                       catch(type#1 @ 00000000) { ... } // from try @ 00ace4d0 with catch @ 00ace264
                        */
    ERR_put_error(0x14,0x1a7,0x198,"ssl/ssl_sess.c",0x324);
    return 0;
  }
  *(uint *)(param_1 + 0x38) = param_3;
  memcpy((void *)(param_1 + 0x3c),param_2,(ulong)param_3);
  return 1;
}

