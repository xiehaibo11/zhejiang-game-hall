
void noise_codebook_unquant
               (uint *param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               int *param_6)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_6 * 0x19660d + 0x3c6ef35f;
      *param_6 = iVar1;
      *param_1 = (0x2000 - (iVar1 >> 0x13)) + (iVar1 >> 0x10) & 0xffffc000;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return;
}

