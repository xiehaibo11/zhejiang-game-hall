
/* fairygui::GTree::removeNode(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::removeNode(GTree *this,GTreeNode *param_1)

{
  int iVar1;
  GTreeNode *pGVar2;
  GObject *pGVar3;
  int iVar4;
  
  pGVar3 = *(GObject **)(param_1 + 0x38);
  if (pGVar3 != (GObject *)0x0) {
    if (*(long *)(pGVar3 + 0xa0) != 0) {
      GComponent::removeChild((GComponent *)this,pGVar3);
      pGVar3 = *(GObject **)(param_1 + 0x38);
    }
    GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar3);
    *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1c0) = 0;
                    /* try { // try from 00a8e110 to 00b8e143 has its CatchHandler @ 00a8e460 */
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_1[0x45] != (GTreeNode)0x0) && (iVar1 = GTreeNode::numChildren(param_1), 0 < iVar1)) {
    iVar4 = 0;
    do {
      pGVar2 = (GTreeNode *)GTreeNode::getChildAt(param_1,iVar4);
      removeNode(this,pGVar2);
      iVar4 = iVar4 + 1;
                    /* try { // try from 00a8e150 to 00b8e163 has its CatchHandler @ 00a8e3b4 */
    } while (iVar1 != iVar4);
  }
  return;
}

