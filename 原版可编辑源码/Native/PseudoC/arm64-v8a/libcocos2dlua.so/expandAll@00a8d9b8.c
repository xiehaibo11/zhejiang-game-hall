
/* fairygui::GTree::expandAll(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::expandAll(GTree *this,GTreeNode *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  GTreeNode::setExpaned(param_1,true);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  for (puVar1 = *(undefined8 **)(param_1 + 0x58); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if (((GTreeNode *)*puVar1)[0x45] != (GTreeNode)0x0) {
      expandAll(this,(GTreeNode *)*puVar1);
    }
  }
  return;
}

