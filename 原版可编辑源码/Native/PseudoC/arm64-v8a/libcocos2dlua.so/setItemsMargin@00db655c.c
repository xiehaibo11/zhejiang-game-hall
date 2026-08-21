
/* cocos2d::ui::ListView::setItemsMargin(float) */

void __thiscall cocos2d::ui::ListView::setItemsMargin(ListView *this,float param_1)

{
  if (*(float *)(this + 0x8dc) == param_1) {
    return;
  }
  *(float *)(this + 0x8dc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00db6578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6a8))();
  return;
}

