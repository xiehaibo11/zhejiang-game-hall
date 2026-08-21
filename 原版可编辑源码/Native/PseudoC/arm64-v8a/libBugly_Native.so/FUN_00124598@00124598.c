
ulong FUN_00124598(long *param_1)

{
  uint uVar1;
  ulong extraout_x0;
  long lVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00176ed8,param_1);
    return (ulong)uVar1;
  }
  lVar3 = param_1[1];
  for (lVar2 = 0; lVar2 != lVar3; lVar2 = lVar2 + 1) {
    if (param_1[lVar2 + 2] != 0) {
      free(*(void **)(param_1[lVar2 + 2] + -8));
    }
  }
  free(param_1);
  return extraout_x0;
}

