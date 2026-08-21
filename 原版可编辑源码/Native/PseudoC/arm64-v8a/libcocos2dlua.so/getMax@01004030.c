
/* cocos2d::PhysicsJointLimit::getMax() const */

undefined1  [16] __thiscall cocos2d::PhysicsJointLimit::getMax(PhysicsJointLimit *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
                    /* try { // try from 01004030 to 01104127 has its CatchHandler @ 01004030
                       catch() { ... } // from try @ 01004030 with catch @ 01004030
                       catch() { ... } // from try @ 01004188 with catch @ 01004030 */
  if (this[100] == (PhysicsJointLimit)0x0) {
    cpSlideJointGetMax(**(undefined8 **)(this + 8));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416(*(uint *)(*(long *)(this + 0x50) + 0x3c));
}

