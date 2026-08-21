
/* cocos2d::LabelBMFont::setLineBreakWithoutSpace(bool) */

void __thiscall cocos2d::LabelBMFont::setLineBreakWithoutSpace(LabelBMFont *this,bool param_1)

{
  undefined8 uVar1;
  
  Label::setLineBreakWithoutSpace(*(Label **)(this + 800),param_1);
  uVar1 = (**(code **)(**(long **)(this + 800) + 0x168))();
                    /* try { // try from 00f11f3c to 01011f4b has its CatchHandler @ 00f122b4 */
                    /* WARNING: Could not recover jumptable at 0x00f11f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f11f4c to 01011f83 has its CatchHandler @ 00f122c8 */
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  return;
}

