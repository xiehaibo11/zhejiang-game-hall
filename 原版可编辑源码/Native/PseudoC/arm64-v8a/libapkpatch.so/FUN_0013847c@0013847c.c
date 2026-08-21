
void FUN_0013847c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2] - param_1[1];
  if (lVar1 != 0) {
    param_1[2] = param_1[2] + (lVar1 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

