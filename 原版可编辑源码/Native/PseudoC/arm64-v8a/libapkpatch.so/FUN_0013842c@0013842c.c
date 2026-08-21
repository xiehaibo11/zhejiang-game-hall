
void FUN_0013842c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_001384ac();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    operator_delete((void *)*puVar2);
  }
  FUN_0013847c(param_1);
  return;
}

