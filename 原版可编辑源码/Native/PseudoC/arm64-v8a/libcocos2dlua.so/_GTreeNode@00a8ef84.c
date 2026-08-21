
/* fairygui::GTreeNode::~GTreeNode() */

void __thiscall fairygui::GTreeNode::~GTreeNode(GTreeNode *this)

{
  ~GTreeNode(this);
  operator_delete(this);
  return;
}

