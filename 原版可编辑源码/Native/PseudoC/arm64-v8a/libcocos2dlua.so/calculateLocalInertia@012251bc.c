
/* btCompoundShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btCompoundShape::calculateLocalInertia(btCompoundShape *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_60 = 0x3f800000;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0x3f800000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_24 = 0;
  local_2c = 0;
  local_34 = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_60,&local_70,&local_80);
  fVar1 = (local_80 - local_70) * 0.5;
  fVar2 = (fStack_7c - fStack_6c) * 0.5;
  fVar3 = (local_78 - local_68) * 0.5;
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar1 = fVar1 * fVar1;
  fVar4 = param_1 / 12.0;
  *(float *)param_2 = fVar4 * (fVar2 + fVar3);
  *(float *)(param_2 + 4) = fVar4 * (fVar1 + fVar3);
  *(float *)(param_2 + 8) = fVar4 * (fVar1 + fVar2);
  return;
}

