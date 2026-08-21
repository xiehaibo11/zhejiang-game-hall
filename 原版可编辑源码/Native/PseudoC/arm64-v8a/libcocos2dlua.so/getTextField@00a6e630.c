
/* fairygui::GComboBox::getTextField() const */

long __thiscall fairygui::GComboBox::getTextField(GComboBox *this)

{
  long lVar1;
  GLabel *this_00;
  GButton *this_01;
  long lVar2;
  
                    /* try { // try from 00a6e63c to 00b6e653 has its CatchHandler @ 00a6e91c */
  lVar2 = *(long *)(this + 0x290);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
                    /* try { // try from 00a6e658 to 00b6e68b has its CatchHandler @ 00a6e914 */
    lVar1 = __dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (lVar1 == 0) {
      this_00 = (GLabel *)__dynamic_cast(lVar2,&GObject::typeinfo,&GLabel::typeinfo,0);
      if (this_00 != (GLabel *)0x0) {
        lVar2 = GLabel::getTextField(this_00);
        return lVar2;
      }
                    /* try { // try from 00a6e6b4 to 00b6e6c3 has its CatchHandler @ 00a6e954 */
      this_01 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
      lVar1 = 0;
      if (this_01 != (GButton *)0x0) {
                    /* try { // try from 00a6e6c4 to 00b6e6d3 has its CatchHandler @ 00a6e950 */
        lVar2 = GButton::getTextField(this_01);
        return lVar2;
      }
    }
  }
                    /* try { // try from 00a6e698 to 00b6e6af has its CatchHandler @ 00a6e998 */
  return lVar1;
}

