
/* btCollisionShape::getBoundingSphere(btVector3&, float&) const */

void __thiscall
btCollisionShape::getBoundingSphere(btCollisionShape *this,btVector3 *param_1,float *param_2)

{
  float fVar1;
  float __x;
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
  __x = (local_80 - local_70) * (local_80 - local_70) +
        (fStack_7c - fStack_6c) * (fStack_7c - fStack_6c) +
        (local_78 - local_68) * (local_78 - local_68);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  *param_2 = fVar1 * 0.5;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(float *)param_1 = (local_70 + local_80) * 0.5;
  *(float *)(param_1 + 4) = (fStack_6c + fStack_7c) * 0.5;
  *(float *)(param_1 + 8) = (local_68 + local_78) * 0.5;
  return;
}

