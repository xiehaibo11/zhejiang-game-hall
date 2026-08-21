
/* cocos2d::ui::TextAtlas::initRenderer() */

void __thiscall cocos2d::ui::TextAtlas::initRenderer(TextAtlas *this)

{
  long *plVar1;
  
  plVar1 = (long *)Label::create();
  *(long **)(this + 0x4f0) = plVar1;
  (**(code **)(*plVar1 + 0x148))(plVar1,&Vec2::ANCHOR_MIDDLE);
                    /* WARNING: Could not recover jumptable at 0x00dc92bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f0),0xffffffff,0xffffffff);
  return;
}

