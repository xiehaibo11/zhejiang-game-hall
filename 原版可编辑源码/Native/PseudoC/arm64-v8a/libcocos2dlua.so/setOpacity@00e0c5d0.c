
/* cocos2d::extension::ControlButton::setOpacity(unsigned char) */

void __thiscall cocos2d::extension::ControlButton::setOpacity(ControlButton *this,uchar param_1)

{
  long *plVar1;
  
  Node::setOpacity((Node *)this,param_1);
  for (plVar1 = *(long **)(this + 0x430); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x490))((long *)plVar1[3],param_1);
  }
  for (plVar1 = *(long **)(this + 0x408); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x490))((long *)plVar1[3],param_1);
  }
  return;
}

