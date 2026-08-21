
/* cocos2d::PhysicsJointFixed::~PhysicsJointFixed() */

void __thiscall cocos2d::PhysicsJointFixed::~PhysicsJointFixed(PhysicsJointFixed *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
                    /* try { // try from 0100719c to 011071a3 has its CatchHandler @ 01007208 */
  operator_delete(this);
  return;
}

