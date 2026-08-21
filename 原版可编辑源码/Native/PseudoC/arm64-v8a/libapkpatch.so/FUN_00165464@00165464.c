
ulong FUN_00165464(long *param_1)

{
  pthread_key_t __key;
  uint uVar1;
  ulong extraout_x0;
  ulong uVar2;
  ulong uVar3;
  
  __key = DAT_0016c524;
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(__key,param_1);
    return (ulong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(void **)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  free(param_1);
  return extraout_x0;
}

