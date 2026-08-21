
/* non-virtual thunk to cocos2d::Label::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::Label::setBlendFunc(Label *this,BlendFunc *param_1)

{
  long *plVar1;
  
  *(undefined8 *)(this + 0x334) = *(undefined8 *)param_1;
  plVar1 = *(long **)(this + 0xc0);
  this[0x331] = (Label)0x1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x5e0))(plVar1);
    plVar1 = *(long **)(this + 200);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f0f034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x5e0))(plVar1,param_1);
      return;
    }
  }
  return;
}

