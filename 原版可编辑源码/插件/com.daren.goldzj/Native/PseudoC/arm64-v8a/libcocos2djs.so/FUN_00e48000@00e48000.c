
int FUN_00e48000(void *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  void *__dest;
  ulong __n;
  int local_24;
  
  local_24 = 0;
  iVar1 = 0;
  if (param_3[0xe] == 0) {
    __dest = (void *)FUN_00e1388c(*param_3,(int)(param_2 - (long)param_1) + 1,&local_24);
    param_3[0xe] = __dest;
    iVar1 = local_24;
    if (local_24 == 0) {
      __n = param_2 - (long)param_1 & 0xffffffff;
      memcpy(__dest,param_1,__n);
      *(undefined1 *)(param_3[0xe] + __n) = 0;
      return local_24;
    }
  }
  return iVar1;
}

