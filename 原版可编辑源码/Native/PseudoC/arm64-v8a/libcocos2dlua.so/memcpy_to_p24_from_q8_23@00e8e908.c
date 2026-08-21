
void memcpy_to_p24_from_q8_23(undefined1 *param_1,int *param_2,long param_3)

{
  int iVar1;
  
  while (param_3 != 0) {
    iVar1 = *param_2;
    param_3 = param_3 + -1;
    if (0x7ffffe < iVar1) {
      iVar1 = 0x7fffff;
    }
    if (iVar1 < -0x7fffff) {
      iVar1 = -0x800000;
    }
    *param_1 = (char)iVar1;
    param_1[1] = (char)((uint)iVar1 >> 8);
    param_1[2] = (char)((uint)iVar1 >> 0x10);
    param_1 = param_1 + 3;
    param_2 = param_2 + 1;
  }
  return;
}

