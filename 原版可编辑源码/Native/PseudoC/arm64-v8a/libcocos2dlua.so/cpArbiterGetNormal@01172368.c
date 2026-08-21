
float cpArbiterGetNormal(long param_1)

{
  float fVar1;
  
  fVar1 = -1.0;
  if (*(char *)(param_1 + 0x88) == '\0') {
    fVar1 = 1.0;
  }
  return fVar1 * *(float *)(param_1 + 0x68);
}

