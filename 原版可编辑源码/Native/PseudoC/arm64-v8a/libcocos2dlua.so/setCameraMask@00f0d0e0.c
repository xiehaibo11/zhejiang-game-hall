
/* cocos2d::Label::setCameraMask(unsigned short, bool) */

void __thiscall cocos2d::Label::setCameraMask(Label *this,ushort param_1,bool param_2)

{
  long *plVar1;
  
  Node::setCameraMask((Node *)this,param_1,param_2);
  plVar1 = *(long **)(this + 0x3c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x4f0))(plVar1,param_1,param_2);
  }
  plVar1 = *(long **)(this + 0x3c8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f0d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4f0))(plVar1,param_1,param_2);
    return;
  }
  return;
}

