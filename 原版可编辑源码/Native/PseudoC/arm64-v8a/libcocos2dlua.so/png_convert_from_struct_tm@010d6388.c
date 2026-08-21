
void png_convert_from_struct_tm(short *param_1,undefined4 *param_2)

{
  *param_1 = (short)param_2[5] + 0x76c;
  *(char *)(param_1 + 1) = (char)param_2[4] + '\x01';
  *(char *)((long)param_1 + 3) = (char)param_2[3];
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(char *)((long)param_1 + 5) = (char)param_2[1];
  *(char *)(param_1 + 3) = (char)*param_2;
  return;
}

