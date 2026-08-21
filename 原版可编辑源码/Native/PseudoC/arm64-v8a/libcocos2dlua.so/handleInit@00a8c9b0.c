
/* fairygui::GBasicTextField::handleInit() */

void __thiscall fairygui::GBasicTextField::handleInit(GBasicTextField *this)

{
  FUILabel *this_00;
  ulong uVar1;
  
  this_00 = operator_new(0x6d0,(nothrow_t *)&std::nothrow);
  if (this_00 != (FUILabel *)0x0) {
    FUILabel::FUILabel(this_00);
    uVar1 = (**(code **)(*(long *)this_00 + 0x500))(this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (FUILabel *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  *(FUILabel **)(this + 0x200) = this_00;
  cocos2d::Ref::retain((Ref *)this_00);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x200);
  return;
}

