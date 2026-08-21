
/* fairygui::GRoot::checkPopups() */

void __thiscall fairygui::GRoot::checkPopups(GRoot *this)

{
  long lVar1;
  GRoot *pGVar2;
  Window *pWVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  WeakPtr *pWVar7;
  WeakPtr *this_00;
  WeakPtr *pWVar8;
  GRoot *this_01;
  long lVar9;
  long lVar10;
  WeakPtr aWStack_70 [8];
  long local_68;
  
                    /* try { // try from 00a897cc to 00b897cf has its CatchHandler @ 00a89830 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pWVar8 = *(WeakPtr **)(this + 0x2b8);
                    /* try { // try from 00a89800 to 00b8981b has its CatchHandler @ 00a89838 */
  pWVar7 = *(WeakPtr **)(this + 0x2c0);
  while (pWVar7 != pWVar8) {
    pWVar7 = pWVar7 + -8;
    WeakPtr::~WeakPtr(pWVar7);
                    /* try { // try from 00a8981c to 00b8988f has its CatchHandler @ 00a897a0 */
  }
  this_00 = *(WeakPtr **)(this + 0x2a0);
  pWVar7 = *(WeakPtr **)(this + 0x2a8);
  *(WeakPtr **)(this + 0x2c0) = pWVar8;
                    /* catch() { ... } // from try @ 00a897cc with catch @ 00a89830 */
  if (this_00 != pWVar7) {
                    /* catch() { ... } // from try @ 00a89800 with catch @ 00a89838 */
    this_01 = *(GRoot **)(*(long *)(this + 0x288) + 0x70);
    if ((this_01 != (GRoot *)0x0) && (this_01 != this)) {
      if (this_00 == pWVar7) goto LAB_00a8988c;
      do {
        pGVar2 = (GRoot *)WeakPtr::ptr(this_00);
        pWVar8 = this_00;
        while ((this_00 = pWVar8, pGVar2 != this_01 &&
               (pWVar8 = pWVar8 + 8, this_00 = pWVar7, pWVar7 != pWVar8))) {
          pGVar2 = (GRoot *)WeakPtr::ptr(pWVar8);
        }
LAB_00a8988c:
        do {
          pWVar7 = *(WeakPtr **)(this + 0x2a8);
                    /* try { // try from 00a89890 to 00b8995b has its CatchHandler @ 00a89890
                       catch() { ... } // from try @ 00a89890 with catch @ 00a89890
                       catch() { ... } // from try @ 00a899dc with catch @ 00a89890 */
          if (this_00 != pWVar7) {
            lVar9 = *(long *)(this + 0x2a0);
            iVar5 = (int)((ulong)((long)pWVar7 - lVar9) >> 3);
            while (iVar5 = iVar5 + -1, (int)((ulong)((long)this_00 - lVar9) >> 3) < iVar5) {
              pWVar3 = (Window *)WeakPtr::ptr(pWVar7 + -8);
              if ((pWVar3 != (Window *)0x0) && (*(long *)(pWVar3 + 0xa0) != 0)) {
                lVar10 = __dynamic_cast(pWVar3,&GObject::typeinfo,&Window::typeinfo,0);
                if (lVar10 == 0) {
                  GComponent::removeChild((GComponent *)this,(GObject *)pWVar3);
                }
                else {
                  Window::hide(pWVar3);
                    /* try { // try from 00a8995c to 00b8998f has its CatchHandler @ 00a89a5c */
                }
              }
              pWVar7 = (WeakPtr *)(*(long *)(this + 0x2a8) + -8);
              WeakPtr::~WeakPtr(pWVar7);
              *(WeakPtr **)(this + 0x2a8) = pWVar7;
            }
            goto LAB_00a89a64;
          }
          this_01 = (GRoot *)GObject::findParent((GObject *)this_01);
          if ((this_01 == (GRoot *)0x0) || (this_01 == this)) {
            pWVar7 = *(WeakPtr **)(this + 0x2a8);
            this_00 = *(WeakPtr **)(this + 0x2a0);
            goto LAB_00a89968;
          }
          this_00 = *(WeakPtr **)(this + 0x2a0);
          pWVar7 = *(WeakPtr **)(this + 0x2a8);
        } while (this_00 == pWVar7);
      } while( true );
    }
LAB_00a89968:
    uVar6 = (long)pWVar7 - (long)this_00;
    if (0 < (int)(uVar6 >> 3)) {
      lVar9 = (long)(uVar6 * 0x20000000) >> 0x20;
      lVar10 = (long)(uVar6 * 0x20000000) >> 0x1d;
                    /* try { // try from 00a89990 to 00b899a3 has its CatchHandler @ 00a89a28 */
      do {
        lVar10 = lVar10 + -8;
        pWVar3 = (Window *)WeakPtr::ptr(this_00 + lVar10);
        if (pWVar3 != (Window *)0x0) {
          WeakPtr::WeakPtr(aWStack_70,(GObject *)pWVar3);
          pWVar7 = *(WeakPtr **)(this + 0x2c0);
                    /* try { // try from 00a899dc to 00b89a77 has its CatchHandler @ 00a89890 */
          if (pWVar7 < *(WeakPtr **)(this + 0x2c8)) {
            WeakPtr::WeakPtr(pWVar7,aWStack_70);
            *(WeakPtr **)(this + 0x2c0) = pWVar7 + 8;
          }
          else {
            std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
            __push_back_slow_path<fairygui::WeakPtr>
                      ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)
                       (this + 0x2b8),aWStack_70);
          }
          WeakPtr::~WeakPtr(aWStack_70);
          if (*(long *)(pWVar3 + 0xa0) != 0) {
                    /* catch() { ... } // from try @ 00a89990 with catch @ 00a89a28 */
                    /* catch() { ... } // from try @ 00a899a8 with catch @ 00a89a2c */
            lVar4 = __dynamic_cast(pWVar3,&GObject::typeinfo,&Window::typeinfo,0);
            if (lVar4 == 0) {
              GComponent::removeChild((GComponent *)this,(GObject *)pWVar3);
            }
            else {
              Window::hide(pWVar3);
            }
          }
        }
                    /* try { // try from 00a899a8 to 00b899db has its CatchHandler @ 00a89a2c */
        this_00 = *(WeakPtr **)(this + 0x2a0);
        lVar9 = lVar9 + -1;
      } while (0 < lVar9);
      pWVar7 = *(WeakPtr **)(this + 0x2a8);
    }
    while (pWVar7 != this_00) {
      pWVar7 = pWVar7 + -8;
      WeakPtr::~WeakPtr(pWVar7);
                    /* catch() { ... } // from try @ 00a8995c with catch @ 00a89a5c */
    }
    *(WeakPtr **)(this + 0x2a8) = this_00;
  }
LAB_00a89a64:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

