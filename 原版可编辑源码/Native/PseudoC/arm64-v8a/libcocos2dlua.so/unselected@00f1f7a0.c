
/* cocos2d::MenuItemSprite::unselected() */

void __thiscall cocos2d::MenuItemSprite::unselected(MenuItemSprite *this)

{
  this[0x2f8] = (MenuItemSprite)0x0;
                    /* WARNING: Could not recover jumptable at 0x00f1f7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x560))();
  return;
}

