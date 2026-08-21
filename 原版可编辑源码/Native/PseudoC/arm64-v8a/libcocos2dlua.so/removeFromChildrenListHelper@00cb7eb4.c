
/* cocostudio::timeline::BoneNode::removeFromChildrenListHelper(cocos2d::Node*) */

void __thiscall
cocostudio::timeline::BoneNode::removeFromChildrenListHelper(BoneNode *this,Node *param_1)

{
  Node *pNVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != (Node *)0x0) {
    pNVar1 = (Node *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,&typeinfo,0);
    if (pNVar1 == (Node *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x600);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x5f0);
      param_1 = pNVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00cb7f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,param_1);
    return;
  }
  return;
}

