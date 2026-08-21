
/* fairygui::GLabel::getIcon() const */

undefined1 * __thiscall fairygui::GLabel::getIcon(GLabel *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x288) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a769d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x288) + 0x20))();
    return puVar1;
  }
  return &cocos2d::STD_STRING_EMPTY;
}

