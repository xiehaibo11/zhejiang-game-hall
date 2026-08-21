
void FT_Glyph_Get_CBox(long param_1,uint param_2,ulong *param_3)

{
  code *pcVar1;
  
  if (param_3 != (ulong *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    if (((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x30), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1,param_3);
      if ((param_2 | 2) == 3) {
        param_3[1] = param_3[1] & 0xffffffffffffffc0;
        *param_3 = *param_3 & 0xffffffffffffffc0;
        param_3[3] = param_3[3] + 0x3f & 0xffffffffffffffc0;
        param_3[2] = param_3[2] + 0x3f & 0xffffffffffffffc0;
      }
      if ((param_2 | 1) == 3) {
        param_3[1] = (long)param_3[1] >> 6;
        *param_3 = (long)*param_3 >> 6;
        param_3[3] = (long)param_3[3] >> 6;
        param_3[2] = (long)param_3[2] >> 6;
      }
    }
  }
  return;
}

