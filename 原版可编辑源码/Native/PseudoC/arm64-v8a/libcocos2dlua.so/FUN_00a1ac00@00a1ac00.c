
undefined8 FUN_00a1ac00(void)

{
  ulong in_x9;
  undefined8 in_x10;
  uint in_w11;
  char in_w12;
  char in_w13;
  long unaff_x19;
  
  *(char *)(unaff_x19 + 2) = in_w12 + (char)(uint)((ulong)in_x10 >> 0x25) * -0x7e + -0x7f;
  *(byte *)(unaff_x19 + 1) =
       (char)in_w11 - (char)(uint)((ulong)in_w11 * (in_x9 & 0xffffffff) >> 0x23) * in_w13 | 0x30;
  return 4;
}

