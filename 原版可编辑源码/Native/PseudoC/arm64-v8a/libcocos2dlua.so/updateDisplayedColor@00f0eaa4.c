
/* cocos2d::Label::updateDisplayedColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::Label::updateDisplayedColor(Label *this,Color3B *param_1)

{
  long *plVar1;
  
  Node::updateDisplayedColor((Node *)this,param_1);
  plVar1 = *(long **)(this + 0x3c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x4c8))(plVar1,this + 0x21a);
  }
  plVar1 = *(long **)(this + 0x3c8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x4c8))(plVar1,this + 0x21a);
  }
  if (*(long *)(this + 0x690) != 0) {
    this[0x30c] = (Label)0x1;
  }
  plVar1 = *(long **)(this + 0x650);
  if (plVar1 != (long *)0x0) {
    do {
      (**(code **)(*(long *)plVar1[3] + 0x4c8))((long *)plVar1[3],this + 0x21a);
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}

