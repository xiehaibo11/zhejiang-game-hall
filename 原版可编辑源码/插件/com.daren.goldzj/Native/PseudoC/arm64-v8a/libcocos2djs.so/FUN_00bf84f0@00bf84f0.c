
void FUN_00bf84f0(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    uv__free(param_1[1]);
    uv__free(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}

