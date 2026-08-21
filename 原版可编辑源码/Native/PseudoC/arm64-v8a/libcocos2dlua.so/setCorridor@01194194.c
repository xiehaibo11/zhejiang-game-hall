
/* dtPathCorridor::setCorridor(float const*, unsigned int const*, int) */

void __thiscall
dtPathCorridor::setCorridor(dtPathCorridor *this,float *param_1,uint *param_2,int param_3)

{
  *(float *)(this + 0xc) = *param_1;
  *(float *)(this + 0x10) = param_1[1];
  *(float *)(this + 0x14) = param_1[2];
  memcpy(*(void **)(this + 0x18),param_2,
         -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2);
  *(int *)(this + 0x20) = param_3;
  return;
}

