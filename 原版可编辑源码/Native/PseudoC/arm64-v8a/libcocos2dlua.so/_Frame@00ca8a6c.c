
/* cocostudio::timeline::Frame::~Frame() */

void __thiscall cocostudio::timeline::Frame::~Frame(Frame *this)

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
  return;
}

