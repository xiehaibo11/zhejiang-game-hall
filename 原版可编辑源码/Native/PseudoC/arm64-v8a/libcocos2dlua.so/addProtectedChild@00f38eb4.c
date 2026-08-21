
/* cocos2d::ProtectedNode::addProtectedChild(cocos2d::Node*, int) */

void __thiscall
cocos2d::ProtectedNode::addProtectedChild(ProtectedNode *this,Node *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00f38f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,param_1,param_2,uVar1);
  return;
}

