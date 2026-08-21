
/* cocos2d::ProtectedNode::sortAllProtectedChildren() */

void __thiscall cocos2d::ProtectedNode::sortAllProtectedChildren(ProtectedNode *this)

{
  long lVar1;
  _lambda_cocos2d__Node__cocos2d__Node___1_ a_Stack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x310] != (ProtectedNode)0x0) {
    std::__ndk1::
    __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (*(Node ***)(this + 0x2f8),*(Node ***)(this + 0x300),a_Stack_30);
    this[0x310] = (ProtectedNode)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

