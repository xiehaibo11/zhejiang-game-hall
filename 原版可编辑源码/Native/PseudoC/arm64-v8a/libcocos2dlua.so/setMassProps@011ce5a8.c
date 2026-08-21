
/* btRigidBody::setMassProps(float, btVector3 const&) */

void __thiscall btRigidBody::setMassProps(btRigidBody *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 == 0.0) {
    *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) | 1;
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0 / param_1;
    *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) & 0xfffffffe;
  }
  *(float *)(this + 0x174) = fVar3;
  *(undefined4 *)(this + 0x194) = 0;
  *(float *)(this + 0x188) = *(float *)(this + 0x198) * param_1;
  *(float *)(this + 0x18c) = *(float *)(this + 0x19c) * param_1;
  *(float *)(this + 400) = *(float *)(this + 0x1a0) * param_1;
  fVar1 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8);
  *(float *)(this + 0x268) = fVar3 * *(float *)(this + 0x180);
  fVar4 = 1.0 / fVar1;
  fVar2 = 1.0 / fVar5;
  fVar7 = 1.0 / fVar6;
  if (fVar1 == 0.0) {
    fVar4 = 0.0;
  }
  if (fVar5 == 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(this + 0x1a8) = fVar4;
  if (fVar6 == 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(this + 0x260) = *(float *)(this + 0x178) * fVar3;
  *(float *)(this + 0x264) = fVar3 * *(float *)(this + 0x17c);
  *(undefined4 *)(this + 0x1b4) = 0;
  *(float *)(this + 0x1ac) = fVar2;
  *(float *)(this + 0x1b0) = fVar7;
  *(undefined4 *)(this + 0x26c) = 0;
  return;
}

