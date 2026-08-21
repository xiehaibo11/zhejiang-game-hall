
/* fairygui::GTreeNode::setExpaned(bool) */

void __thiscall fairygui::GTreeNode::setExpaned(GTreeNode *this,bool param_1)

{
  GTree *this_00;
  
                    /* catch() { ... } // from try @ 00a8ef28 with catch @ 00a8efc0 */
  if ((this[0x45] != (GTreeNode)0x0) && (this[0x44] != (GTreeNode)param_1)) {
                    /* catch() { ... } // from try @ 00a8ef40 with catch @ 00a8efc4 */
    this_00 = *(GTree **)(this + 0x28);
    this[0x44] = (GTreeNode)param_1;
    if (this_00 != (GTree *)0x0) {
      if (param_1) {
        GTree::afterExpanded(this_00,this);
        return;
      }
      GTree::afterCollapsed(this_00,this);
      return;
    }
  }
  return;
}

