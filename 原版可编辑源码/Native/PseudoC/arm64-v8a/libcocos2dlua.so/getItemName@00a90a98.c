
/* fairygui::PopupMenu::getItemName(int) const */

long __thiscall fairygui::PopupMenu::getItemName(PopupMenu *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = GComponent::getChildAt(*(GComponent **)(this + 0x30),param_1);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = __dynamic_cast(lVar1,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  return lVar2 + 0x60;
}

