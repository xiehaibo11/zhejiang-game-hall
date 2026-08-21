
/* fairygui::GTreeNode::setChildIndex(fairygui::GTreeNode*, int) */

void __thiscall fairygui::GTreeNode::setChildIndex(GTreeNode *this,GTreeNode *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  GTreeNode *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = *(long **)(this + 0x58);
  plVar2 = *(long **)(this + 0x60);
                    /* try { // try from 00a8f288 to 00b8f357 has its CatchHandler @ 00a8f288
                       catch() { ... } // from try @ 00a8f288 with catch @ 00a8f288
                       catch() { ... } // from try @ 00a8f3d8 with catch @ 00a8f288 */
  plVar6 = plVar2;
  plVar7 = plVar1;
  if (plVar1 != plVar2) {
    pGVar4 = (GTreeNode *)*plVar1;
    plVar5 = plVar1;
    while ((plVar6 = plVar5, plVar7 = plVar5, pGVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar2, plVar7 = plVar2, plVar2 != plVar5))) {
      pGVar4 = (GTreeNode *)*plVar5;
    }
  }
  iVar3 = (int)((ulong)((long)plVar7 - (long)plVar1) >> 3);
  if (plVar6 == plVar2) {
    iVar3 = -1;
  }
  moveChild(this,param_1,iVar3,param_2);
  return;
}

