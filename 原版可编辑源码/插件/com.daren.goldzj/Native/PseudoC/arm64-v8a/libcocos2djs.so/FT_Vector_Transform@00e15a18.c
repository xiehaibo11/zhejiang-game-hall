
void FT_Vector_Transform(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar3 = *param_2 * *param_1;
    lVar1 = param_2[2] * *param_1;
    lVar4 = param_2[1] * param_1[1];
    lVar2 = param_2[3] * param_1[1];
    *param_1 = (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) +
               (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10);
    param_1[1] = (lVar2 + (lVar2 >> 0x3f) + 0x8000 >> 0x10) +
                 (lVar1 + (lVar1 >> 0x3f) + 0x8000 >> 0x10);
  }
  return;
}

