
/* cocos2d::ui::ListView::setRightPadding(float) */

void __thiscall cocos2d::ui::ListView::setRightPadding(ListView *this,float param_1)

{
  if (*(float *)(this + 0x8e8) == param_1) {
    return;
  }
  *(float *)(this + 0x8e8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00db6630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6a8))();
  return;
}

