
/* spine::Bone::worldToLocal(float, float, float&, float&) */

void __thiscall
spine::Bone::worldToLocal(Bone *this,float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(this + 0x7c);
  fVar3 = *(float *)(this + 0x84);
  fVar5 = *(float *)(this + 0x88);
  fVar4 = *(float *)(this + 0x90);
  fVar2 = 1.0 / (fVar1 * *(float *)(this + 0x8c) - *(float *)(this + 0x80) * fVar5);
  *param_3 = *(float *)(this + 0x8c) * (param_1 - fVar3) * fVar2 -
             fVar2 * *(float *)(this + 0x80) * (param_2 - fVar4);
  *param_4 = fVar2 * fVar1 * (param_2 - fVar4) - fVar5 * (param_1 - fVar3) * fVar2;
  return;
}

