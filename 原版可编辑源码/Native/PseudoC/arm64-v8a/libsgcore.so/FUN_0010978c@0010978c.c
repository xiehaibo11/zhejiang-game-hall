
uint FUN_0010978c(uint param_1,byte *param_2,int param_3)

{
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = *(uint *)(&DAT_0010fc18 + (ulong)(param_1 & 0xff ^ (uint)*param_2) * 4) ^ param_1 >> 8
    ;
    param_2 = param_2 + 1;
  }
  return ~param_1;
}

