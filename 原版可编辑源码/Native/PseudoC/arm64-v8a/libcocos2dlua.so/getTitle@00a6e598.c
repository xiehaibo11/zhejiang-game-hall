
/* fairygui::GComboBox::getTitle() const */

undefined1 * __thiscall fairygui::GComboBox::getTitle(GComboBox *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x290) != (long *)0x0) {
                    /* try { // try from 00a6e5a0 to 00b6e5b3 has its CatchHandler @ 00a6e920 */
                    /* WARNING: Could not recover jumptable at 0x00a6e5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x290) + 0x10))();
    return puVar1;
  }
  return &cocos2d::STD_STRING_EMPTY;
}

