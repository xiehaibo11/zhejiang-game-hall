
/* cocos2d::ui::EditBox::getPlaceHolder() const */

undefined1 * __thiscall cocos2d::ui::EditBox::getPlaceHolder(EditBox *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x5b8) + 0x88))();
    return puVar1;
  }
                    /* try { // try from 00deb08c to 00eeb08f has its CatchHandler @ 00deb2d4 */
  return &DAT_013c996e;
}

