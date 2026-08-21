
/* cocos2d::ui::EditBox::getFontSize() const */

undefined8 __thiscall cocos2d::ui::EditBox::getFontSize(EditBox *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deadc4 with catch @ 00deae08
                        */
                    /* WARNING: Could not recover jumptable at 0x00deae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x5b8) + 0x98))();
    return uVar1;
  }
  return 0xffffffff;
}

