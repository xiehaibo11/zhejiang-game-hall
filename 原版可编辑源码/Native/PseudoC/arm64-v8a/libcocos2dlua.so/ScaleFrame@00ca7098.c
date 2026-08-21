
/* cocostudio::timeline::ScaleFrame::ScaleFrame() */

void __thiscall cocostudio::timeline::ScaleFrame::ScaleFrame(ScaleFrame *this)

{
  undefined8 uVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(this + 0x28) = 1;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__Frame_016cbba0;
  *(undefined8 *)(this + 0x58) = uVar1;
  return;
}

