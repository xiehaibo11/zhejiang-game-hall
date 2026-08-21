
/* fairygui::GTreeNode::setCell(fairygui::GComponent*) */

void __thiscall fairygui::GTreeNode::setCell(GTreeNode *this,GComponent *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x38);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(GComponent **)(this + 0x38) = param_1;
    if (param_1 != (GComponent *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      if (*(long *)(this + 0x38) != 0) {
        *(GTreeNode **)(*(long *)(this + 0x38) + 400) = this;
      }
    }
  }
  return;
}

