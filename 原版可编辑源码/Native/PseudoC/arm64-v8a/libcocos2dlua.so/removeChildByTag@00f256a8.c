
/* cocos2d::Node::removeChildByTag(int, bool) */

void __thiscall cocos2d::Node::removeChildByTag(Node *this,int param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x228))(this,param_1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00f256e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x280))(this,lVar1,param_2);
    return;
  }
  return;
}

