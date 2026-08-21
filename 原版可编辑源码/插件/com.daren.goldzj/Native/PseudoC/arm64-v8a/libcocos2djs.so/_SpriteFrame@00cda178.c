
/* cocos2d::middleware::SpriteFrame::~SpriteFrame() */

void __thiscall cocos2d::middleware::SpriteFrame::~SpriteFrame(SpriteFrame *this)

{
  *(undefined ***)this = &PTR__SpriteFrame_01c8e1d0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

