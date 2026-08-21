
/* cocos2d::PhysicsJointSpring::~PhysicsJointSpring() */

void __thiscall cocos2d::PhysicsJointSpring::~PhysicsJointSpring(PhysicsJointSpring *this)

{
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
                    /* try { // try from 0100733c to 011073d7 has its CatchHandler @ 0100733c
                       catch() { ... } // from try @ 0100733c with catch @ 0100733c
                       catch() { ... } // from try @ 010073dc with catch @ 0100733c */
  operator_delete(this);
  return;
}

