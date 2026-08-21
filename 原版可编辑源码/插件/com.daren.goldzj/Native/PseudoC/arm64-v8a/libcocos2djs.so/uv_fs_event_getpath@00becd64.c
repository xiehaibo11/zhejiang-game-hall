
undefined8 uv_fs_event_getpath(long param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  undefined8 uVar1;
  char *__s;
  
  if ((*(uint *)(param_1 + 0x58) >> 0xe & 1) == 0) {
    *param_3 = 0;
    uVar1 = 0xffffffea;
  }
  else {
    __s = *(char **)(param_1 + 0x60);
    __n = strlen(__s);
    if (__n < *param_3) {
      memcpy(param_2,__s,__n);
      *param_3 = __n;
      *(undefined1 *)((long)param_2 + __n) = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffff97;
      *param_3 = __n + 1;
    }
  }
  return uVar1;
}

