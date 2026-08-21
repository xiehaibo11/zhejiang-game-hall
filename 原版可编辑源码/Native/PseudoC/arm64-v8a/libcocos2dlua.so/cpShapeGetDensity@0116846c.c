
float cpShapeGetDensity(long param_1)

{
  return *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0x28);
}

