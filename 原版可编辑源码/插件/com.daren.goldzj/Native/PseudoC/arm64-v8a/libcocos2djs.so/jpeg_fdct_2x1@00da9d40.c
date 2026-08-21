
void jpeg_fdct_2x1(int *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  memset(param_1,0,0x100);
  uVar2 = (uint)*(byte *)(*param_2 + (ulong)param_3);
  uVar1 = (uint)((byte *)(*param_2 + (ulong)param_3))[1];
  *param_1 = (uVar1 + uVar2) * 0x20 + -0x2000;
  param_1[1] = (uVar2 - uVar1) * 0x20;
  return;
}

