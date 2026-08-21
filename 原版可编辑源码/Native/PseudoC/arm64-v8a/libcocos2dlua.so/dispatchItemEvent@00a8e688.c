
/* fairygui::GTree::dispatchItemEvent(fairygui::GObject*, fairygui::EventContext*) */

void __thiscall
fairygui::GTree::dispatchItemEvent(GTree *this,GObject *param_1,EventContext *param_2)

{
  GTreeNode *this_00;
  
  if ((((*(int *)(this + 0x3f0) != 0) &&
       (this_00 = *(GTreeNode **)(param_1 + 0x1c0), this_00 != (GTreeNode *)0x0)) &&
      (this[0x3f4] == *(GTree *)(this_00 + 0x44))) &&
     ((*(int *)(this + 0x3f0) != 2 || (*(int *)(*(long *)(param_2 + 8) + 0x1c) == 2)))) {
    GTreeNode::setExpaned(this_00,*(GTree *)(this_00 + 0x44) == (GTree)0x0);
  }
  GList::dispatchItemEvent((GList *)this,param_1,param_2);
  return;
}

