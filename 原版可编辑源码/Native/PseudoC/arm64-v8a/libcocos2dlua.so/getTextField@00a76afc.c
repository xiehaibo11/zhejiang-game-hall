
/* fairygui::GLabel::getTextField() const */

long __thiscall fairygui::GLabel::getTextField(GLabel *this)

{
  long lVar1;
  GButton *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x280);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = __dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (lVar1 != 0) break;
    lVar1 = __dynamic_cast(lVar2,&GObject::typeinfo,&typeinfo,0);
    if (lVar1 == 0) {
      this_00 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
                    /* try { // try from 00a76b94 to 00b76b9b has its CatchHandler @ 00a76bc0 */
      if (this_00 == (GButton *)0x0) {
        return 0;
      }
                    /* try { // try from 00a76b9c to 00b76c3f has its CatchHandler @ 00a769b4 */
      lVar2 = GButton::getTextField(this_00);
      return lVar2;
    }
    lVar2 = *(long *)(lVar1 + 0x280);
  }
  return lVar1;
}

