
void freeMapInfoList(undefined8 *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = (void *)*param_1;
    free(param_1);
    param_1 = pvVar1;
  }
  return;
}

