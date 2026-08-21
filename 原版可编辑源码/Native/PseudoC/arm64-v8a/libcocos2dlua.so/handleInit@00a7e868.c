
/* fairygui::GLoader::handleInit() */

void __thiscall fairygui::GLoader::handleInit(GLoader *this)

{
  FUISprite *this_00;
  ulong uVar1;
  FUIContainer *this_01;
  
  this_00 = operator_new(0x570,(nothrow_t *)&std::nothrow);
  if (this_00 != (FUISprite *)0x0) {
    FUISprite::FUISprite(this_00);
    uVar1 = (**(code **)(*(long *)this_00 + 0x500))(this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (FUISprite *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  *(FUISprite **)(this + 0x220) = this_00;
  cocos2d::Ref::retain((Ref *)this_00);
  (**(code **)(**(long **)(this + 0x220) + 0x148))(*(long **)(this + 0x220),&cocos2d::Vec2::ZERO);
  (**(code **)(**(long **)(this + 0x220) + 0x4a8))(*(long **)(this + 0x220),1);
  this_01 = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this_01 != (FUIContainer *)0x0) {
    FUIContainer::FUIContainer(this_01);
    uVar1 = (**(code **)(*(long *)this_01 + 0x500))(this_01);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_01 + 8))(this_01);
      this_01 = (FUIContainer *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_01);
    }
  }
  cocos2d::Ref::retain((Ref *)this_01);
  *(GLoader **)(this_01 + 0x2f8) = this;
  *(FUIContainer **)(this + 0xa8) = this_01;
                    /* WARNING: Could not recover jumptable at 0x00a7e980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this_01 + 0x208))(this_01,*(undefined8 *)(this + 0x220));
  return;
}

