
void memcpy_to_float_from_u8(float *param_1,byte *param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = (float)(int)(*param_2 - 0x80) * 0.0078125;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

