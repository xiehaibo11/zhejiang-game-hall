
/* cocos2d::MenuItemSprite::setEnabled(bool) */

void __thiscall cocos2d::MenuItemSprite::setEnabled(MenuItemSprite *this,bool param_1)

{
  if (this[0x2f9] == (MenuItemSprite)param_1) {
    return;
  }
  this[0x2f9] = (MenuItemSprite)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f1f7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x560))();
  return;
}

