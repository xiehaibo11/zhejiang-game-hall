
/* spine::RegionAttachment::setUVs(float, float, float, float, bool) */

void __thiscall
spine::RegionAttachment::setUVs
          (RegionAttachment *this,float param_1,float param_2,float param_3,float param_4,
          bool param_5)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(this + 0xb0);
  if (param_5) {
    pfVar1[4] = param_1;
    pfVar1[5] = param_4;
    pfVar1[6] = param_1;
    pfVar1[7] = param_2;
    *pfVar1 = param_3;
    pfVar1[1] = param_2;
    pfVar1[2] = param_3;
    pfVar1[3] = param_4;
    return;
  }
  pfVar1[2] = param_1;
  pfVar1[3] = param_4;
  pfVar1[4] = param_1;
  pfVar1[5] = param_2;
  pfVar1[6] = param_3;
  pfVar1[7] = param_2;
  *pfVar1 = param_3;
  pfVar1[1] = param_4;
  return;
}

