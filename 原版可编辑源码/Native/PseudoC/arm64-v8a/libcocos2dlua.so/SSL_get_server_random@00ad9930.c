
size_t SSL_get_server_random(long param_1,void *param_2,size_t param_3)

{
  if (param_3 == 0) {
    param_3 = 0x20;
  }
  else {
    if (0x1f < param_3) {
      param_3 = 0x20;
    }
                    /* try { // try from 00ad9950 to 00bd9963 has its CatchHandler @ 00ad99b0 */
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x90) + 0x90),param_3);
                    /* try { // try from 00ad9964 to 00bd99cf has its CatchHandler @ 00ad98dc */
  }
  return param_3;
}

