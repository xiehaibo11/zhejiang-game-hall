
void FUN_00a72240(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}

