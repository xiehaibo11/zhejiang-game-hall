
void memcpy_to_q8_23_from_p24(uint *param_1,long param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    pcVar1 = (char *)(param_2 + 2);
    do {
      param_3 = param_3 + -1;
      *param_1 = (int)*pcVar1 << 0x10 | (uint)(byte)pcVar1[-1] << 8 | (uint)(byte)pcVar1[-2];
      pcVar1 = pcVar1 + 3;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

