
/* fairygui::GTree::afterInserted(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::afterInserted(GTree *this,GTreeNode *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  GObject *pGVar8;
  int iVar9;
  undefined8 local_68;
  GTreeNode *pGStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x38) == 0) {
    createCell(this,param_1);
  }
  lVar6 = GTreeNode::getPrevSibling(param_1);
  if (lVar6 == 0) {
    pGVar8 = *(GObject **)(*(long *)(param_1 + 0x30) + 0x38);
  }
  else {
    pGVar8 = *(GObject **)(lVar6 + 0x38);
  }
  if (pGVar8 == (GObject *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = GComponent::getChildIndex((GComponent *)this,pGVar8);
    iVar4 = iVar4 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar5 = GComponent::numChildren((GComponent *)this);
  iVar9 = iVar4;
  if (iVar4 < iVar5) {
    do {
      lVar6 = GComponent::getChildAt((GComponent *)this,iVar4);
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(*(long *)(lVar6 + 0x1c0) + 0x40);
      if (iVar1 < iVar2) {
        iVar9 = iVar9 + 1;
      }
    } while ((iVar4 < iVar5) && (iVar1 < iVar2));
  }
  (**(code **)(*(long *)this + 0xb0))(this,*(undefined8 *)(param_1 + 0x38),iVar9);
  plVar7 = *(long **)(this + 0x3a0);
  if (plVar7 != (long *)0x0) {
    local_68 = *(undefined8 *)(param_1 + 0x38);
    pGStack_60 = param_1;
    (**(code **)(*plVar7 + 0x30))(plVar7,&pGStack_60,&local_68);
  }
  if ((param_1[0x45] != (GTreeNode)0x0) && (param_1[0x44] != (GTreeNode)0x0)) {
    checkChildren(this,param_1,iVar9);
  }
                    /* try { // try from 00a8df08 to 00b8df57 has its CatchHandler @ 00a8df08
                       catch() { ... } // from try @ 00a8df08 with catch @ 00a8df08
                       catch() { ... } // from try @ 00a8df98 with catch @ 00a8df08
                       catch() { ... } // from try @ 00a8dfe0 with catch @ 00a8df08 */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

