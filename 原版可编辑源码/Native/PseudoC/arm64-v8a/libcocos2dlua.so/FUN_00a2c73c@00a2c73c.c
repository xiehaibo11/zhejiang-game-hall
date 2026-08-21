
void FUN_00a2c73c(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00a4ab10(*(long *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    (*(code *)PTR_free_01769a00)(param_1);
    return;
  }
  return;
}

