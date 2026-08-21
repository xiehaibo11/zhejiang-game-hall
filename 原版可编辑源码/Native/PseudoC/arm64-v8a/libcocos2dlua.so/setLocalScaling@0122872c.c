
/* btCylinderShape::setLocalScaling(btVector3 const&) */

void __thiscall btCylinderShape::setLocalScaling(btCylinderShape *this,btVector3 *param_1)

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
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = *(float *)(this + 0x28);
  fVar5 = *(float *)(this + 0x2c);
  fVar6 = *(float *)(this + 0x30);
  fVar7 = *(float *)(this + 0x18);
  fVar8 = *(float *)(this + 0x1c);
  fVar9 = *(float *)(this + 0x20);
  btConvexInternalShape::setLocalScaling((btConvexInternalShape *)this,param_1);
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x28) = ((fVar1 + fVar4) / fVar7) * *(float *)(this + 0x18) - fVar1;
  *(float *)(this + 0x2c) = ((fVar2 + fVar5) / fVar8) * *(float *)(this + 0x1c) - fVar2;
  *(float *)(this + 0x30) = ((fVar3 + fVar6) / fVar9) * *(float *)(this + 0x20) - fVar3;
  return;
}

