
/* cocos2d::SpriteFrame::~SpriteFrame() */

void __thiscall cocos2d::SpriteFrame::~SpriteFrame(SpriteFrame *this)

{
  *(undefined ***)this = &PTR__SpriteFrame_017110f8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01711120;
  if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x90));
  }
  PolygonInfo::~PolygonInfo((PolygonInfo *)(this + 0xb0));
  if (((byte)this[0x98] & 1) != 0) {
    operator_delete(*(void **)(this + 0xa8));
  }
  Ref::~Ref((Ref *)this);
  return;
}

