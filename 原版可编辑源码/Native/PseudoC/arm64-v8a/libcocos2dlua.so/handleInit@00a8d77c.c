
/* fairygui::GTree::handleInit() */

void __thiscall fairygui::GTree::handleInit(GTree *this)

{
  GTreeNode *this_00;
  
  GComponent::handleInit((GComponent *)this);
  this_00 = (GTreeNode *)GTreeNode::create(true,(basic_string *)&cocos2d::STD_STRING_EMPTY);
  *(GTreeNode **)(this + 1000) = this_00;
  GTreeNode::setTree(this_00,this);
  GTreeNode::setExpaned(*(GTreeNode **)(this + 1000),true);
  cocos2d::Ref::retain(*(Ref **)(this + 1000));
  return;
}

