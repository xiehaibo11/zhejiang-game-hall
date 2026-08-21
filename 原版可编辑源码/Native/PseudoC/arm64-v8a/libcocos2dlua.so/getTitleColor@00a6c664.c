
/* fairygui::GButton::getTitleColor() const */

ulong __thiscall fairygui::GButton::getTitleColor(GButton *this)

{
  long *plVar1;
  GLabel *this_00;
  long lVar2;
  uint3 *puVar3;
  
  lVar2 = *(long *)(this + 0x288);
  if (lVar2 == 0) {
LAB_00a6c718:
    puVar3 = (uint3 *)&cocos2d::Color3B::BLACK;
  }
  else {
    puVar3 = (uint3 *)&cocos2d::Color3B::BLACK;
    while (plVar1 = (long *)__dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0),
          plVar1 == (long *)0x0) {
      this_00 = (GLabel *)__dynamic_cast(lVar2,&GObject::typeinfo,&GLabel::typeinfo,0);
      if (this_00 != (GLabel *)0x0) {
        plVar1 = (long *)GLabel::getTextField(this_00);
        break;
      }
      lVar2 = __dynamic_cast(lVar2,&GObject::typeinfo,&typeinfo,0);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x288), lVar2 == 0)) goto LAB_00a6c720;
    }
    if (plVar1 == (long *)0x0) goto LAB_00a6c718;
    lVar2 = (**(code **)(*plVar1 + 0xd0))();
    puVar3 = (uint3 *)(lVar2 + 0x1c);
  }
LAB_00a6c720:
  return (ulong)*puVar3;
}

