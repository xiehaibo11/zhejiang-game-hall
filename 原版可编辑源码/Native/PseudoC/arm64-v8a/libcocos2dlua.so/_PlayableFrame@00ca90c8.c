
/* cocostudio::timeline::PlayableFrame::~PlayableFrame() */

void __thiscall cocostudio::timeline::PlayableFrame::~PlayableFrame(PlayableFrame *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__PlayableFrame_016cc1a0;
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
  operator_delete(this);
  return;
}

