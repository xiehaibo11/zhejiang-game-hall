
/* fairygui::GComboBox::getValue() const */

undefined1 * __thiscall fairygui::GComboBox::getValue(GComboBox *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2fc);
  if ((-1 < iVar1) &&
     (iVar1 < (int)((ulong)(*(long *)(this + 0x2e8) - *(long *)(this + 0x2e0)) >> 3) * -0x55555555))
  {
                    /* try { // try from 00a6e7ec to 00b6e7f3 has its CatchHandler @ 00a6e92c */
    return (undefined1 *)(*(long *)(this + 0x2e0) + (long)iVar1 * 0x18);
  }
                    /* try { // try from 00a6e7f4 to 00b6e8bf has its CatchHandler @ 00a6e414 */
  return &cocos2d::STD_STRING_EMPTY;
}

