
/* btCylinderShape::btCylinderShape(btVector3 const&) */

void __thiscall btCylinderShape::btCylinderShape(btCylinderShape *this,btVector3 *param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)this);
  *(undefined4 *)(this + 0x40) = 1;
  ppuVar1 = &PTR__btConvexShape_01733090;
  *(undefined ***)this = &PTR__btConvexShape_01733090;
  fVar3 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar4 = fVar3;
  if (fVar5 <= fVar3) {
    fVar4 = fVar5;
  }
  uVar2 = (ulong)(fVar5 <= fVar3);
  if (*(float *)(param_1 + 8) <= fVar4) {
    uVar2 = 2;
  }
  if (*(float *)(param_1 + uVar2 * 4) * 0.1 < *(float *)(this + 0x38)) {
    setMargin(this,*(float *)(param_1 + uVar2 * 4) * 0.1);
    ppuVar1 = *(undefined ***)this;
  }
  fVar4 = (float)(*(code *)ppuVar1[0xc])(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x28) = fVar6 * *(float *)(this + 0x18) - fVar4;
  *(float *)(this + 0x2c) = fVar7 * *(float *)(this + 0x1c) - fVar3;
  *(float *)(this + 0x30) = fVar8 * *(float *)(this + 0x20) - fVar5;
  *(undefined4 *)(this + 8) = 0xd;
  return;
}

