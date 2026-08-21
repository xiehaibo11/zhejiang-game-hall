
void FUN_00a06b80(void *param_1,size_t param_2,size_t param_3,long param_4)

{
  *(size_t *)(param_4 + 0x110) = *(long *)(param_4 + 0x110) + param_3 * param_2;
  fwrite(param_1,param_2,param_3,*(FILE **)(param_4 + 0xe8));
  return;
}

