
/* fairygui::GRichTextField::handleInit() */

void __thiscall fairygui::GRichTextField::handleInit(GRichTextField *this)

{
  FUIRichText *this_00;
  ulong uVar1;
  
  this_00 = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this_00 != (FUIRichText *)0x0) {
    FUIRichText::FUIRichText(this_00);
    uVar1 = (**(code **)(*(long *)this_00 + 0x500))(this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (FUIRichText *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  *(FUIRichText **)(this + 0x200) = this_00;
  cocos2d::Ref::retain((Ref *)this_00);
  (**(code **)(**(long **)(this + 0x200) + 0x4a8))(*(long **)(this + 0x200),1);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x200);
  return;
}

