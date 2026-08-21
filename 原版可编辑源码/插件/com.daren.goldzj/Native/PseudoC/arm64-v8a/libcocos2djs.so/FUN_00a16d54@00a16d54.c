
void FUN_00a16d54(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00a34128(*(long *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    (*(code *)PTR_free_01d1b748)(param_1);
    return;
  }
  return;
}

