
void * cpArrayNew(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = calloc(1,0x10);
  if (param_1 == 0) {
    param_1 = 4;
  }
  *(int *)((long)pvVar1 + 4) = param_1;
  pvVar2 = calloc((long)param_1,8);
  *(void **)((long)pvVar1 + 8) = pvVar2;
  return pvVar1;
}

