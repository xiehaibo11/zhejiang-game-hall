
int FUN_00df3e04(uint param_1,long param_2)

{
  return ((*(uint *)(param_2 + -4) ^ param_1) >> 1 & 0x7f7f7f7f) +
         (*(uint *)(param_2 + -4) & param_1);
}

