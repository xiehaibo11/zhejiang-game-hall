
/* cocostudio::ActionNode::stopAction() */

void __thiscall cocostudio::ActionNode::stopAction(ActionNode *this)

{
  Action *pAVar1;
  
  pAVar1 = (Action *)(**(code **)(*(long *)this + 0x40))();
  if ((pAVar1 != (Action *)0x0) && (*(long *)(this + 0x40) != 0)) {
    cocos2d::Node::stopAction(pAVar1);
    return;
  }
  return;
}

