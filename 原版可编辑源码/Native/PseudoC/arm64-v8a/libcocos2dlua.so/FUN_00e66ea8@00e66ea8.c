
void FUN_00e66ea8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x18) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x28));
  }
  operator_delete(param_1);
  return;
}

