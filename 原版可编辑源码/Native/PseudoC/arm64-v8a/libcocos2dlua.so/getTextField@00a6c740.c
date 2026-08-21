
/* fairygui::GButton::getTextField() const */

long __thiscall fairygui::GButton::getTextField(GButton *this)

{
  long lVar1;
  GLabel *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x288);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = __dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (lVar1 != 0) {
      return lVar1;
    }
    this_00 = (GLabel *)__dynamic_cast(lVar2,&GObject::typeinfo,&GLabel::typeinfo,0);
    if (this_00 != (GLabel *)0x0) {
      lVar2 = GLabel::getTextField(this_00);
      return lVar2;
    }
    lVar2 = __dynamic_cast(lVar2,&GObject::typeinfo,&typeinfo,0);
    if (lVar2 == 0) break;
    lVar2 = *(long *)(lVar2 + 0x288);
  }
  return 0;
}

