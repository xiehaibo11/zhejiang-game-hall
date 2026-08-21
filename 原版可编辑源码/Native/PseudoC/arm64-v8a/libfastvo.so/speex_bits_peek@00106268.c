
byte speex_bits_peek(long *param_1)

{
  if ((int)param_1[1] <= (int)param_1[2] + *(int *)((long)param_1 + 0xc) * 8) {
    *(undefined4 *)(param_1 + 3) = 1;
    return 0;
  }
  if ((int)param_1[3] != 0) {
    return 0;
  }
  return *(byte *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)) >>
         (ulong)(7U - (int)param_1[2] & 0x1f) & 1;
}

