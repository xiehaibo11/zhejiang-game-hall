
/* fairygui::GRoot::adjustModalLayer() */

void __thiscall fairygui::GRoot::adjustModalLayer(GRoot *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  GObject *pGVar4;
  
  if (*(long *)(this + 0x290) == 0) {
    createModalLayer(this);
  }
  iVar1 = GComponent::numChildren((GComponent *)this);
  pGVar4 = *(GObject **)(this + 0x298);
  if ((pGVar4 != (GObject *)0x0) && (*(long *)(pGVar4 + 0xa0) != 0)) {
    GComponent::setChildIndex((GComponent *)this,pGVar4,iVar1 + -1);
  }
  do {
    if (iVar1 < 1) {
      if (*(long *)(*(GObject **)(this + 0x290) + 0xa0) == 0) {
                    /* try { // try from 00a88930 to 00b8893f has its CatchHandler @ 00a89610 */
        return;
      }
      GComponent::removeChild((GComponent *)this,*(GObject **)(this + 0x290));
      return;
    }
    iVar1 = iVar1 + -1;
    lVar2 = GComponent::getChildAt((GComponent *)this,iVar1);
  } while (((lVar2 == 0) ||
           (lVar3 = __dynamic_cast(lVar2,&GObject::typeinfo,&Window::typeinfo,0), lVar3 == 0
                    /* try { // try from 00a888c0 to 00b8891f has its CatchHandler @ 00a8966c */))
          || (*(char *)(lVar2 + 0x2b8) == '\0'));
  pGVar4 = *(GObject **)(this + 0x290);
  if (*(long *)(pGVar4 + 0xa0) == 0) {
                    /* try { // try from 00a88940 to 00b8895b has its CatchHandler @ 00a881e4 */
                    /* try { // try from 00a8895c to 00b88a1b has its CatchHandler @ 00a89684 */
                    /* WARNING: Could not recover jumptable at 0x00a88960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xb0))(this,pGVar4,iVar1);
    return;
  }
  GComponent::setChildIndexBefore((GComponent *)this,pGVar4,iVar1);
  return;
}

