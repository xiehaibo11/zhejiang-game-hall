
void memcpy_to_i16_from_u8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    do {
      lVar1 = param_3 + -1;
      *(ushort *)(param_1 + -2 + param_3 * 2) =
           (ushort)*(byte *)(param_2 + -1 + param_3) << 8 ^ 0x8000;
      param_3 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}

