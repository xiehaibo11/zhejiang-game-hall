
/* fairygui::GTreeNode::getChildIndex(fairygui::GTreeNode const*) const */

undefined4 __thiscall fairygui::GTreeNode::getChildIndex(GTreeNode *this,GTreeNode *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  GTreeNode *pGVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = *(long **)(this + 0x58);
  plVar2 = *(long **)(this + 0x60);
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
  uVar3 = (undefined4)((ulong)((long)plVar7 - (long)plVar1) >> 3);
  if (plVar6 == plVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

