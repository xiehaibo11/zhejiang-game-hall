
/* btRigidBody::applyDamping(float) */

void __thiscall btRigidBody::applyDamping(btRigidBody *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = powf(1.0 - *(float *)(this + 0x1d8),param_1);
  *(float *)(this + 0x154) = fVar1 * *(float *)(this + 0x154);
  *(float *)(this + 0x15c) = fVar1 * *(float *)(this + 0x15c);
  *(float *)(this + 0x158) = fVar1 * *(float *)(this + 0x158);
  fVar1 = powf(1.0 - *(float *)(this + 0x1dc),param_1);
  fVar6 = fVar1 * *(float *)(this + 0x164);
  fVar5 = fVar1 * *(float *)(this + 0x168);
  fVar1 = fVar1 * *(float *)(this + 0x16c);
  *(float *)(this + 0x164) = fVar6;
  *(float *)(this + 0x168) = fVar5;
  *(float *)(this + 0x16c) = fVar1;
  if (this[0x1e0] != (btRigidBody)0x0) {
    fVar2 = *(float *)(this + 0x154);
    if (*(float *)(this + 0x1ec) <= fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) {
      fVar3 = *(float *)(this + 0x158);
      fVar4 = *(float *)(this + 0x15c);
    }
    else {
      fVar3 = *(float *)(this + 0x158);
      fVar4 = *(float *)(this + 0x15c);
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 < *(float *)(this + 0x1e8)) {
        fVar7 = *(float *)(this + 0x1e4);
        fVar2 = fVar7 * fVar2;
        fVar3 = fVar7 * fVar3;
        fVar4 = fVar7 * fVar4;
        *(float *)(this + 0x164) = fVar6 * fVar7;
        *(float *)(this + 0x168) = fVar7 * fVar5;
        *(float *)(this + 0x16c) = fVar7 * fVar1;
        *(float *)(this + 0x154) = fVar2;
        *(float *)(this + 0x158) = fVar3;
        *(float *)(this + 0x15c) = fVar4;
      }
    }
    fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
    fVar1 = SQRT(fVar5);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar5);
    }
    if (fVar1 < *(float *)(this + 0x1d8)) {
      if (fVar1 <= 0.005) {
        *(undefined8 *)(this + 0x154) = 0;
        *(undefined8 *)(this + 0x15c) = 0;
      }
      else {
        fVar6 = *(float *)(this + 0x154);
        fVar2 = *(float *)(this + 0x158);
        fVar3 = *(float *)(this + 0x15c);
        fVar5 = fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3;
        fVar1 = SQRT(fVar5);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(fVar5);
        }
        fVar1 = 1.0 / fVar1;
        *(float *)(this + 0x154) = *(float *)(this + 0x154) - fVar6 * fVar1 * 0.005;
        *(float *)(this + 0x158) = *(float *)(this + 0x158) - fVar2 * fVar1 * 0.005;
        *(float *)(this + 0x15c) = *(float *)(this + 0x15c) - fVar3 * fVar1 * 0.005;
      }
    }
    fVar5 = *(float *)(this + 0x164) * *(float *)(this + 0x164) +
            *(float *)(this + 0x168) * *(float *)(this + 0x168) +
            *(float *)(this + 0x16c) * *(float *)(this + 0x16c);
    fVar1 = SQRT(fVar5);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar5);
    }
    if (fVar1 < *(float *)(this + 0x1dc)) {
      if (fVar1 <= 0.005) {
        *(undefined8 *)(this + 0x164) = 0;
        *(undefined8 *)(this + 0x16c) = 0;
      }
      else {
        fVar6 = *(float *)(this + 0x164);
        fVar2 = *(float *)(this + 0x168);
        fVar3 = *(float *)(this + 0x16c);
        fVar5 = fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3;
        fVar1 = SQRT(fVar5);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(fVar5);
        }
        fVar1 = 1.0 / fVar1;
        *(float *)(this + 0x164) = *(float *)(this + 0x164) - fVar6 * fVar1 * 0.005;
        *(float *)(this + 0x168) = *(float *)(this + 0x168) - fVar2 * fVar1 * 0.005;
        *(float *)(this + 0x16c) = *(float *)(this + 0x16c) - fVar3 * fVar1 * 0.005;
      }
    }
  }
  return;
}

