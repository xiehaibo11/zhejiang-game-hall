
/* btMatrix3x3::getRotation(btQuaternion&) const */

void __thiscall btMatrix3x3::getRotation(btMatrix3x3 *this,btQuaternion *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_50 [4];
  
  fVar5 = *(float *)this;
  fVar6 = *(float *)(this + 0x14);
  fVar7 = fVar5 + fVar6 + *(float *)(this + 0x28);
  if (fVar7 <= 0.0) {
    fVar7 = fVar6;
    if (fVar5 >= fVar6) {
      fVar7 = fVar5;
    }
    uVar1 = 2;
    if (*(float *)(this + 0x28) <= fVar7) {
      uVar1 = (uint)(fVar5 < fVar6);
    }
    uVar3 = (ulong)uVar1;
    uVar4 = (ulong)((uVar1 + 1) % 3);
    uVar2 = (ulong)((uVar1 + 2) % 3);
    fVar6 = ((*(float *)(this + uVar3 * 4 + (ulong)uVar1 * 0x10) - *(float *)(this + uVar4 * 0x14))
            - *(float *)(this + uVar2 * 0x14)) + 1.0;
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    local_50[uVar3] = fVar5 * 0.5;
    fVar5 = 0.5 / fVar5;
    local_50[3] = fVar5 * (*(float *)(this + uVar4 * 4 + uVar2 * 0x10) -
                          *(float *)(this + uVar2 * 4 + uVar4 * 0x10));
    local_50[uVar4] =
         fVar5 * (*(float *)(this + uVar3 * 4 + uVar4 * 0x10) +
                 *(float *)(this + uVar4 * 4 + uVar3 * 0x10));
    fVar6 = *(float *)(this + uVar3 * 4 + uVar2 * 0x10) +
            *(float *)(this + uVar2 * 4 + uVar3 * 0x10);
  }
  else {
    fVar7 = fVar7 + 1.0;
    fVar5 = SQRT(fVar7);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar7);
    }
    local_50[3] = fVar5 * 0.5;
    fVar5 = 0.5 / fVar5;
    local_50[0] = fVar5 * (*(float *)(this + 0x24) - *(float *)(this + 0x18));
    uVar2 = 2;
    local_50[1] = fVar5 * (*(float *)(this + 8) - *(float *)(this + 0x20));
    fVar6 = *(float *)(this + 0x10) - *(float *)(this + 4);
  }
  local_50[uVar2] = fVar5 * fVar6;
  *(float *)param_1 = local_50[0];
  *(float *)(param_1 + 4) = local_50[1];
  *(float *)(param_1 + 8) = local_50[2];
  *(float *)(param_1 + 0xc) = local_50[3];
  return;
}

