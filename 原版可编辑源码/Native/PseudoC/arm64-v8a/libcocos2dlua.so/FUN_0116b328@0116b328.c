
undefined8 FUN_0116b328(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0xa4);
  fVar1 = *(float *)(param_3 + 0xa0);
  if (*(float *)(param_3 + 0xa0) * param_1 + param_2 * *(float *)(param_3 + 0xa4) <=
      *(float *)(param_3 + 0xa8) * param_1 + param_2 * *(float *)(param_3 + 0xac)) {
    fVar2 = *(float *)(param_3 + 0xac);
    fVar1 = *(float *)(param_3 + 0xa8);
  }
  return CONCAT44(fVar2,fVar1);
}

