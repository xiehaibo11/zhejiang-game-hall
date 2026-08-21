
/* cocos2d::Label::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::Label::setBlendFunc(Label *this,BlendFunc *param_1)

{
  long *plVar1;
  
  *(undefined8 *)(this + 0x634) = *(undefined8 *)param_1;
  this[0x631] = (Label)0x1;
  if (*(long **)(this + 0x3c0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c0) + 0x5e0))();
    plVar1 = *(long **)(this + 0x3c8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f0efc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x5e0))(plVar1,param_1);
      return;
    }
  }
  return;
}

