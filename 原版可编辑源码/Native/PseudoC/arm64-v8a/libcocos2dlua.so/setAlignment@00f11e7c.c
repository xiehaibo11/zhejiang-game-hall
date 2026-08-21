
/* cocos2d::LabelBMFont::setAlignment(cocos2d::TextHAlignment) */

void __thiscall cocos2d::LabelBMFont::setAlignment(LabelBMFont *this,undefined8 param_2)

{
  undefined8 uVar1;
  
  Label::setAlignment(*(Label **)(this + 800),param_2,
                      *(undefined4 *)(*(Label **)(this + 800) + 0x454));
  uVar1 = (**(code **)(**(long **)(this + 800) + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00f11ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  return;
}

