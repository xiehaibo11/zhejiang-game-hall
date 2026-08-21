
/* fairygui::GRoot::closeModalWait() */

void __thiscall fairygui::GRoot::closeModalWait(GRoot *this)

{
  GObject *pGVar1;
  
  pGVar1 = *(GObject **)(this + 0x298);
  if ((pGVar1 != (GObject *)0x0) && (*(long *)(pGVar1 + 0xa0) != 0)) {
    GComponent::removeChild((GComponent *)this,pGVar1);
    return;
  }
  return;
}

