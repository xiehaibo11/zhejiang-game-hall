
/* cocos2d::LabelLetter::setVisible(bool) */

void __thiscall cocos2d::LabelLetter::setVisible(LabelLetter *this,bool param_1)

{
  this[0x52d] = (LabelLetter)param_1;
                    /* try { // try from 00f0f768 to 0100f76f has its CatchHandler @ 00f0f884 */
                    /* WARNING: Could not recover jumptable at 0x00f0f76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))();
  return;
}

