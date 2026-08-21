
uint RSA_test_flags(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x6c) & param_2;
}

