
/* cocostudio::timeline::BoneNode::sortAllChildren() */

void __thiscall cocostudio::timeline::BoneNode::sortAllChildren(BoneNode *this)

{
  long lVar1;
  _lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ a_Stack_38 [8];
  _lambda_cocos2d__Node__cocos2d__Node___1_ a_Stack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x1fb] != (BoneNode)0x0) {
    std::__ndk1::
    __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (*(BoneNode ***)(this + 0x378),*(BoneNode ***)(this + 0x380),a_Stack_38);
    std::__ndk1::
    __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (*(Node ***)(this + 0x390),*(Node ***)(this + 0x398),a_Stack_30);
    cocos2d::Node::sortAllChildren((Node *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

