
/* fairygui::Window::isTop() const */

bool __thiscall fairygui::Window::isTop(Window *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
    iVar2 = GComponent::getChildIndex(*(GComponent **)(this + 0xa0),(GObject *)this);
    iVar3 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
    bVar1 = iVar2 == iVar3 + -1;
  }
  return bVar1;
}

