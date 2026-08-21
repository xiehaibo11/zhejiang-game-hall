
/* fairygui::GTreeNode::numChildren() const */

ulong __thiscall fairygui::GTreeNode::numChildren(GTreeNode *this)

{
  return (ulong)(*(long *)(this + 0x60) - *(long *)(this + 0x58)) >> 3;
}

