
/* fairygui::InputProcessor::addTouchMonitor(int, fairygui::GObject*) */

void __thiscall
fairygui::InputProcessor::addTouchMonitor(InputProcessor *this,int param_1,GObject *param_2)

{
  long lVar1;
  long lVar2;
  GObject *pGVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  WeakPtr *pWVar7;
  WeakPtr *pWVar8;
  long lVar9;
  WeakPtr *pWVar10;
  WeakPtr aWStack_50 [8];
  long local_48;
  
                    /* try { // try from 00aadcdc to 00badd2b has its CatchHandler @ 00aadcdc
                       catch() { ... } // from try @ 00aadcdc with catch @ 00aadcdc
                       catch() { ... } // from try @ 00aadd78 with catch @ 00aadcdc
                       catch() { ... } // from try @ 00aaddbc with catch @ 00aadcdc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(this + 0x18);
  if (plVar4 != *(long **)(this + 0x20)) {
    lVar9 = 0;
    lVar5 = 0;
    do {
      lVar6 = *plVar4;
      if (*(int *)(lVar6 + 0x10) == param_1) {
        if (lVar6 == 0) goto LAB_00aaddf4;
        goto LAB_00aadd54;
      }
                    /* try { // try from 00aadd2c to 00badd77 has its CatchHandler @ 00aaddfc */
      plVar4 = plVar4 + 1;
      lVar2 = lVar6;
      if (*(int *)(lVar6 + 0x10) != -1) {
        lVar6 = lVar5;
        lVar2 = lVar9;
      }
      lVar9 = lVar2;
      lVar5 = lVar6;
    } while (*(long **)(this + 0x20) != plVar4);
    if (lVar6 != 0) {
      *(int *)(lVar9 + 0x10) = param_1;
      lVar6 = lVar9;
LAB_00aadd54:
      pWVar7 = *(WeakPtr **)(lVar6 + 0x58);
      pWVar10 = *(WeakPtr **)(lVar6 + 0x60);
      pWVar8 = pWVar7;
      if (pWVar7 != pWVar10) {
        pGVar3 = (GObject *)WeakPtr::ptr(pWVar7);
                    /* try { // try from 00aadd78 to 00badda7 has its CatchHandler @ 00aadcdc */
        while ((pWVar8 = pWVar7, pGVar3 != param_2 &&
               (pWVar7 = pWVar7 + 8, pWVar8 = pWVar10, pWVar10 != pWVar7))) {
          pGVar3 = (GObject *)WeakPtr::ptr(pWVar7);
        }
      }
                    /* try { // try from 00aadda8 to 00baddbb has its CatchHandler @ 00aaddfc */
      if (*(WeakPtr **)(lVar6 + 0x60) == pWVar8) {
        WeakPtr::WeakPtr(aWStack_50,param_2);
                    /* try { // try from 00aaddbc to 00bade17 has its CatchHandler @ 00aadcdc */
        pWVar7 = *(WeakPtr **)(lVar6 + 0x60);
        if (pWVar7 < *(WeakPtr **)(lVar6 + 0x68)) {
          WeakPtr::WeakPtr(pWVar7,aWStack_50);
          *(WeakPtr **)(lVar6 + 0x60) = pWVar7 + 8;
        }
        else {
          std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
          __push_back_slow_path<fairygui::WeakPtr>
                    ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)
                     (lVar6 + 0x58),aWStack_50);
        }
        WeakPtr::~WeakPtr(aWStack_50);
      }
    }
  }
LAB_00aaddf4:
                    /* catch() { ... } // from try @ 00aadd2c with catch @ 00aaddfc
                       catch() { ... } // from try @ 00aadda8 with catch @ 00aaddfc */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

