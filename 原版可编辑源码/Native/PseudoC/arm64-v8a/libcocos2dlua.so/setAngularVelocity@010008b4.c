
/* cocos2d::PhysicsBody::setAngularVelocity(float) */

void __thiscall cocos2d::PhysicsBody::setAngularVelocity(PhysicsBody *this,float param_1)

{
  int iVar1;
  undefined4 in_register_00005004;
  
  iVar1 = cpBodyGetType(*(undefined8 *)(this + 0x88));
  if (iVar1 == 2) {
    return;
  }
  cpBodySetAngularVelocity(CONCAT44(in_register_00005004,param_1),*(undefined8 *)(this + 0x88));
  return;
}

