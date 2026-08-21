
void FUN_00a68734(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_2 + 0x68));
    *(undefined8 *)(param_2 + 0x68) = 0;
    (*(code *)PTR_free_01769a00)(param_2);
    return;
  }
  return;
}

