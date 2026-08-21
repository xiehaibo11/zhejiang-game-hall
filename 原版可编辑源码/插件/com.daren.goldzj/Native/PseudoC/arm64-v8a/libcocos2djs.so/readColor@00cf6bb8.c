
/* spine::SkeletonBinary::readColor(spine::SkeletonBinary::DataInput*, spine::Color&) */

void __thiscall
spine::SkeletonBinary::readColor(SkeletonBinary *this,DataInput *param_1,Color *param_2)

{
  byte *pbVar1;
  float fVar2;
  
  pbVar1 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar1 + 1;
  *(float *)(param_2 + 8) = (float)*pbVar1 / 255.0;
  *(byte **)(param_1 + 8) = pbVar1 + 2;
  fVar2 = (float)NEON_ucvtf((uint)pbVar1[1]);
  *(float *)(param_2 + 0xc) = fVar2 / 255.0;
  *(byte **)(param_1 + 8) = pbVar1 + 3;
  fVar2 = (float)NEON_ucvtf((uint)pbVar1[2]);
  *(float *)(param_2 + 0x10) = fVar2 / 255.0;
  *(byte **)(param_1 + 8) = pbVar1 + 4;
  fVar2 = (float)NEON_ucvtf((uint)pbVar1[3]);
  *(float *)(param_2 + 0x14) = fVar2 / 255.0;
  return;
}

