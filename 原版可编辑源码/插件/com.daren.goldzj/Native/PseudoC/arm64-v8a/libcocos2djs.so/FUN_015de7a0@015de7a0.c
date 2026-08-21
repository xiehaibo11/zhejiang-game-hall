
void FUN_015de7a0(long *param_1,ulong param_2)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  long *__src;
  size_t __n;
  
  __n = param_1[1] - *param_1;
  uVar2 = (param_1[2] - *param_1 >> 3) * 0x5555555555555556;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  lVar1 = v8::base::bits::RoundUpToPowerOfTwo64(uVar2);
  __dest = malloc(lVar1 * 0x18);
  __src = (long *)*param_1;
  memcpy(__dest,__src,__n);
  if (__src != param_1 + 3) {
    free(__src);
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)((long)__dest + ((long)__n >> 3) * 8);
  param_1[2] = (long)((long)__dest + lVar1 * 0x18);
  return;
}

