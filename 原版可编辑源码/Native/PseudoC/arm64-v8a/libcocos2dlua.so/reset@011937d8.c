
/* dtPathCorridor::reset(unsigned int, float const*) */

void __thiscall dtPathCorridor::reset(dtPathCorridor *this,uint param_1,float *param_2)

{
  *(float *)this = *param_2;
  *(float *)(this + 4) = param_2[1];
  *(float *)(this + 8) = param_2[2];
  *(float *)(this + 0xc) = *param_2;
  *(float *)(this + 0x10) = param_2[1];
  *(float *)(this + 0x14) = param_2[2];
  **(uint **)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x20) = 1;
  return;
}

