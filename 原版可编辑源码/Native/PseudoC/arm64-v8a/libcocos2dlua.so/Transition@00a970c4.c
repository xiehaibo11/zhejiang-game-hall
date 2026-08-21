
/* fairygui::Transition::Transition(fairygui::GComponent*) */

void __thiscall fairygui::Transition::Transition(Transition *this,GComponent *param_1)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(GComponent **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = (Transition)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  this[0xbc] = (Transition)0x0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined2 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__Transition_016a7528;
  *(undefined8 *)(this + 200) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}

