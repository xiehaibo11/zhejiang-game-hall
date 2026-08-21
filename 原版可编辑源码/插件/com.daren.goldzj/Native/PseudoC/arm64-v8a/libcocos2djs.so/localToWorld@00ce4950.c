
/* spine::Bone::localToWorld(float, float, float&, float&) */

void __thiscall
spine::Bone::localToWorld(Bone *this,float param_1,float param_2,float *param_3,float *param_4)

{
  *param_3 = *(float *)(this + 0x84) +
             *(float *)(this + 0x7c) * param_1 + *(float *)(this + 0x80) * param_2;
  *param_4 = *(float *)(this + 0x90) +
             *(float *)(this + 0x88) * param_1 + *(float *)(this + 0x8c) * param_2;
  return;
}

