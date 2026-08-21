
/* cocos2d::ui::EditBox::getMaxLength() */

undefined8 __thiscall cocos2d::ui::EditBox::getMaxLength(EditBox *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x5b8) + 0x50))();
    return uVar1;
  }
                    /* try { // try from 00deb0f8 to 00eeb0fb has its CatchHandler @ 00deb2c0 */
  return 0xffffffff;
}

