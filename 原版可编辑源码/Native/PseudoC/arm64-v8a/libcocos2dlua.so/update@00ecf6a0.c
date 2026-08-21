
/* cocos2d::EaseSineInOut::update(float) */

void __thiscall cocos2d::EaseSineInOut::update(EaseSineInOut *this,float param_1)

{
  long *plVar1;
  
                    /* try { // try from 00ecf6a4 to 00fcf6af has its CatchHandler @ 00ecf704 */
  plVar1 = *(long **)(this + 0x58);
                    /* try { // try from 00ecf6b0 to 00fcf71f has its CatchHandler @ 00ecf66c */
  tweenfunc::sineEaseInOut(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ecf6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

