
/* fairygui::GTreeNode::swapChildrenAt(int, int) */

void __thiscall fairygui::GTreeNode::swapChildrenAt(GTreeNode *this,int param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  GTreeNode *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  GTreeNode *pGVar8;
  
  plVar1 = *(long **)(this + 0x58);
  plVar2 = *(long **)(this + 0x60);
  pGVar8 = (GTreeNode *)plVar1[param_2];
  plVar6 = plVar1;
  if (plVar1 != plVar2) {
    pGVar4 = (GTreeNode *)*plVar1;
    plVar7 = plVar1;
    while ((plVar6 = plVar7, pGVar4 != (GTreeNode *)plVar1[param_1] &&
           (plVar7 = plVar7 + 1, plVar6 = plVar2, plVar2 != plVar7))) {
      pGVar4 = (GTreeNode *)*plVar7;
    }
  }
  iVar3 = (int)((ulong)((long)plVar6 - (long)plVar1) >> 3);
  if (plVar6 == plVar2) {
    iVar3 = -1;
  }
  moveChild(this,(GTreeNode *)plVar1[param_1],iVar3,param_2);
  plVar1 = *(long **)(this + 0x58);
  plVar2 = *(long **)(this + 0x60);
  plVar6 = plVar2;
  plVar7 = plVar1;
  if (plVar1 != plVar2) {
    pGVar4 = (GTreeNode *)*plVar1;
    plVar5 = plVar1;
    while ((plVar6 = plVar5, plVar7 = plVar5, pGVar4 != pGVar8 &&
           (plVar5 = plVar5 + 1, plVar6 = plVar2, plVar7 = plVar2, plVar2 != plVar5))) {
      pGVar4 = (GTreeNode *)*plVar5;
    }
  }
  iVar3 = (int)((ulong)((long)plVar7 - (long)plVar1) >> 3);
  if (plVar6 == plVar2) {
    iVar3 = -1;
  }
  moveChild(this,pGVar8,iVar3,param_1);
  return;
}

