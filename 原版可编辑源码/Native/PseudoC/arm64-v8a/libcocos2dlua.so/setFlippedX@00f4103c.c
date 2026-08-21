
/* cocos2d::Sprite::setFlippedX(bool) */

void __thiscall cocos2d::Sprite::setFlippedX(Sprite *this,bool param_1)

{
  if (this[0x509] == (Sprite)param_1) {
    return;
  }
  this[0x509] = (Sprite)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f4105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x660))();
  return;
}

