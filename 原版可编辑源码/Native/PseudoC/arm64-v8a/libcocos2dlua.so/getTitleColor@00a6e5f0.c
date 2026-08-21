
/* fairygui::GComboBox::getTitleColor() const */

ulong __thiscall fairygui::GComboBox::getTitleColor(GComboBox *this)

{
  long *plVar1;
  long lVar2;
  uint3 *puVar3;
  
                    /* try { // try from 00a6e5f4 to 00b6e60b has its CatchHandler @ 00a6e99c */
  plVar1 = (long *)getTextField(this);
  if (plVar1 == (long *)0x0) {
                    /* try { // try from 00a6e618 to 00b6e62f has its CatchHandler @ 00a6e958 */
    puVar3 = (uint3 *)&cocos2d::Color3B::BLACK;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0xd0))();
    puVar3 = (uint3 *)(lVar2 + 0x1c);
  }
  return (ulong)*puVar3;
}

