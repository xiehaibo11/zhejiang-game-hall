
/* fairygui::GTree::onExpandedStateChanged(fairygui::EventContext*) */

void __thiscall fairygui::GTree::onExpandedStateChanged(GTree *this,EventContext *param_1)

{
  GTreeNode::setExpaned
            (*(GTreeNode **)(*(long *)(*(long *)param_1 + 0x68) + 0x1c0),
             *(int *)(*(long *)param_1 + 0x70) == 1);
  return;
}

