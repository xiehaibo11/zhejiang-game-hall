
/* cocos2d::Physics3DRigidBody::setFriction(float) */

void __thiscall cocos2d::Physics3DRigidBody::setFriction(Physics3DRigidBody *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x78);
  *(float *)(lVar1 + 0xf4) = param_1;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  return;
}

