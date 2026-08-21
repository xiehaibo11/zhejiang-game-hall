
void FUN_010b911c(long *param_1)

{
  ft_mem_free(*(undefined8 *)(*param_1 + 0xb8),param_1[4]);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

