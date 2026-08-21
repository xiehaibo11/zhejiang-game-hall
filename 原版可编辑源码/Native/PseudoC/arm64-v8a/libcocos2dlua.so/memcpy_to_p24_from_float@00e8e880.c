
void memcpy_to_p24_from_float(undefined1 *param_1,float *param_2,long param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  if (param_3 != 0) {
    do {
      fVar3 = *param_2;
      param_3 = param_3 + -1;
      if (fVar3 <= -1.0) {
        iVar2 = -0x800000;
      }
      else if (0.9999999 <= fVar3) {
        iVar2 = 0x7fffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar3 * 8388608.0 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar2 = (int)(fVar1 + fVar3 * 8388608.0);
      }
      *param_1 = (char)iVar2;
      param_1[1] = (char)((uint)iVar2 >> 8);
      param_1[2] = (char)((uint)iVar2 >> 0x10);
      param_1 = param_1 + 3;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

