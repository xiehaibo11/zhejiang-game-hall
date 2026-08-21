
/* cocos2d::Sprite::setOpacityModifyRGB(bool) */

void __thiscall cocos2d::Sprite::setOpacityModifyRGB(Sprite *this,bool param_1)

{
  if (this[0x508] == (Sprite)param_1) {
    return;
  }
  this[0x508] = (Sprite)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f4133c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))();
  return;
}

