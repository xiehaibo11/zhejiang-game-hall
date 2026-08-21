
void jpeg_fdct_1x1(int *param_1,long *param_2,uint param_3)

{
  memset(param_1,0,0x100);
  *param_1 = (uint)*(byte *)(*param_2 + (ulong)param_3) * 0x40 + -0x2000;
  return;
}

