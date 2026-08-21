
/* fairygui::GRoot::onTouchEvent(int) */

void __thiscall fairygui::GRoot::onTouchEvent(GRoot *this,int param_1)

{
  GObject *pGVar1;
  
  if (param_1 == 10) {
    pGVar1 = *(GObject **)(this + 0x2d0);
    if (pGVar1 != (GObject *)0x0) {
      if (*(long *)(pGVar1 + 0xa0) != 0) {
        GComponent::removeChild((GComponent *)this,pGVar1);
      }
      *(undefined8 *)(this + 0x2d0) = 0;
    }
    checkPopups(this);
    return;
  }
  return;
}

