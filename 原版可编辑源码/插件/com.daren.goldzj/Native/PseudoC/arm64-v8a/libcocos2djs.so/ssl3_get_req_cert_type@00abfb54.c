
ulong ssl3_get_req_cert_type(int *param_1,undefined2 *param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__src;
  uint local_24;
  
  local_24 = 0;
  __src = *(void **)(*(long *)(param_1 + 0x52) + 0x138);
  if (__src == (void *)0x0) {
    ssl_set_sig_mask(&local_24,param_1,0x5000e);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x14);
    if ((*param_1 < 0x301) || ((uVar1 >> 4 & 1) == 0)) {
      uVar2 = 0;
      if ((*param_1 == 0x300) && ((uVar1 >> 1 & 1) != 0)) {
        uVar2 = 2;
        *param_2 = 0x605;
      }
      if ((local_24 & 1) == 0) {
        *(undefined1 *)((long)param_2 + uVar2) = 1;
        uVar2 = (ulong)((uint)uVar2 | 1);
      }
      if ((local_24 >> 1 & 1) == 0) {
        *(undefined1 *)((long)param_2 + (long)(int)uVar2) = 2;
        uVar2 = (ulong)((int)uVar2 + 1);
      }
                    /* catch() { ... } // from try @ 00abfb80 with catch @ 00abfc34 */
      if ((0x300 < *param_1) && ((local_24 >> 3 & 1) == 0)) {
        *(undefined1 *)((long)param_2 + (long)(int)uVar2) = 0x40;
        uVar2 = (ulong)((int)uVar2 + 1);
      }
    }
    else {
      *param_2 = 0xee16;
      *(undefined1 *)(param_2 + 1) = 0xef;
      uVar2 = 3;
    }
  }
  else {
                    /* try { // try from 00abfb80 to 00bbfb83 has its CatchHandler @ 00abfc34 */
                    /* try { // try from 00abfb84 to 00bbfc47 has its CatchHandler @ 00abfb30 */
    memcpy(param_2,__src,*(size_t *)(*(long *)(param_1 + 0x52) + 0x140));
    uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x52) + 0x140);
  }
  return uVar2;
}

