
/* fairygui::GComponent::swapChildren(fairygui::GObject*, fairygui::GObject*) */

void __thiscall
fairygui::GComponent::swapChildren(GComponent *this,GObject *param_1,GObject *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  GObject *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  plVar1 = *(long **)(this + 0x1e0);
  plVar2 = *(long **)(this + 0x1e8);
  if (plVar1 == plVar2) {
    iVar8 = -1;
    plVar5 = plVar2;
    plVar7 = plVar1;
  }
  else {
    pGVar4 = (GObject *)*plVar1;
    plVar7 = plVar1;
    plVar5 = plVar1;
    if (pGVar4 == param_1) {
      iVar8 = 0;
                    /* catch() { ... } // from try @ 00a71170 with catch @ 00a715cc */
    }
    else {
      do {
                    /* catch() { ... } // from try @ 00a70fa8 with catch @ 00a71598 */
        plVar7 = plVar7 + 1;
                    /* catch() { ... } // from try @ 00a71040 with catch @ 00a7159c
                       catch() { ... } // from try @ 00a713b0 with catch @ 00a7159c */
        plVar6 = plVar2;
                    /* catch() { ... } // from try @ 00a71194 with catch @ 00a715a0 */
        if (plVar2 == plVar7) break;
                    /* catch() { ... } // from try @ 00a710a0 with catch @ 00a715a4 */
                    /* catch() { ... } // from try @ 00a71024 with catch @ 00a715a8 */
        plVar6 = plVar7;
                    /* catch() { ... } // from try @ 00a70f8c with catch @ 00a715ac */
      } while ((GObject *)*plVar7 != param_1);
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar1) >> 3);
      if (plVar6 == plVar2) {
        iVar8 = -1;
      }
    }
                    /* catch() { ... } // from try @ 00a7107c with catch @ 00a715d0 */
    while ((plVar7 = plVar5, pGVar4 != param_2 &&
           (plVar6 = plVar5 + 1, plVar5 = plVar2, plVar7 = plVar2, plVar2 != plVar6))) {
      pGVar4 = (GObject *)*plVar6;
      plVar5 = plVar6;
    }
  }
  iVar3 = (int)((ulong)((long)plVar7 - (long)plVar1) >> 3);
  if (plVar5 == plVar2) {
    iVar3 = -1;
  }
  swapChildrenAt(this,iVar8,iVar3);
  return;
}

