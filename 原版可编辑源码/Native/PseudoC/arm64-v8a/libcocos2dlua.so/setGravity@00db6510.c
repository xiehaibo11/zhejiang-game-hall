
/* cocos2d::ui::ListView::setGravity(cocos2d::ui::ListView::Gravity) */

void __thiscall cocos2d::ui::ListView::setGravity(ListView *this,int param_2)

{
  if (*(int *)(this + 0x8d0) == param_2) {
    return;
  }
  *(int *)(this + 0x8d0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00db652c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6a8))();
  return;
}

