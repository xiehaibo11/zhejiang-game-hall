
/* cocos2d::PhysicsJointPin::~PhysicsJointPin() */

void __thiscall cocos2d::PhysicsJointPin::~PhysicsJointPin(PhysicsJointPin *this)

{
                    /* try { // try from 010071c8 to 01107233 has its CatchHandler @ 01007160 */
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

