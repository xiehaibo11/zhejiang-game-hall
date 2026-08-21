
/* cocostudio::DecorativeDisplay::setDisplayData(cocostudio::DisplayData*) */

void __thiscall
cocostudio::DecorativeDisplay::setDisplayData(DecorativeDisplay *this,DisplayData *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x30);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (DisplayData *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x30);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(DisplayData **)(this + 0x30) = param_1;
  }
  return;
}

