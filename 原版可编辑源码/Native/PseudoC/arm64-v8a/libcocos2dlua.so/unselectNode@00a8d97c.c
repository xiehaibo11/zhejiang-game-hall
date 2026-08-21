
/* fairygui::GTree::unselectNode(fairygui::GTreeNode*) */

void __thiscall fairygui::GTree::unselectNode(GTree *this,GTreeNode *param_1)

{
  int iVar1;
  
  if (*(GObject **)(param_1 + 0x38) != (GObject *)0x0) {
    iVar1 = GComponent::getChildIndex((GComponent *)this,*(GObject **)(param_1 + 0x38));
    GList::removeSelection((GList *)this,iVar1);
    return;
  }
  return;
}

