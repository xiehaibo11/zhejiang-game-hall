
/* fairygui::GList::onClickItem(fairygui::EventContext*) */

void __thiscall fairygui::GList::onClickItem(GList *this,EventContext *param_1)

{
  GObject *pGVar1;
  
  pGVar1 = *(GObject **)param_1;
  if (this[0x330] == (GList)0x0) {
    setSelectionOnEvent(this,pGVar1,*(InputEvent **)(param_1 + 8));
  }
  this[0x330] = (GList)0x0;
  if ((*(ScrollPane **)(this + 0x230) != (ScrollPane *)0x0) && (this[0x2e0] != (GList)0x0)) {
    ScrollPane::scrollToView(*(ScrollPane **)(this + 0x230),pGVar1,true,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00a78054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this,pGVar1,param_1);
  return;
}

