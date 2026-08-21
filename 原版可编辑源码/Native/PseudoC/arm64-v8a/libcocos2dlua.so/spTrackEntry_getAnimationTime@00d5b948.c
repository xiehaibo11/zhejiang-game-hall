
float spTrackEntry_getAnimationTime(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    fVar2 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x34);
    if (*(float *)(param_1 + 0x38) <= fVar2) {
      fVar2 = *(float *)(param_1 + 0x38);
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x34);
    fVar1 = *(float *)(param_1 + 0x38) - fVar2;
    if (fVar1 != 0.0) {
      fVar1 = fmodf(*(float *)(param_1 + 0x48),fVar1);
      fVar2 = fVar2 + fVar1;
    }
  }
  return fVar2;
}

