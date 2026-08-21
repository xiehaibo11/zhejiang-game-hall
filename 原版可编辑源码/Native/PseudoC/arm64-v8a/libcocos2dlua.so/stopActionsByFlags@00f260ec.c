
/* cocos2d::Node::stopActionsByFlags(unsigned int) */

void __thiscall cocos2d::Node::stopActionsByFlags(Node *this,uint param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00f26100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x1e8) + 0x40))(*(long **)(this + 0x1e8),param_1,this);
    return;
  }
  return;
}

