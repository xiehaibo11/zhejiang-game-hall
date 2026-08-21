
/* cocos2d::Node::setRotationQuat(cocos2d::Quaternion const&) */

void __thiscall cocos2d::Node::setRotationQuat(Node *this,Quaternion *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x34) = uVar3;
  fVar6 = *(float *)(this + 0x3c);
  fVar7 = *(float *)(this + 0x40);
  fVar8 = *(float *)(this + 0x34);
  fVar9 = *(float *)(this + 0x38);
  fVar1 = fVar9 * fVar6 + fVar8 * fVar7;
  fVar4 = fVar8 * fVar8 + fVar9 * fVar9;
  fVar4 = atan2f(fVar1 + fVar1,1.0 - (fVar4 + fVar4));
  fVar2 = fVar9 * fVar7 - fVar8 * fVar6;
  fVar2 = fVar2 + fVar2;
  fVar5 = (float)NEON_fminnm(fVar2,0x3f800000);
  fVar1 = -1.0;
  if (-1.0 <= fVar2) {
    fVar1 = fVar5;
  }
  fVar1 = asinf(fVar1);
  fVar2 = fVar8 * fVar9 + fVar6 * fVar7;
  fVar5 = fVar9 * fVar9 + fVar6 * fVar6;
  fVar2 = atan2f(fVar2 + fVar2,1.0 - (fVar5 + fVar5));
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  *(float *)(this + 0x24) = fVar4 * 57.29578;
  *(float *)(this + 0x28) = fVar1 * 57.29578;
  *(float *)(this + 0x2c) = fVar2 * -57.29578;
  *(float *)(this + 0x30) = fVar2 * -57.29578;
  this[0x161] = (Node)0x1;
  return;
}

