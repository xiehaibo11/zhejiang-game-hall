
/* cocos2d::PhysicsJointRotaryLimit::~PhysicsJointRotaryLimit() */

void __thiscall
cocos2d::PhysicsJointRotaryLimit::~PhysicsJointRotaryLimit(PhysicsJointRotaryLimit *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

