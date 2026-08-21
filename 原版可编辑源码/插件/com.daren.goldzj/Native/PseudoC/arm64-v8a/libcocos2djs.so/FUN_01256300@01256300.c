
void FUN_01256300(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

