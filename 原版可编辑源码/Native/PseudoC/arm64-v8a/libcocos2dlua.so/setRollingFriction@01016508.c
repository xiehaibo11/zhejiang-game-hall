
/* cocos2d::Physics3DRigidBody::setRollingFriction(float) */

void __thiscall
cocos2d::Physics3DRigidBody::setRollingFriction(Physics3DRigidBody *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x78);
  *(float *)(lVar1 + 0xfc) = param_1;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  return;
}

