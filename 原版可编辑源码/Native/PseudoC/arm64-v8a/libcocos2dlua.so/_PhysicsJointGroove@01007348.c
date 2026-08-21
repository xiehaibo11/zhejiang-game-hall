
/* cocos2d::PhysicsJointGroove::~PhysicsJointGroove() */

void __thiscall cocos2d::PhysicsJointGroove::~PhysicsJointGroove(PhysicsJointGroove *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

