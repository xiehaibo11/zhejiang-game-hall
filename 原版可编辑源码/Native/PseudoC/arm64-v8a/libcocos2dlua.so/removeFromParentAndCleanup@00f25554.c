
/* cocos2d::Node::removeFromParentAndCleanup(bool) */

void __thiscall cocos2d::Node::removeFromParentAndCleanup(Node *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 400);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f25570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x280))(plVar1,this,param_1);
    return;
  }
                    /* try { // try from 00f25574 to 0102557b has its CatchHandler @ 00f25758 */
  return;
}

