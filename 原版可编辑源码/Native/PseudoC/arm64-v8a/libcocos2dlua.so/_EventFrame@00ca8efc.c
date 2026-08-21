
/* cocostudio::timeline::EventFrame::~EventFrame() */

void __thiscall cocostudio::timeline::EventFrame::~EventFrame(EventFrame *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__EventFrame_016cbf60;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  pvVar1 = *(void **)(this + 0x30);
  *(void **)(this + 0x38) = pvVar1;
  *(undefined ***)this = &PTR__Frame_016cb660;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

