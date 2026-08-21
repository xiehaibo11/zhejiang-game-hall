
/* cocos2d::ui::EditBox::getText() const */

undefined1 * __thiscall cocos2d::ui::EditBox::getText(EditBox *this)

{
  undefined1 *puVar1;
  
  if ((*(long **)(this + 0x5b8) != (long *)0x0) &&
     (puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x5b8) + 0x78))(),
     puVar1 != (undefined1 *)0x0)) {
    return puVar1;
  }
  return &DAT_013c996e;
}

