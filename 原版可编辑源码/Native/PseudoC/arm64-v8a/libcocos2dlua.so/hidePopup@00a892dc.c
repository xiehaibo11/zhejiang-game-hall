
/* fairygui::GRoot::hidePopup(fairygui::GObject*) */

void __thiscall fairygui::GRoot::hidePopup(GRoot *this,GObject *param_1)

{
  GObject *pGVar1;
  Window *pWVar2;
  long lVar3;
  long lVar4;
  WeakPtr *pWVar5;
  WeakPtr *pWVar6;
  uint uVar7;
  WeakPtr *pWVar8;
  ulong uVar9;
  
  pWVar5 = *(WeakPtr **)(this + 0x2a0);
  if (param_1 == (GObject *)0x0) {
    pWVar8 = *(WeakPtr **)(this + 0x2a8);
    if (pWVar8 != pWVar5) {
      do {
        pWVar2 = (Window *)WeakPtr::ptr(pWVar5);
        if ((pWVar2 != (Window *)0x0) && (*(long *)(pWVar2 + 0xa0) != 0)) {
          lVar4 = __dynamic_cast(pWVar2,&GObject::typeinfo,&Window::typeinfo,0);
          if (lVar4 == 0) {
            GComponent::removeChild((GComponent *)this,(GObject *)pWVar2);
          }
          else {
                    /* try { // try from 00a893b0 to 00b89403 has its CatchHandler @ 00a89628 */
            Window::hide(pWVar2);
          }
        }
        pWVar5 = pWVar5 + 8;
      } while (pWVar8 != pWVar5);
      pWVar5 = *(WeakPtr **)(this + 0x2a0);
      pWVar8 = *(WeakPtr **)(this + 0x2a8);
      while (pWVar8 != pWVar5) {
        pWVar8 = pWVar8 + -8;
        WeakPtr::~WeakPtr(pWVar8);
      }
    }
    *(WeakPtr **)(this + 0x2a8) = pWVar5;
  }
  else {
    pWVar6 = *(WeakPtr **)(this + 0x2a8);
    pWVar8 = pWVar5;
    if (pWVar5 != pWVar6) {
      pGVar1 = (GObject *)WeakPtr::ptr(pWVar5);
      while ((pWVar8 = pWVar5, pGVar1 != param_1 &&
             (pWVar5 = pWVar5 + 8, pWVar8 = pWVar6, pWVar6 != pWVar5))) {
        pGVar1 = (GObject *)WeakPtr::ptr(pWVar5);
      }
    }
    pWVar5 = *(WeakPtr **)(this + 0x2a8);
    if (pWVar8 != pWVar5) {
      lVar4 = *(long *)(this + 0x2a0);
                    /* try { // try from 00a89404 to 00b8942f has its CatchHandler @ 00a881e4 */
      uVar9 = (ulong)((long)pWVar5 - lVar4) >> 3;
      uVar7 = (uint)uVar9;
      while ((int)((ulong)((long)pWVar8 - lVar4) >> 3) < (int)uVar7) {
        uVar7 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar7;
        pWVar2 = (Window *)WeakPtr::ptr(pWVar5 + -8);
        if ((pWVar2 != (Window *)0x0) && (*(long *)(pWVar2 + 0xa0) != 0)) {
                    /* try { // try from 00a8946c to 00b8947f has its CatchHandler @ 00a896b0 */
          lVar3 = __dynamic_cast(pWVar2,&GObject::typeinfo,&Window::typeinfo,0);
          if (lVar3 == 0) {
            GComponent::removeChild((GComponent *)this,(GObject *)pWVar2);
          }
          else {
                    /* try { // try from 00a89484 to 00b89497 has its CatchHandler @ 00a896b8 */
            Window::hide(pWVar2);
          }
        }
                    /* try { // try from 00a89430 to 00b89443 has its CatchHandler @ 00a89680 */
        pWVar5 = (WeakPtr *)(*(long *)(this + 0x2a8) + -8);
        WeakPtr::~WeakPtr(pWVar5);
        *(WeakPtr **)(this + 0x2a8) = pWVar5;
                    /* try { // try from 00a89448 to 00b8945b has its CatchHandler @ 00a89684 */
      }
    }
  }
                    /* try { // try from 00a8949c to 00b894af has its CatchHandler @ 00a896b4 */
  return;
}

