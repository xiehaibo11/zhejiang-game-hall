
/* fairygui::GLabel::setTitleFontSize(int) */

void __thiscall fairygui::GLabel::setTitleFontSize(GLabel *this,int param_1)

{
  GTextField *this_00;
  long lVar1;
  GButton *this_01;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x280);
  while( true ) {
                    /* catch() { ... } // from try @ 00a76d0c with catch @ 00a76d44 */
    if (lVar2 == 0) {
      return;
    }
    this_00 = (GTextField *)__dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (this_00 != (GTextField *)0x0) break;
    lVar1 = __dynamic_cast(lVar2,&GObject::typeinfo,&typeinfo,0);
    if (lVar1 == 0) {
      this_01 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
      if (this_01 == (GButton *)0x0) {
        return;
      }
      this_00 = (GTextField *)GButton::getTextField(this_01);
      break;
    }
    lVar2 = *(long *)(lVar1 + 0x280);
  }
  if (this_00 == (GTextField *)0x0) {
    return;
  }
  GTextField::setFontSize(this_00,(float)param_1);
  return;
}

