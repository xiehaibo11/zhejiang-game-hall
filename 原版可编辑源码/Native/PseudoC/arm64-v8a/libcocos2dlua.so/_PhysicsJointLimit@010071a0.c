
/* cocos2d::PhysicsJointLimit::~PhysicsJointLimit() */

void __thiscall cocos2d::PhysicsJointLimit::~PhysicsJointLimit(PhysicsJointLimit *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
                    /* try { // try from 010071b8 to 011071c7 has its CatchHandler @ 01007210 */
  operator_delete(this);
  return;
}

