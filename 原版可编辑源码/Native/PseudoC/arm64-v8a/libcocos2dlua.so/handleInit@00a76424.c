
/* fairygui::GImage::handleInit() */

void __thiscall fairygui::GImage::handleInit(GImage *this)

{
  FUISprite *this_00;
  ulong uVar1;
  
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
  *(FUISprite **)(this + 0x1d8) = this_00;
  cocos2d::Ref::retain((Ref *)this_00);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x1d8);
  return;
}

