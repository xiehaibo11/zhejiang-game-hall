
/* cocos2d::PhysicsShape::setFriction(float) */

void __thiscall cocos2d::PhysicsShape::setFriction(PhysicsShape *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  puVar2 = *(undefined8 **)(this + 0x30);
  puVar1 = *(undefined8 **)(this + 0x38);
  *(float *)(this + 0x74) = param_1;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    cpShapeSetFriction(CONCAT44(in_register_00005004,param_1),*puVar2);
  }
  return;
}

