
/* cocos2d::PhysicsJointSpring::getRestLength() const */

undefined1  [16] __thiscall cocos2d::PhysicsJointSpring::getRestLength(PhysicsJointSpring *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (this[100] == (PhysicsJointSpring)0x0) {
                    /* try { // try from 01004da0 to 01104dc3 has its CatchHandler @ 01004f98 */
    cpDampedSpringGetRestLength(**(undefined8 **)(this + 8));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416(*(uint *)(*(long *)(this + 0x50) + 0x4c));
}

