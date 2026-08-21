
/* btRigidBody::integrateVelocities(float) */

void __thiscall btRigidBody::integrateVelocities(btRigidBody *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((byte)this[0xe0] & 3) == 0) {
    fVar3 = *(float *)(this + 0x1c8);
    fVar4 = *(float *)(this + 0x1cc);
    fVar5 = *(float *)(this + 0x1d0);
    fVar1 = *(float *)(this + 0x174) * param_1;
    *(float *)(this + 0x154) = *(float *)(this + 0x1b8) * fVar1 + *(float *)(this + 0x154);
    *(float *)(this + 0x158) = fVar1 * *(float *)(this + 0x1bc) + *(float *)(this + 0x158);
    *(float *)(this + 0x15c) = fVar1 * *(float *)(this + 0x1c0) + *(float *)(this + 0x15c);
    fVar1 = (*(float *)(this + 0x124) * fVar3 + *(float *)(this + 0x128) * fVar4 +
            *(float *)(this + 300) * fVar5) * param_1 + *(float *)(this + 0x164);
    fVar2 = (fVar3 * *(float *)(this + 0x134) + fVar4 * *(float *)(this + 0x138) +
            fVar5 * *(float *)(this + 0x13c)) * param_1 + *(float *)(this + 0x168);
    fVar4 = (fVar3 * *(float *)(this + 0x144) + fVar4 * *(float *)(this + 0x148) +
            fVar5 * *(float *)(this + 0x14c)) * param_1 + *(float *)(this + 0x16c);
    *(float *)(this + 0x164) = fVar1;
    fVar3 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
    fVar1 = SQRT(fVar3);
    *(float *)(this + 0x168) = fVar2;
    *(float *)(this + 0x16c) = fVar4;
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar3);
    }
    if (1.5707964 < fVar1 * param_1) {
      fVar1 = (1.5707964 / param_1) / fVar1;
      *(float *)(this + 0x164) = fVar1 * *(float *)(this + 0x164);
      *(float *)(this + 0x168) = fVar1 * *(float *)(this + 0x168);
      *(float *)(this + 0x16c) = fVar1 * *(float *)(this + 0x16c);
    }
  }
  return;
}

