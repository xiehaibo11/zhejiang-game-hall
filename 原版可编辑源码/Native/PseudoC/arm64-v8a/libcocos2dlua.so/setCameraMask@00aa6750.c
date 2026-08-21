
/* fairygui::FUIContainer::setCameraMask(unsigned short, bool) */

void __thiscall
fairygui::FUIContainer::setCameraMask(FUIContainer *this,ushort param_1,bool param_2)

{
  long *plVar1;
  
  cocos2d::Node::setCameraMask((Node *)this,param_1,param_2);
  if ((*(long **)(this + 0x308) != (long *)0x0) &&
     (plVar1 = (long *)**(long **)(this + 0x308), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00aa67a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4f0))(plVar1,param_1,param_2);
    return;
  }
  return;
}

