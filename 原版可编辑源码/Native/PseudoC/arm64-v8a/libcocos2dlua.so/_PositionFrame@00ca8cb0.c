
/* cocostudio::timeline::PositionFrame::~PositionFrame() */

void __thiscall cocostudio::timeline::PositionFrame::~PositionFrame(PositionFrame *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x30);
  *(void **)(this + 0x38) = pvVar1;
  *(undefined ***)this = &PTR__Frame_016cb660;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

