
/* fairygui::GList::onItemTouchBegin(fairygui::EventContext*) */

void __thiscall fairygui::GList::onItemTouchBegin(GList *this,EventContext *param_1)

{
  GObject *pGVar1;
  
  if (*(int *)(this + 0x304) != 3) {
    pGVar1 = *(GObject **)param_1;
    this[0x330] = (GList)0x0;
    if (((UIConfig::defaultScrollTouchEffect == '\0') ||
        ((*(long *)(this + 0x230) == 0 &&
         ((*(long *)(this + 0xa0) == 0 || (*(long *)(*(long *)(this + 0xa0) + 0x230) == 0)))))) &&
       ((*(int *)(this + 0x304) == 0 || (pGVar1[0x33c] == (GObject)0x0)))) {
      setSelectionOnEvent(this,pGVar1,*(InputEvent **)(param_1 + 8));
      return;
    }
  }
  return;
}

