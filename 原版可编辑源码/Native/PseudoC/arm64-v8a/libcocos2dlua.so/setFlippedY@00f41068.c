
/* cocos2d::Sprite::setFlippedY(bool) */

void __thiscall cocos2d::Sprite::setFlippedY(Sprite *this,bool param_1)

{
  if (this[0x50a] == (Sprite)param_1) {
    return;
  }
  this[0x50a] = (Sprite)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f41088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x668))();
  return;
}

