
/* cocos2d::ProtectedNode::removeProtectedChildByTag(int, bool) */

void __thiscall
cocos2d::ProtectedNode::removeProtectedChildByTag(ProtectedNode *this,int param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x548))(this,param_1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00f39430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x550))(this,lVar1,param_2);
    return;
  }
                    /* try { // try from 00f39438 to 010395c3 has its CatchHandler @ 00f39438
                       catch() { ... } // from try @ 00f39438 with catch @ 00f39438
                       catch() { ... } // from try @ 00f395dc with catch @ 00f39438
                       catch() { ... } // from try @ 00f39638 with catch @ 00f39438 */
  return;
}

