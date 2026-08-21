
/* non-virtual thunk to cocosbuilder::CCBSetSpriteFrame::~CCBSetSpriteFrame() */

void __thiscall cocosbuilder::CCBSetSpriteFrame::~CCBSetSpriteFrame(CCBSetSpriteFrame *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__CCBSetSpriteFrame_016cf118;
  *(undefined ***)this = &PTR_clone_016cf178;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  cocos2d::Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

