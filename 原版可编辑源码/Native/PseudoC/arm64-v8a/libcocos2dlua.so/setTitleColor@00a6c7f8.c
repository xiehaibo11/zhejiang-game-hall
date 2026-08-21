
/* fairygui::GButton::setTitleColor(cocos2d::Color3B const&) */

void __thiscall fairygui::GButton::setTitleColor(GButton *this,Color3B *param_1)

{
  GTextField *this_00;
  GLabel *this_01;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x288);
  if (lVar1 != 0) {
    while (this_00 = (GTextField *)__dynamic_cast(lVar1,&GObject::typeinfo,&GTextField::typeinfo,0),
          this_00 == (GTextField *)0x0) {
      this_01 = (GLabel *)__dynamic_cast(lVar1,&GObject::typeinfo,&GLabel::typeinfo,0);
      if (this_01 != (GLabel *)0x0) {
        this_00 = (GTextField *)GLabel::getTextField(this_01);
        break;
      }
      lVar1 = __dynamic_cast(lVar1,&GObject::typeinfo,&typeinfo,0);
      if (lVar1 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x288);
      if (lVar1 == 0) {
        return;
      }
    }
    if (this_00 != (GTextField *)0x0) {
      GTextField::setColor(this_00,param_1);
      return;
    }
  }
  return;
}

