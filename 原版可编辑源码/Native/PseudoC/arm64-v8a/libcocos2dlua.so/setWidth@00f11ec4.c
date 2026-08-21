
/* cocos2d::LabelBMFont::setWidth(float) */

void __thiscall cocos2d::LabelBMFont::setWidth(LabelBMFont *this,float param_1)

{
  undefined8 uVar1;
  
  Label::setMaxLineWidth(*(Label **)(this + 800),param_1);
  uVar1 = (**(code **)(**(long **)(this + 800) + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00f11f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  return;
}

