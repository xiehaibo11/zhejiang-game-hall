
void FUN_00a0a474(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}

