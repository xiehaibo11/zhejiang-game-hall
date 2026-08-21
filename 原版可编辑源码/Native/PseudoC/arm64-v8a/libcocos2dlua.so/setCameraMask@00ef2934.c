
/* cocos2d::ClippingNode::setCameraMask(unsigned short, bool) */

void __thiscall cocos2d::ClippingNode::setCameraMask(ClippingNode *this,ushort param_1,bool param_2)

{
  long *plVar1;
  
  Node::setCameraMask((Node *)this,param_1,param_2);
  plVar1 = *(long **)(this + 0x2f8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ef297c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4f0))(plVar1,param_1,param_2);
    return;
  }
  return;
}

