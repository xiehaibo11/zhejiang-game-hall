
void FUN_0090b07c(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    operator_delete((void *)param_2[5]);
  }
  pvVar1 = (void *)*param_2;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = (void *)param_2[1];
  if ((void *)param_2[1] != pvVar1) {
    do {
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
      pvVar3 = (void *)((long)pvVar2 + -0x40);
      if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x30));
      }
      pvVar2 = pvVar3;
    } while (pvVar1 != pvVar3);
    pvVar3 = (void *)*param_2;
  }
  param_2[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}

