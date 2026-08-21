
/* cocos2d::Label::updateDisplayedOpacity(unsigned char) */

void __thiscall cocos2d::Label::updateDisplayedOpacity(Label *this,uchar param_1)

{
  long *plVar1;
  
  Node::updateDisplayedOpacity((Node *)this,param_1);
  plVar1 = *(long **)(this + 0x3c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x498))(plVar1,this[0x218]);
    plVar1 = *(long **)(this + 0x3c8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x498))(plVar1,this[0x218]);
    }
  }
  for (plVar1 = *(long **)(this + 0x650); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x498))((long *)plVar1[3],this[0x218]);
  }
  return;
}

