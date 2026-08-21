
/* fairygui::GLabel::getText() const */

undefined1 * __thiscall fairygui::GLabel::getText(GLabel *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x280) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a76980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x280) + 0x10))();
    return puVar1;
  }
  return &cocos2d::STD_STRING_EMPTY;
}

