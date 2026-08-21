
/* cocos2d::Node::addChild(cocos2d::Node*) */

void __thiscall cocos2d::Node::addChild(Node *this,Node *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00f25540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x220))(this,param_1,uVar1,param_1 + 0x1a8);
  return;
}

