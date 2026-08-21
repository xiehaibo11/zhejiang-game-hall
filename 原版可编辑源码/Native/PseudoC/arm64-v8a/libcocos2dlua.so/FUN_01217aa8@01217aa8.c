
bool FUN_01217aa8(long param_1,long *param_2)

{
  return *param_2 == *(long *)(param_1 + 8) || param_2[1] == *(long *)(param_1 + 8);
}

