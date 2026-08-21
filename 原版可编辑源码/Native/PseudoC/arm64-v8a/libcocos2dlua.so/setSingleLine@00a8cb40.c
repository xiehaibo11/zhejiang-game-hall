
/* fairygui::GBasicTextField::setSingleLine(bool) */

void __thiscall fairygui::GBasicTextField::setSingleLine(GBasicTextField *this,bool param_1)

{
  cocos2d::Label::enableWrap(*(Label **)(this + 0x200),(bool)(~param_1 & 1));
  if (this[0x98] != (GBasicTextField)0x0) {
                    /* try { // try from 00a8cb68 to 00b8cb9f has its CatchHandler @ 00a8cc24 */
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a8cb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this);
  return;
}

