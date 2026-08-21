
/* cocos2d::PhysicsBody::setEnabled(bool) */

void __thiscall cocos2d::PhysicsBody::setEnabled(PhysicsBody *this,bool param_1)

{
  long *plVar1;
  
  if (this[0x48] != (PhysicsBody)param_1) {
    plVar1 = *(long **)(this + 0x80);
    this[0x48] = (PhysicsBody)param_1;
    if (plVar1 != (long *)0x0) {
      if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x01000f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x90))(plVar1,this);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01000f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x98))(plVar1,this);
      return;
    }
  }
  return;
}

