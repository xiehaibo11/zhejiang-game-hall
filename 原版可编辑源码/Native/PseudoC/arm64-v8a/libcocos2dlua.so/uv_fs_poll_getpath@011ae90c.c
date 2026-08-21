
undefined8 uv_fs_poll_getpath(long param_1,void *param_2,size_t *param_3)

{
  char *__s;
  size_t __n;
  
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) == 0) {
    *param_3 = 0;
    return 0xffffffea;
  }
  __s = (char *)(*(long *)(param_1 + 0x60) + 0x318);
  __n = strlen(__s);
  if (__n < *param_3) {
    memcpy(param_2,__s,__n);
    *param_3 = __n;
    *(undefined1 *)((long)param_2 + __n) = 0;
    return 0;
  }
  *param_3 = __n + 1;
  return 0xffffff97;
}

