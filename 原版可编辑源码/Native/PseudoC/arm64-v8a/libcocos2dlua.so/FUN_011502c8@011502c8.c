
int FUN_011502c8(uint param_1,uint *param_2)

{
  return ((*param_2 ^ param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & param_1);
}

