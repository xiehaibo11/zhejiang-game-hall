
/* fairygui::GTreeNode::removeChild(fairygui::GTreeNode*) */

void __thiscall fairygui::GTreeNode::removeChild(GTreeNode *this,GTreeNode *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(this + 0x58);
  puVar3 = *(undefined8 **)(this + 0x60);
  if (puVar3 != puVar2) {
    puVar5 = puVar2;
    if ((GTreeNode *)*puVar2 != param_1) {
      do {
        if (puVar3 + -1 == puVar5) {
          return;
        }
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 1;
      } while ((GTreeNode *)*puVar1 != param_1);
    }
                    /* try { // try from 00a8eef4 to 00b8ef27 has its CatchHandler @ 00a8eff4 */
    if ((puVar5 != puVar3) &&
       (iVar4 = (int)((ulong)((long)puVar5 - (long)puVar2) >> 3), iVar4 != -1)) {
      removeChildAt(this,iVar4);
      return;
    }
  }
  return;
}

