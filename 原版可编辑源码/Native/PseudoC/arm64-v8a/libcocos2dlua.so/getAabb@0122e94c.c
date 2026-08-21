
/* btSphereShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btSphereShape::getAabb
          (btSphereShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x34);
  fVar6 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar4 - fVar1;
  *(float *)(param_2 + 4) = fVar5 - fVar2;
  *(float *)(param_2 + 8) = fVar6 - fVar3;
  fVar4 = *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x34);
  fVar6 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(float *)param_3 = fVar1 + fVar4;
  *(float *)(param_3 + 4) = fVar2 + fVar5;
  *(float *)(param_3 + 8) = fVar3 + fVar6;
  return;
}

