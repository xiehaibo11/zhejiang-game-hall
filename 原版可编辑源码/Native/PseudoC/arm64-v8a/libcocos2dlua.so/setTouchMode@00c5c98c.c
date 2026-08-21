
/* cocostudio::InputDelegate::setTouchMode(cocos2d::Touch::DispatchMode) */

void __thiscall cocostudio::InputDelegate::setTouchMode(InputDelegate *this,int param_2)

{
  if ((*(int *)(this + 0x3c) != param_2) &&
     (*(int *)(this + 0x3c) = param_2, this[8] != (InputDelegate)0x0)) {
    (**(code **)(*(long *)this + 0x18))(this,0);
                    /* WARNING: Could not recover jumptable at 0x00c5c9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))(this,1);
    return;
  }
  return;
}

