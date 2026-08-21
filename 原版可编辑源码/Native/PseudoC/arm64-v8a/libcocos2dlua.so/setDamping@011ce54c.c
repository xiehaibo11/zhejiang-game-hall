
/* btRigidBody::setDamping(float, float) */

void __thiscall btRigidBody::setDamping(btRigidBody *this,float param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_10;
  float fStack_c;
  float local_8;
  float local_4;
  
  pfVar1 = &local_10;
  if (param_1 <= 1.0) {
    pfVar1 = &local_4;
  }
  local_8 = param_2;
  local_4 = param_1;
  local_10 = 1.0;
  fStack_c = 0.0;
  pfVar2 = &fStack_c;
  if (0.0 <= param_1) {
    pfVar2 = pfVar1;
  }
  pfVar1 = &local_10;
  if (param_2 <= 1.0) {
    pfVar1 = &local_8;
  }
  *(float *)(this + 0x1d8) = *pfVar2;
  local_10 = 1.0;
  fStack_c = 0.0;
  pfVar2 = &fStack_c;
  if (0.0 <= param_2) {
    pfVar2 = pfVar1;
  }
  *(float *)(this + 0x1dc) = *pfVar2;
  return;
}

