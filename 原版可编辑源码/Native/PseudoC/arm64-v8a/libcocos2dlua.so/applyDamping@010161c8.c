
/* cocos2d::Physics3DRigidBody::applyDamping(float) */

void __thiscall cocos2d::Physics3DRigidBody::applyDamping(Physics3DRigidBody *this,float param_1)

{
  btRigidBody::applyDamping(*(btRigidBody **)(this + 0x78),param_1);
  return;
}

