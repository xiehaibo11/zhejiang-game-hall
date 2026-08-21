
int FUN_0108d6c8(void *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  void *__dest;
  size_t __n;
  int local_24;
  
  local_24 = 0;
                    /* try { // try from 0108d6e8 to 0118d7f7 has its CatchHandler @ 0108d5d8 */
  iVar1 = 0;
  if (param_3[0xe] == 0) {
    __n = param_2 - (long)param_1;
                    /* catch() { ... } // from try @ 0108d660 with catch @ 0108d700 */
    __dest = (void *)ft_mem_alloc(*param_3,__n + 1,&local_24);
    param_3[0xe] = __dest;
                    /* catch() { ... } // from try @ 0108d670 with catch @ 0108d70c */
    iVar1 = local_24;
    if (local_24 == 0) {
      memcpy(__dest,param_1,__n);
      *(undefined1 *)(param_3[0xe] + __n) = 0;
      iVar1 = local_24;
    }
  }
  return iVar1;
}

