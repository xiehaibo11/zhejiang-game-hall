
void DH_clear_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & (param_2 ^ 0xffffffff);
  return;
}

