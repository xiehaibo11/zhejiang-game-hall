
/* fairygui::GRoot::closePopup(fairygui::GObject*) */

void __thiscall fairygui::GRoot::closePopup(GRoot *this,GObject *param_1)

{
  long lVar1;
  
  if ((param_1 != (GObject *)0x0) && (*(long *)(param_1 + 0xa0) != 0)) {
                    /* catch() { ... } // from try @ 00a89754 with catch @ 00a8978c */
    lVar1 = __dynamic_cast(param_1,&GObject::typeinfo,&Window::typeinfo,0);
    if (lVar1 != 0) {
                    /* try { // try from 00a897a0 to 00b897cb has its CatchHandler @ 00a897a0
                       catch() { ... } // from try @ 00a897a0 with catch @ 00a897a0
                       catch() { ... } // from try @ 00a8981c with catch @ 00a897a0 */
      Window::hide((Window *)param_1);
      return;
    }
    GComponent::removeChild((GComponent *)this,param_1);
    return;
  }
  return;
}

