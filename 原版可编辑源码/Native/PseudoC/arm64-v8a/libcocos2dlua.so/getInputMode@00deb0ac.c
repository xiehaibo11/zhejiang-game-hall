
/* cocos2d::ui::EditBox::getInputMode() const */

undefined8 __thiscall cocos2d::ui::EditBox::getInputMode(EditBox *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x5b8) + 0xc0))();
    return uVar1;
  }
  return 6;
}

