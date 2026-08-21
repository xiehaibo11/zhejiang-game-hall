
/* cocostudio::timeline::TextureFrame::~TextureFrame() */

void __thiscall cocostudio::timeline::TextureFrame::~TextureFrame(TextureFrame *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__TextureFrame_016cb7e0;
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
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

