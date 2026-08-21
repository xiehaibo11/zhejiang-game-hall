
/* cocos2d::Physics3DRigidBody::setDamping(float, float) */

void __thiscall
cocos2d::Physics3DRigidBody::setDamping(Physics3DRigidBody *this,float param_1,float param_2)

{
  btRigidBody::setDamping(*(btRigidBody **)(this + 0x78),param_1,param_2);
  return;
}

