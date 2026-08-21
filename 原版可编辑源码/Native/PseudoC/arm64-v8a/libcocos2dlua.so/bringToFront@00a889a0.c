
/* fairygui::GRoot::bringToFront(fairygui::Window*) */

void __thiscall fairygui::GRoot::bringToFront(GRoot *this,Window *param_1)

{
  int iVar1;
  Window *pWVar2;
  long lVar3;
  
  iVar1 = GComponent::numChildren((GComponent *)this);
  if ((*(long *)(*(GObject **)(this + 0x290) + 0xa0) != 0) && (param_1[0x2b8] == (Window)0x0)) {
    iVar1 = GComponent::getChildIndex((GComponent *)this,*(GObject **)(this + 0x290));
                    /* try { // try from 00a88a58 to 00b88ab3 has its CatchHandler @ 00a89668 */
  }
  while( true ) {
    if (iVar1 < 1) {
      return;
    }
    iVar1 = iVar1 + -1;
    pWVar2 = (Window *)GComponent::getChildAt((GComponent *)this,iVar1);
    if (pWVar2 == param_1) break;
    if ((pWVar2 != (Window *)0x0) &&
       (lVar3 = __dynamic_cast(pWVar2,&GObject::typeinfo,&Window::typeinfo,0), lVar3 != 0)) {
                    /* try { // try from 00a88a48 to 00b88a57 has its CatchHandler @ 00a89620 */
      GComponent::setChildIndex((GComponent *)this,(GObject *)param_1,iVar1);
      return;
    }
  }
  return;
}

