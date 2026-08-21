
long FT_MulFix(long param_1,long param_2)

{
  return param_2 * param_1 + (param_2 * param_1 >> 0x3f) + 0x8000 >> 0x10;
}

