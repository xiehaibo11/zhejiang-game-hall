
uint BN_get_flags(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x14) & param_2;
}

