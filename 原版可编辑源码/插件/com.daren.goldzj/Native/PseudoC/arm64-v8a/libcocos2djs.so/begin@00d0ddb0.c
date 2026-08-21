
/* spine::SwirlVertexEffect::begin(spine::Skeleton&) */

void __thiscall spine::SwirlVertexEffect::begin(SwirlVertexEffect *this,Skeleton *param_1)

{
  float fVar1;
  
  fVar1 = (float)Skeleton::getX(param_1);
  *(float *)(this + 0x18) = fVar1 + *(float *)(this + 8);
  fVar1 = (float)Skeleton::getY(param_1);
  *(float *)(this + 0x1c) = fVar1 + *(float *)(this + 0xc);
  return;
}

