
/* cocos2d::ProtectedNode::reorderProtectedChild(cocos2d::Node*, int) */

void __thiscall
cocos2d::ProtectedNode::reorderProtectedChild(ProtectedNode *this,Node *param_1,int param_2)

{
  this[0x310] = (ProtectedNode)0x1;
  Node::updateOrderOfArrival(param_1);
                    /* WARNING: Could not recover jumptable at 0x00f394dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2);
  return;
}

