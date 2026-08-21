
void FUN_00a03a38(void *param_1,size_t param_2,size_t param_3,long param_4)

{
  *(size_t *)(param_4 + 0x80) = *(long *)(param_4 + 0x80) + param_3 * param_2;
  fwrite(param_1,param_2,param_3,*(FILE **)(param_4 + 0xd0));
  return;
}

