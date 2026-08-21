
/* cocosbuilder::CCBSetSpriteFrame::~CCBSetSpriteFrame() */

void __thiscall cocosbuilder::CCBSetSpriteFrame::~CCBSetSpriteFrame(CCBSetSpriteFrame *this)

{
  *(undefined ***)this = &PTR__CCBSetSpriteFrame_016cf118;
  *(undefined ***)(this + 0x28) = &PTR_clone_016cf178;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  cocos2d::Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

