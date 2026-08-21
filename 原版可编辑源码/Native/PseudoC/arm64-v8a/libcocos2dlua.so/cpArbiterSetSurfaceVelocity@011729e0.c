
void cpArbiterSetSurfaceVelocity(float param_1,float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = -1.0;
  if (*(char *)(param_3 + 0x88) == '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_3 + 8) = fVar1 * param_1;
  *(float *)(param_3 + 0xc) = fVar1 * param_2;
  return;
}

