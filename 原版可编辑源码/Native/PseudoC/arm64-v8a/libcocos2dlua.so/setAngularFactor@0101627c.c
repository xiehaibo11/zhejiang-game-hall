
/* cocos2d::Physics3DRigidBody::setAngularFactor(float) */

void __thiscall
cocos2d::Physics3DRigidBody::setAngularFactor(Physics3DRigidBody *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x78);
  *(float *)(lVar1 + 0x250) = param_1;
  *(float *)(lVar1 + 0x254) = param_1;
  *(float *)(lVar1 + 600) = param_1;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  *(undefined4 *)(lVar1 + 0x25c) = 0;
  return;
}

