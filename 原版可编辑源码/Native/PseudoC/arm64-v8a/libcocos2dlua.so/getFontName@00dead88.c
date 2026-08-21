
/* cocos2d::ui::EditBox::getFontName() const */

undefined1 * __thiscall cocos2d::ui::EditBox::getFontName(EditBox *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dead98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x5b8) + 0x90))();
    return puVar1;
  }
  return &DAT_013c996e;
}

