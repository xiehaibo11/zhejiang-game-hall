
/* cocos2d::PhysicsJointRotarySpring::getStiffness() const */

undefined1  [16] __thiscall
cocos2d::PhysicsJointRotarySpring::getStiffness(PhysicsJointRotarySpring *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (this[100] == (PhysicsJointRotarySpring)0x0) {
    cpDampedRotarySpringGetStiffness(**(undefined8 **)(this + 8));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416(*(uint *)(*(long *)(this + 0x50) + 0x5c));
}

