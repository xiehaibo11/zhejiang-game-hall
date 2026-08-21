
/* fairygui::GComboBox::getTitleFontSize() const */

int __thiscall fairygui::GComboBox::getTitleFontSize(GComboBox *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
                    /* try { // try from 00a6e708 to 00b6e71b has its CatchHandler @ 00a6e92c */
  plVar3 = (long *)getTextField(this);
  iVar2 = 0;
  if (plVar3 != (long *)0x0) {
    lVar1 = (**(code **)(*plVar3 + 0xd0))();
                    /* try { // try from 00a6e71c to 00b6e7eb has its CatchHandler @ 00a6e414 */
    iVar2 = (int)*(float *)(lVar1 + 0x18);
  }
  return iVar2;
}

