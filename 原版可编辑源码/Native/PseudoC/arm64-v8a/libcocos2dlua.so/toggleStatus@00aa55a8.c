
/* fairygui::Window::toggleStatus() */

void __thiscall fairygui::Window::toggleStatus(Window *this)

{
  int iVar1;
  int iVar2;
  
  if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
    iVar1 = GComponent::getChildIndex(*(GComponent **)(this + 0xa0),(GObject *)this);
    iVar2 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
    if (iVar1 == iVar2 + -1) {
      if (*(long *)(this + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa5600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0xf8))(this);
        return;
      }
      return;
    }
  }
  GRoot::showWindow(GRoot::_inst,this);
  return;
}

