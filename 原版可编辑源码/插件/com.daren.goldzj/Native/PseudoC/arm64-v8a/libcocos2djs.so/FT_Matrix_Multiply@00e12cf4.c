
void FT_Matrix_Multiply(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar6 = *param_2 * *param_1;
    lVar8 = param_2[2] * param_1[1];
    lVar5 = param_1[2] * *param_2;
    lVar7 = param_1[3] * param_2[2];
    lVar1 = param_2[1] * *param_1;
    lVar4 = param_1[2] * param_2[1];
    lVar2 = param_2[3] * param_1[1];
    lVar3 = param_1[3] * param_2[3];
    param_2[1] = (lVar2 + (lVar2 >> 0x3f) + 0x8000 >> 0x10) +
                 (lVar1 + (lVar1 >> 0x3f) + 0x8000 >> 0x10);
    *param_2 = (lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10) +
               (lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10);
    param_2[3] = (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) +
                 (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10);
    param_2[2] = (lVar7 + (lVar7 >> 0x3f) + 0x8000 >> 0x10) +
                 (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10);
  }
  return;
}

