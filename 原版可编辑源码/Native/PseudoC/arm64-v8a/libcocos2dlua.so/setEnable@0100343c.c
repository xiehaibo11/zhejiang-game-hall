
/* cocos2d::PhysicsJoint::setEnable(bool) */

void __thiscall cocos2d::PhysicsJoint::setEnable(PhysicsJoint *this,bool param_1)

{
  long *plVar1;
  
                    /* try { // try from 01003440 to 0110344b has its CatchHandler @ 010035e8 */
  if (this[0x58] != (PhysicsJoint)param_1) {
                    /* try { // try from 0100344c to 01103603 has its CatchHandler @ 010033d8 */
    plVar1 = *(long **)(this + 0x48);
    this[0x58] = (PhysicsJoint)param_1;
    if (plVar1 != (long *)0x0) {
      if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x0100346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*plVar1)(plVar1,this);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01003484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1,this,0);
      return;
    }
  }
  return;
}

