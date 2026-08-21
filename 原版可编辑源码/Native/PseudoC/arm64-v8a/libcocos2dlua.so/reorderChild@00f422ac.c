
/* cocos2d::SpriteBatchNode::reorderChild(cocos2d::Node*, int) */

void __thiscall
cocos2d::SpriteBatchNode::reorderChild(SpriteBatchNode *this,Node *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if (iVar1 == param_2) {
                    /* catch() { ... } // from try @ 00f421b4 with catch @ 00f422ec */
    return;
  }
                    /* catch() { ... } // from try @ 00f42198 with catch @ 00f422f0 */
  Node::reorderChild((Node *)this,param_1,param_2);
  return;
}

