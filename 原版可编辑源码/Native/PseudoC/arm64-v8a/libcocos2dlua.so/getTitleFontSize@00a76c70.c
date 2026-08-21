
/* fairygui::GLabel::getTitleFontSize() const */

int __thiscall fairygui::GLabel::getTitleFontSize(GLabel *this)

{
  long *plVar1;
  long lVar2;
  GButton *this_00;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x280);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    plVar1 = (long *)__dynamic_cast(lVar3,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (plVar1 != (long *)0x0) break;
                    /* try { // try from 00a76cc0 to 00b76d0b has its CatchHandler @ 00a76cc0
                       catch() { ... } // from try @ 00a76cc0 with catch @ 00a76cc0
                       catch() { ... } // from try @ 00a76d10 with catch @ 00a76cc0 */
    lVar2 = __dynamic_cast(lVar3,&GObject::typeinfo,&typeinfo,0);
    if (lVar2 == 0) {
      this_00 = (GButton *)__dynamic_cast(lVar3,&GObject::typeinfo,&GButton::typeinfo,0);
      if (this_00 == (GButton *)0x0) {
        return 0;
      }
      plVar1 = (long *)GButton::getTextField(this_00);
      break;
    }
    lVar3 = *(long *)(lVar2 + 0x280);
  }
  if (plVar1 == (long *)0x0) {
    return 0;
  }
                    /* try { // try from 00a76d0c to 00b76d0f has its CatchHandler @ 00a76d44 */
                    /* try { // try from 00a76d10 to 00b76d57 has its CatchHandler @ 00a76cc0 */
  lVar3 = (**(code **)(*plVar1 + 0xd0))();
  return (int)*(float *)(lVar3 + 0x18);
}

