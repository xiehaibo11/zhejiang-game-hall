
/* cocos2d::ui::EditBox::getFontColor() const */

undefined4 * __thiscall cocos2d::ui::EditBox::getFontColor(EditBox *this)

{
  undefined4 *puVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deaea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined4 *)(**(code **)(**(long **)(this + 0x5b8) + 0xa0))();
    return puVar1;
  }
  return &Color4B::WHITE;
}

