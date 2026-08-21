
/* cocos2d::Label::setGlobalZOrder(float) */

void __thiscall cocos2d::Label::setGlobalZOrder(Label *this,float param_1)

{
  undefined4 in_register_00005004;
  
  Node::setGlobalZOrder((Node *)this,param_1);
  if (*(long **)(this + 0x3c0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c0) + 0x40))(CONCAT44(in_register_00005004,param_1));
    if (*(long **)(this + 0x3c8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f0f15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x3c8) + 0x40))(CONCAT44(in_register_00005004,param_1));
      return;
    }
  }
  return;
}

