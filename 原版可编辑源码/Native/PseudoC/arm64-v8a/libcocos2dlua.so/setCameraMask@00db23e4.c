
/* cocos2d::ui::Layout::setCameraMask(unsigned short, bool) */

void __thiscall cocos2d::ui::Layout::setCameraMask(Layout *this,ushort param_1,bool param_2)

{
  long *plVar1;
  
  ProtectedNode::setCameraMask((ProtectedNode *)this,param_1,param_2);
  plVar1 = *(long **)(this + 0x5b0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00db242c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4f0))(plVar1,param_1,param_2);
    return;
  }
  return;
}

