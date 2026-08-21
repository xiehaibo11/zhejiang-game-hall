
/* cocos2d::EaseExponentialOut::update(float) */

void __thiscall cocos2d::EaseExponentialOut::update(EaseExponentialOut *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::expoEaseOut(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ecf148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

