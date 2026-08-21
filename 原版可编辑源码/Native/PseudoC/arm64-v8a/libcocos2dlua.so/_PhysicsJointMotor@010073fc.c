
/* cocos2d::PhysicsJointMotor::~PhysicsJointMotor() */

void __thiscall cocos2d::PhysicsJointMotor::~PhysicsJointMotor(PhysicsJointMotor *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

