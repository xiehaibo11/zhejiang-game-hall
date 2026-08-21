
/* fairygui::GButton::getTitleFontSize() const */

int __thiscall fairygui::GButton::getTitleFontSize(GButton *this)

{
  long *plVar1;
  GLabel *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x288);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = (long *)__dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (plVar1 != (long *)0x0) break;
    this_00 = (GLabel *)__dynamic_cast(lVar2,&GObject::typeinfo,&GLabel::typeinfo,0);
    if (this_00 != (GLabel *)0x0) {
      plVar1 = (long *)GLabel::getTextField(this_00);
      break;
    }
    lVar2 = __dynamic_cast(lVar2,&GObject::typeinfo,&typeinfo,0);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x288);
  }
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0xd0))();
  return (int)*(float *)(lVar2 + 0x18);
}

