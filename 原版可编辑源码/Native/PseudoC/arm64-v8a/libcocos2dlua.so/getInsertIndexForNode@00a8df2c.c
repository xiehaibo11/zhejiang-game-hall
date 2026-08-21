
/* fairygui::GTree::getInsertIndexForNode(fairygui::GTreeNode*) */

int __thiscall fairygui::GTree::getInsertIndexForNode(GTree *this,GTreeNode *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  GObject *pGVar6;
  
  lVar5 = GTreeNode::getPrevSibling(param_1);
  if (lVar5 == 0) {
    pGVar6 = *(GObject **)(*(long *)(param_1 + 0x30) + 0x38);
  }
  else {
    pGVar6 = *(GObject **)(lVar5 + 0x38);
                    /* try { // try from 00a8df58 to 00b8df6f has its CatchHandler @ 00a8e024 */
  }
                    /* try { // try from 00a8df74 to 00b8df97 has its CatchHandler @ 00a8e020 */
  if (pGVar6 == (GObject *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = GComponent::getChildIndex((GComponent *)this,pGVar6);
    iVar3 = iVar3 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar4 = GComponent::numChildren((GComponent *)this);
  iVar1 = iVar3;
                    /* try { // try from 00a8df98 to 00b8dfcb has its CatchHandler @ 00a8df08 */
  while ((iVar1 < iVar4 &&
         (lVar5 = GComponent::getChildAt((GComponent *)this,iVar1),
         iVar2 < *(int *)(*(long *)(lVar5 + 0x1c0) + 0x40)))) {
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 1;
  }
                    /* try { // try from 00a8dfcc to 00b8dfdf has its CatchHandler @ 00a8e024 */
                    /* try { // try from 00a8dfe0 to 00b8e03f has its CatchHandler @ 00a8df08 */
  return iVar3;
}

