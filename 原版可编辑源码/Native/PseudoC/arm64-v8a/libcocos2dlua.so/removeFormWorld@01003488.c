
/* cocos2d::PhysicsJoint::removeFormWorld() */

void __thiscall cocos2d::PhysicsJoint::removeFormWorld(PhysicsJoint *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x48);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x010034a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,this,0);
    return;
  }
  return;
}

