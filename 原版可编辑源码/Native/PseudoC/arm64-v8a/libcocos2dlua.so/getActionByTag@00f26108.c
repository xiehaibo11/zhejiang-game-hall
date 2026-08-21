
/* cocos2d::Node::getActionByTag(int) */

void __thiscall cocos2d::Node::getActionByTag(Node *this,int param_1)

{
                    /* try { // try from 00f2610c to 0102629b has its CatchHandler @ 00f2610c
                       catch() { ... } // from try @ 00f2610c with catch @ 00f2610c
                       catch() { ... } // from try @ 00f262b4 with catch @ 00f2610c
                       catch() { ... } // from try @ 00f26938 with catch @ 00f2610c
                       catch() { ... } // from try @ 00f26a5c with catch @ 00f2610c */
                    /* WARNING: Could not recover jumptable at 0x00f26118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x1e8) + 0x48))(*(long **)(this + 0x1e8),param_1,this);
  return;
}

