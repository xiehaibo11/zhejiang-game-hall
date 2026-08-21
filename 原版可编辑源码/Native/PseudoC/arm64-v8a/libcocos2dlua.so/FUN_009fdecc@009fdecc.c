
void FUN_009fdecc(ulong *param_1,void *param_2,long param_3,ulong *param_4)

{
  void *__dest;
  ulong uVar1;
  size_t __n;
  
  *param_4 = *param_1;
  uVar1 = *param_1;
  if (param_1[1] <= uVar1) {
    FUN_009f9d60(param_1,1);
    uVar1 = *param_1;
  }
  __n = param_3 - (long)param_2;
  *param_1 = uVar1 + 1;
  *(undefined1 *)(param_1[2] + uVar1) = 0x2e;
  __dest = (void *)FUN_009f9d60(param_1,__n);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_2,__n);
    *param_1 = *param_1 + __n;
  }
  return;
}

