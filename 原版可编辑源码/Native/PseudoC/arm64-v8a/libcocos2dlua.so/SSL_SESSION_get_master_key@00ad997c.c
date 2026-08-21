
size_t SSL_SESSION_get_master_key(long param_1,void *param_2,ulong param_3)

{
  size_t __n;
  
  __n = (size_t)*(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < 0) {
                    /* catch() { ... } // from try @ 00ad9924 with catch @ 00ad99b4 */
    __n = 0;
  }
  else if (param_3 != 0) {
    if (param_3 <= __n) {
      __n = param_3;
    }
    memcpy(param_2,(void *)(param_1 + 8),__n);
                    /* catch() { ... } // from try @ 00ad9950 with catch @ 00ad99b0 */
  }
  return __n;
}

