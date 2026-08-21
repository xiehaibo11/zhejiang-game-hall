
/* fairygui::GTreeNode::swapChildren(fairygui::GTreeNode*, fairygui::GTreeNode*) */

void __thiscall
fairygui::GTreeNode::swapChildren(GTreeNode *this,GTreeNode *param_1,GTreeNode *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  GTreeNode *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
                    /* try { // try from 00a8f83c to 00b8f8d7 has its CatchHandler @ 00a8f6ec */
  plVar1 = *(long **)(this + 0x58);
  plVar2 = *(long **)(this + 0x60);
  if (plVar1 == plVar2) {
    iVar8 = -1;
    plVar5 = plVar2;
    plVar7 = plVar1;
  }
  else {
    pGVar4 = (GTreeNode *)*plVar1;
    plVar7 = plVar1;
    plVar5 = plVar1;
    if (pGVar4 == param_1) {
      iVar8 = 0;
                    /* catch() { ... } // from try @ 00a8f7f0 with catch @ 00a8f888 */
    }
    else {
      do {
        plVar7 = plVar7 + 1;
        plVar6 = plVar2;
        if (plVar2 == plVar7) break;
        plVar6 = plVar7;
      } while ((GTreeNode *)*plVar7 != param_1);
      iVar8 = (int)((ulong)((long)plVar6 - (long)plVar1) >> 3);
      if (plVar6 == plVar2) {
        iVar8 = -1;
      }
    }
                    /* catch() { ... } // from try @ 00a8f808 with catch @ 00a8f88c */
                    /* catch() { ... } // from try @ 00a8f7bc with catch @ 00a8f8bc */
    while ((plVar7 = plVar5, pGVar4 != param_2 &&
           (plVar6 = plVar5 + 1, plVar5 = plVar2, plVar7 = plVar2, plVar2 != plVar6))) {
      pGVar4 = (GTreeNode *)*plVar6;
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

