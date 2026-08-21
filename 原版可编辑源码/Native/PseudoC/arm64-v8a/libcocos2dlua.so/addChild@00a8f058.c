
/* fairygui::GTreeNode::addChild(fairygui::GTreeNode*) */

void __thiscall fairygui::GTreeNode::addChild(GTreeNode *this,GTreeNode *param_1)

{
  addChildAt(this,param_1,(int)((ulong)(*(long *)(this + 0x60) - *(long *)(this + 0x58)) >> 3));
  return;
}

