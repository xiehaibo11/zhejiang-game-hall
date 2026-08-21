
/* cocos2d::PhysicsJointRotarySpring::~PhysicsJointRotarySpring() */

void __thiscall
cocos2d::PhysicsJointRotarySpring::~PhysicsJointRotarySpring(PhysicsJointRotarySpring *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

