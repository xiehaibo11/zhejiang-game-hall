
/* cocos2d::PhysicsJointRatchet::~PhysicsJointRatchet() */

void __thiscall cocos2d::PhysicsJointRatchet::~PhysicsJointRatchet(PhysicsJointRatchet *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

