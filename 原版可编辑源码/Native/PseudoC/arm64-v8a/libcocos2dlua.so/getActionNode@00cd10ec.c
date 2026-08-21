
/* cocostudio::ActionNode::getActionNode() */

void __thiscall cocostudio::ActionNode::getActionNode(ActionNode *this)

{
  if (*(long *)(this + 0x48) != 0) {
    __dynamic_cast(*(long *)(this + 0x48),&cocos2d::Ref::typeinfo,&cocos2d::Node::typeinfo,0);
    return;
  }
  return;
}

