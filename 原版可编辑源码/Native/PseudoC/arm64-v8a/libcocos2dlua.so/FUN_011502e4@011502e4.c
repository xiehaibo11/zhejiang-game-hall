
int FUN_011502e4(undefined8 param_1,uint *param_2)

{
  return ((*param_2 ^ param_2[-1]) >> 1 & 0x7f7f7f7f) + (*param_2 & param_2[-1]);
}

