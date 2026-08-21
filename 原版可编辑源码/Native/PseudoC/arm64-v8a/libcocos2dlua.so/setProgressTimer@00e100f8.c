
/* cocos2d::extension::ControlPotentiometer::setProgressTimer(cocos2d::ProgressTimer*) */

void __thiscall
cocos2d::extension::ControlPotentiometer::setProgressTimer
          (ControlPotentiometer *this,ProgressTimer *param_1)

{
  Ref *this_00;
  
                    /* catch() { ... } // from try @ 00e100b8 with catch @ 00e10104 */
  this_00 = *(Ref **)(this + 0x370);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (ProgressTimer *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x370);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(ProgressTimer **)(this + 0x370) = param_1;
  }
  return;
}

