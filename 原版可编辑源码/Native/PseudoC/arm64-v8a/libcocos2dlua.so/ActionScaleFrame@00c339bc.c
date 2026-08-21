
/* cocostudio::ActionScaleFrame::ActionScaleFrame() */

void __thiscall cocostudio::ActionScaleFrame::ActionScaleFrame(ActionScaleFrame *this)

{
  undefined8 uVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined ***)this = &PTR__ActionMoveFrame_016c7b00;
  *(undefined4 *)(this + 0x24) = 1;
  return;
}

