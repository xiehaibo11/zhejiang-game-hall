
/* cocos2d::FadeTo::update(float) */

void __thiscall cocos2d::FadeTo::update(FadeTo *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x38);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ee30c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))
              (plVar1,(int)((float)(int)((uint)(byte)this[0x56] - (uint)(byte)this[0x57]) * param_1
                           + (float)(byte)this[0x57]));
    return;
  }
  return;
}

