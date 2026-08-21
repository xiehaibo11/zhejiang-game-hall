
/* cocos2d::EaseQuinticActionInOut::update(float) */

void __thiscall cocos2d::EaseQuinticActionInOut::update(EaseQuinticActionInOut *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::quintEaseInOut(param_1);
                    /* try { // try from 00ed0b54 to 00fd0b63 has its CatchHandler @ 00ed11dc */
                    /* WARNING: Could not recover jumptable at 0x00ed0b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

