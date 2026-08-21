
/* btPolyhedralConvexShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btPolyhedralConvexShape::calculateLocalInertia
          (btPolyhedralConvexShape *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  local_70 = 0x3f800000;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  local_34 = 0;
  local_3c = 0;
  local_44 = 0;
  (**(code **)(*(long *)this + 0x10))(this,&local_70,&local_80,&local_90);
  fVar2 = fVar1 + (local_90 - local_80) * 0.5;
  fVar3 = fVar1 + (fStack_8c - fStack_7c) * 0.5;
  fVar1 = fVar1 + (local_88 - local_78) * 0.5;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar1 = fVar1 * fVar1;
  fVar4 = param_1 * 0.08333333;
  *(float *)param_2 = fVar4 * (fVar3 + fVar1);
  *(float *)(param_2 + 4) = fVar4 * (fVar2 + fVar1);
  *(float *)(param_2 + 8) = fVar4 * (fVar2 + fVar3);
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

