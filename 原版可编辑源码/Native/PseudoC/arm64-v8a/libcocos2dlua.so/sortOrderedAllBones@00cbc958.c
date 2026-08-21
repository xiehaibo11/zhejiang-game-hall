
/* cocostudio::timeline::SkeletonNode::sortOrderedAllBones() */

void __thiscall cocostudio::timeline::SkeletonNode::sortOrderedAllBones(SkeletonNode *this)

{
  long lVar1;
  _lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ a_Stack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::
  __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
            (*(BoneNode ***)(this + 0x5a0),*(BoneNode ***)(this + 0x5a8),a_Stack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

