
/* fairygui::GTree::selectNode(fairygui::GTreeNode*, bool) */

void __thiscall fairygui::GTree::selectNode(GTree *this,GTreeNode *param_1,bool param_2)

{
  int iVar1;
  GTreeNode *this_00;
  
  for (this_00 = *(GTreeNode **)(param_1 + 0x30);
      (this_00 != (GTreeNode *)0x0 && (this_00 != *(GTreeNode **)(this + 1000)));
      this_00 = *(GTreeNode **)(this_00 + 0x30)) {
    GTreeNode::setExpaned(this_00,true);
  }
  if (*(GObject **)(param_1 + 0x38) == (GObject *)0x0) {
    return;
  }
  iVar1 = GComponent::getChildIndex((GComponent *)this,*(GObject **)(param_1 + 0x38));
  GList::addSelection((GList *)this,iVar1,param_2);
  return;
}

