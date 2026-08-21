
void bw_lpc(uint param_1,short *param_2,undefined2 *param_3,uint param_4)

{
  short sVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    sVar1 = (short)param_1;
    uVar2 = (ulong)param_4;
    do {
      uVar2 = uVar2 - 1;
      *param_3 = (short)((int)*param_2 * (int)(short)param_1 + 0x4000U >> 0xf);
      param_1 = (int)(short)param_1 * (int)sVar1 + 0x4000U >> 0xf;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}

