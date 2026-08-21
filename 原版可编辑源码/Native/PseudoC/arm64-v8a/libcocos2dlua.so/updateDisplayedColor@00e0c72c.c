
/* cocos2d::extension::ControlButton::updateDisplayedColor(cocos2d::Color3B const&) */

void __thiscall
cocos2d::extension::ControlButton::updateDisplayedColor(ControlButton *this,Color3B *param_1)

{
  long *plVar1;
  
  Node::updateDisplayedColor((Node *)this,param_1);
  for (plVar1 = *(long **)(this + 0x430); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x4c8))((long *)plVar1[3],param_1);
  }
  for (plVar1 = *(long **)(this + 0x408); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x4c8))((long *)plVar1[3],param_1);
  }
  return;
}

