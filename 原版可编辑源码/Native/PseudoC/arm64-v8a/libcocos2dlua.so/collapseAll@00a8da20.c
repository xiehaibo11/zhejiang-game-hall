
/* fairygui::GTree::collapseAll(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::collapseAll(GTree *this,GTreeNode *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(GTreeNode **)(this + 1000) != param_1) {
    GTreeNode::setExpaned(param_1,false);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  for (puVar1 = *(undefined8 **)(param_1 + 0x58); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if (((GTreeNode *)*puVar1)[0x45] != (GTreeNode)0x0) {
      collapseAll(this,(GTreeNode *)*puVar1);
    }
  }
  return;
}

