
/* cocos2d::PhysicsJointGear::~PhysicsJointGear() */

void __thiscall cocos2d::PhysicsJointGear::~PhysicsJointGear(PhysicsJointGear *this)

{
                    /* try { // try from 010073d8 to 011073db has its CatchHandler @ 01007478 */
                    /* try { // try from 010073dc to 01107493 has its CatchHandler @ 0100733c */
  PhysicsJoint::~PhysicsJoint((PhysicsJoint *)this);
  operator_delete(this);
  return;
}

