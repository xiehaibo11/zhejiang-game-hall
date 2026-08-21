
/* cocos2d::ui::EditBox::getPlaceholderFontName() const */

undefined1 * __thiscall cocos2d::ui::EditBox::getPlaceholderFontName(EditBox *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deaf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x5b8) + 0xa8))();
    return puVar1;
  }
                    /* try { // try from 00deaf3c to 00eeaf3f has its CatchHandler @ 00deaf80 */
  return &DAT_013c996e;
}

