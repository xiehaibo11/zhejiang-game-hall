
/* cocos2d::extension::ControlButton::setMargins(int, int) */

void __thiscall
cocos2d::extension::ControlButton::setMargins(ControlButton *this,int param_1,int param_2)

{
  *(int *)(this + 0x448) = param_2;
  *(int *)(this + 0x44c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00e0aab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))();
  return;
}

