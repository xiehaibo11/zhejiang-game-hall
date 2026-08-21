
/* fairygui::Window::closeModalWait(int) */

undefined8 __thiscall fairygui::Window::closeModalWait(Window *this,int param_1)

{
  GObject *pGVar1;
  
  if ((param_1 != 0) && (*(int *)(this + 0x288) != param_1)) {
    return 0;
  }
  pGVar1 = *(GObject **)(this + 0x298);
  *(undefined4 *)(this + 0x288) = 0;
  if ((pGVar1 != (GObject *)0x0) && (*(long *)(pGVar1 + 0xa0) != 0)) {
    GComponent::removeChild((GComponent *)this,pGVar1);
  }
  return 1;
}

