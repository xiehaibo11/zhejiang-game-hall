
/* cocos2d::Label::setOpacityModifyRGB(bool) */

void __thiscall cocos2d::Label::setOpacityModifyRGB(Label *this,bool param_1)

{
  if ((Label)param_1 == this[0x63d]) {
    return;
  }
  this[0x63d] = (Label)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f0eaa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))();
  return;
}

