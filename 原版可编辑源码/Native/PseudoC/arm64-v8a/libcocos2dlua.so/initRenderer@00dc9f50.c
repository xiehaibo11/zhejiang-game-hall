
/* cocos2d::ui::TextBMFont::initRenderer() */

void __thiscall cocos2d::ui::TextBMFont::initRenderer(TextBMFont *this)

{
  undefined8 uVar1;
  
  uVar1 = Label::create();
  *(undefined8 *)(this + 0x4f0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00dc9f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,uVar1,0xffffffff,0xffffffff);
  return;
}

