
void jcopy_block_row(void *param_1,void *param_2,ulong param_3)

{
  memcpy(param_2,param_1,(param_3 & 0xffffffff) << 7);
  return;
}

