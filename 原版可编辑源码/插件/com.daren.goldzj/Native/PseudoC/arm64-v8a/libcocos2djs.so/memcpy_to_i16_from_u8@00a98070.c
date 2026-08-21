
void memcpy_to_i16_from_u8(long param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(ushort *)(param_1 + param_3 * 2 + -2) =
         (ushort)*(byte *)(param_2 + param_3 + -1) << 8 ^ 0x8000;
  }
  return;
}

