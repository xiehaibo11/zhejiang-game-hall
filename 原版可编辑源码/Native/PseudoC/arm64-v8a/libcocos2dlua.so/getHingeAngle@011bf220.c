
/* btHingeConstraint::getHingeAngle(btTransform const&, btTransform const&) */

float __thiscall
btHingeConstraint::getHingeAngle(btHingeConstraint *this,btTransform *param_1,btTransform *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = *(float *)(this + 0x240);
  fVar1 = *(float *)(this + 0x250);
  fVar3 = *(float *)(this + 0x260);
  fVar6 = *(float *)(this + 0x244);
  fVar7 = *(float *)(this + 0x254);
  fVar8 = *(float *)(this + 0x264);
  fVar9 = *(float *)(this + 0x284);
  fVar10 = *(float *)(this + 0x294);
  fVar11 = *(float *)(this + 0x2a4);
  fVar4 = fVar9 * *(float *)param_2 + fVar10 * *(float *)(param_2 + 4) +
          fVar11 * *(float *)(param_2 + 8);
  fVar5 = fVar9 * *(float *)(param_2 + 0x10) + fVar10 * *(float *)(param_2 + 0x14) +
          fVar11 * *(float *)(param_2 + 0x18);
  fVar9 = fVar9 * *(float *)(param_2 + 0x20) + fVar10 * *(float *)(param_2 + 0x24) +
          fVar11 * *(float *)(param_2 + 0x28);
  fVar1 = atan2f((fVar2 * *(float *)param_1 + fVar1 * *(float *)(param_1 + 4) +
                 fVar3 * *(float *)(param_1 + 8)) * fVar4 +
                 (fVar2 * *(float *)(param_1 + 0x10) + fVar1 * *(float *)(param_1 + 0x14) +
                 fVar3 * *(float *)(param_1 + 0x18)) * fVar5 +
                 (fVar2 * *(float *)(param_1 + 0x20) + fVar1 * *(float *)(param_1 + 0x24) +
                 fVar3 * *(float *)(param_1 + 0x28)) * fVar9,
                 (*(float *)param_1 * fVar6 + *(float *)(param_1 + 4) * fVar7 +
                 *(float *)(param_1 + 8) * fVar8) * fVar4 +
                 (*(float *)(param_1 + 0x10) * fVar6 + *(float *)(param_1 + 0x14) * fVar7 +
                 *(float *)(param_1 + 0x18) * fVar8) * fVar5 +
                 (*(float *)(param_1 + 0x20) * fVar6 + *(float *)(param_1 + 0x24) * fVar7 +
                 *(float *)(param_1 + 0x28) * fVar8) * fVar9);
  return fVar1 * *(float *)(this + 0x2f4);
}

