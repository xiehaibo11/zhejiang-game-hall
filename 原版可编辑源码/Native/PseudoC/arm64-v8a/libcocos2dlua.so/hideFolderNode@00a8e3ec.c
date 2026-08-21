
/* fairygui::GTree::hideFolderNode(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::hideFolderNode(GTree *this,GTreeNode *param_1)

{
  int iVar1;
  GTreeNode *pGVar2;
  GObject *pGVar3;
  int iVar4;
  
                    /* catch() { ... } // from try @ 00a8e1dc with catch @ 00a8e3f0
                       catch() { ... } // from try @ 00a8e2f0 with catch @ 00a8e3f0 */
                    /* catch() { ... } // from try @ 00a8e1a0 with catch @ 00a8e3f4
                       catch() { ... } // from try @ 00a8e25c with catch @ 00a8e3f4 */
  iVar1 = GTreeNode::numChildren(param_1);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      pGVar2 = (GTreeNode *)GTreeNode::getChildAt(param_1,iVar4);
      pGVar3 = *(GObject **)(pGVar2 + 0x38);
      if ((pGVar3 != (GObject *)0x0) && (*(long *)(pGVar3 + 0xa0) != 0)) {
        GComponent::removeChild((GComponent *)this,pGVar3);
      }
                    /* catch() { ... } // from try @ 00a8e110 with catch @ 00a8e460
                       catch() { ... } // from try @ 00a8e238 with catch @ 00a8e460 */
      if ((pGVar2[0x45] != (GTreeNode)0x0) && (pGVar2[0x44] != (GTreeNode)0x0)) {
        hideFolderNode(this,pGVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}

