
/* fairygui::GTree::afterMoved(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::afterMoved(GTree *this,GTreeNode *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  GObject *pGVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = GComponent::getChildIndex((GComponent *)this,*(GObject **)(param_1 + 0x38));
  if (param_1[0x45] == (GTreeNode)0x0) {
    iVar8 = iVar2 + 1;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x40);
    iVar3 = GComponent::numChildren((GComponent *)this);
    iVar4 = iVar2;
    do {
      iVar4 = iVar4 + 1;
                    /* try { // try from 00a8e4d8 to 00b8e523 has its CatchHandler @ 00a8e4d8
                       catch() { ... } // from try @ 00a8e4d8 with catch @ 00a8e4d8
                       catch() { ... } // from try @ 00a8e528 with catch @ 00a8e4d8 */
      iVar8 = iVar3;
      if (iVar3 <= iVar4) break;
      lVar6 = GComponent::getChildAt((GComponent *)this,iVar4);
      iVar8 = iVar4;
    } while (iVar9 < *(int *)(*(long *)(lVar6 + 0x1c0) + 0x40));
  }
  lVar6 = GTreeNode::getPrevSibling(param_1);
  if (lVar6 == 0) {
    pGVar7 = *(GObject **)(*(long *)(param_1 + 0x30) + 0x38);
  }
  else {
    pGVar7 = *(GObject **)(lVar6 + 0x38);
  }
  if (pGVar7 == (GObject *)0x0) {
    iVar4 = 0;
  }
  else {
                    /* try { // try from 00a8e524 to 00b8e527 has its CatchHandler @ 00a8e55c */
    iVar4 = GComponent::getChildIndex((GComponent *)this,pGVar7);
                    /* try { // try from 00a8e528 to 00b8e56f has its CatchHandler @ 00a8e4d8 */
    iVar4 = iVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  iVar5 = GComponent::numChildren((GComponent *)this);
  iVar9 = iVar4;
  if (iVar4 < iVar5) {
    do {
                    /* catch() { ... } // from try @ 00a8e524 with catch @ 00a8e55c */
      lVar6 = GComponent::getChildAt((GComponent *)this,iVar4);
      iVar4 = iVar4 + 1;
                    /* try { // try from 00a8e570 to 00b8ea8f has its CatchHandler @ 00a8e570
                       catch() { ... } // from try @ 00a8e570 with catch @ 00a8e570
                       catch() { ... } // from try @ 00a8eb10 with catch @ 00a8e570 */
      iVar1 = *(int *)(*(long *)(lVar6 + 0x1c0) + 0x40);
      if (iVar3 < iVar1) {
        iVar9 = iVar9 + 1;
      }
    } while ((iVar4 < iVar5) && (iVar3 < iVar1));
  }
  if (iVar9 < iVar2) {
    if (0 < iVar8 - iVar2) {
      do {
        pGVar7 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar2);
        GComponent::setChildIndex((GComponent *)this,pGVar7,iVar9);
        iVar2 = iVar2 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar8 - iVar2) {
    do {
      pGVar7 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar2);
      GComponent::setChildIndex((GComponent *)this,pGVar7,iVar9);
      iVar8 = iVar8 + -1;
    } while (iVar2 != iVar8);
  }
  return;
}

