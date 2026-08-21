
/* cocos2d::PhysicsJointDistance::~PhysicsJointDistance() */

void __thiscall cocos2d::PhysicsJointDistance::~PhysicsJointDistance(PhysicsJointDistance *this)

{
                    /* catch() { ... } // from try @ 01007288 with catch @ 01007300 */
                    /* catch() { ... } // from try @ 010072a4 with catch @ 01007308 */
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

