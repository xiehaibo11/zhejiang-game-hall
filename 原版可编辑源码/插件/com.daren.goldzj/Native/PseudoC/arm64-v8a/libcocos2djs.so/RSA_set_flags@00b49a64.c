
void RSA_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | param_2;
  return;
}

