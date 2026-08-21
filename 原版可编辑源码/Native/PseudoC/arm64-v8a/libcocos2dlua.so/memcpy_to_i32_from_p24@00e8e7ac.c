
void memcpy_to_i32_from_p24(uint *param_1,byte *param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = (uint)*param_2 << 8 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 0x18;
    param_2 = param_2 + 3;
    param_1 = param_1 + 1;
  }
  return;
}

