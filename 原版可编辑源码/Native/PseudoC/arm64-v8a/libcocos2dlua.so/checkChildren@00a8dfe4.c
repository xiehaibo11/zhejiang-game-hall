
/* fairygui::GTree::checkChildren(fairygui::GTreeNode*, int) */

int __thiscall fairygui::GTree::checkChildren(GTree *this,GTreeNode *param_1,int param_2)

{
  GTreeNode GVar1;
  int iVar2;
  GTreeNode *pGVar3;
  long lVar4;
  int iVar5;
  
  iVar2 = GTreeNode::numChildren(param_1);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      param_2 = param_2 + 1;
      pGVar3 = (GTreeNode *)GTreeNode::getChildAt(param_1,iVar5);
      lVar4 = *(long *)(pGVar3 + 0x38);
      if (lVar4 == 0) {
        createCell(this,pGVar3);
        lVar4 = *(long *)(pGVar3 + 0x38);
        if (*(long *)(lVar4 + 0xa0) == 0) goto LAB_00a8e090;
LAB_00a8e050:
        GVar1 = pGVar3[0x45];
      }
      else {
        if (*(long *)(lVar4 + 0xa0) != 0) goto LAB_00a8e050;
LAB_00a8e090:
        (**(code **)(*(long *)this + 0xb0))(this,lVar4,param_2);
        GVar1 = pGVar3[0x45];
      }
      if ((GVar1 != (GTreeNode)0x0) && (pGVar3[0x44] != (GTreeNode)0x0)) {
        param_2 = checkChildren(this,pGVar3,param_2);
      }
                    /* catch() { ... } // from try @ 00a8df74 with catch @ 00a8e020 */
      iVar5 = iVar5 + 1;
                    /* catch() { ... } // from try @ 00a8df58 with catch @ 00a8e024
                       catch() { ... } // from try @ 00a8dfcc with catch @ 00a8e024 */
    } while (iVar2 != iVar5);
  }
                    /* try { // try from 00a8e0c0 to 00b8e10f has its CatchHandler @ 00a8e0c0
                       catch() { ... } // from try @ 00a8e0c0 with catch @ 00a8e0c0
                       catch() { ... } // from try @ 00a8e20c with catch @ 00a8e0c0
                       catch() { ... } // from try @ 00a8e270 with catch @ 00a8e0c0
                       catch() { ... } // from try @ 00a8e2f8 with catch @ 00a8e0c0 */
  return param_2;
}

