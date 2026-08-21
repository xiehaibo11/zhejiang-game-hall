
void FUN_00c07f1c(long param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x38) <= param_2) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  return;
}

