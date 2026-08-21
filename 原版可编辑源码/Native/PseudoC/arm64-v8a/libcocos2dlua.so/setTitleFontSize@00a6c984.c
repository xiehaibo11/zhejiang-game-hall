
/* fairygui::GButton::setTitleFontSize(int) */

void __thiscall fairygui::GButton::setTitleFontSize(GButton *this,int param_1)

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
                    /* try { // try from 00a6ca08 to 00b6ca5b has its CatchHandler @ 00a6ca08
                       catch() { ... } // from try @ 00a6ca08 with catch @ 00a6ca08
                       catch() { ... } // from try @ 00a6cb00 with catch @ 00a6ca08
                       catch() { ... } // from try @ 00a6cb60 with catch @ 00a6ca08 */
      if (lVar1 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x288);
      if (lVar1 == 0) {
        return;
      }
    }
    if (this_00 != (GTextField *)0x0) {
      GTextField::setFontSize(this_00,(float)param_1);
      return;
    }
  }
  return;
}

