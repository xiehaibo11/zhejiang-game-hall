
/* non-virtual thunk to cocosbuilder::CCBSetSpriteFrame::~CCBSetSpriteFrame() */

void __thiscall cocosbuilder::CCBSetSpriteFrame::~CCBSetSpriteFrame(CCBSetSpriteFrame *this)

{
  *(undefined ***)(this + -0x28) = &PTR__CCBSetSpriteFrame_016cf118;
  *(undefined ***)this = &PTR_clone_016cf178;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  cocos2d::Action::~Action((Action *)(this + -0x28));
  return;
}

