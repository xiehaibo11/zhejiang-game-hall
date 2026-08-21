
/* cocos2d::ui::Text::initRenderer() */

void __thiscall cocos2d::ui::Text::initRenderer(Text *this)

{
  undefined8 uVar1;
  
  uVar1 = Label::create();
  *(undefined8 *)(this + 0x528) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00dc84cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,uVar1,0xffffffff,0xffffffff);
  return;
}

