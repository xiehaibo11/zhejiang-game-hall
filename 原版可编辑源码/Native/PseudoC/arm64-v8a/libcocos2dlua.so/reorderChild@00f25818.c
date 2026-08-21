
/* cocos2d::Node::reorderChild(cocos2d::Node*, int) */

void __thiscall cocos2d::Node::reorderChild(Node *this,Node *param_1,int param_2)

{
  this[0x1fb] = (Node)0x1;
  s_globalOrderOfArrival = s_globalOrderOfArrival + 1;
  *(int *)(param_1 + 0x168) = s_globalOrderOfArrival;
                    /* WARNING: Could not recover jumptable at 0x00f25848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2);
  return;
}

