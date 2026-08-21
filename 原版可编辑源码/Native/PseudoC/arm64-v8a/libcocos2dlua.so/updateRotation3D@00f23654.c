
/* cocos2d::Node::updateRotation3D() */

void __thiscall cocos2d::Node::updateRotation3D(Node *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(this + 0x3c);
  fVar6 = *(float *)(this + 0x40);
  fVar7 = *(float *)(this + 0x34);
  fVar8 = *(float *)(this + 0x38);
  fVar1 = fVar8 * fVar5 + fVar7 * fVar6;
  fVar3 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar3 = atan2f(fVar1 + fVar1,1.0 - (fVar3 + fVar3));
  fVar2 = fVar8 * fVar6 - fVar7 * fVar5;
  fVar2 = fVar2 + fVar2;
  fVar4 = (float)NEON_fminnm(fVar2,0x3f800000);
  fVar1 = -1.0;
  if (-1.0 <= fVar2) {
    fVar1 = fVar4;
  }
  fVar1 = asinf(fVar1);
  fVar2 = fVar7 * fVar8 + fVar5 * fVar6;
  fVar4 = fVar8 * fVar8 + fVar5 * fVar5;
  fVar2 = atan2f(fVar2 + fVar2,1.0 - (fVar4 + fVar4));
  *(float *)(this + 0x24) = fVar3 * 57.29578;
  *(float *)(this + 0x28) = fVar1 * 57.29578;
  *(float *)(this + 0x2c) = fVar2 * -57.29578;
  *(float *)(this + 0x30) = fVar2 * -57.29578;
  return;
}

