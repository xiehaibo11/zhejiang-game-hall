
/* cocosbuilder::CCBSetSpriteFrame::create(cocos2d::SpriteFrame*) */

Action * cocosbuilder::CCBSetSpriteFrame::create(SpriteFrame *param_1)

{
  Action *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(SpriteFrame **)(this + 0x58) = param_1;
    *(undefined ***)this = &PTR__CCBSetSpriteFrame_016cf118;
    *(undefined ***)(this + 0x28) = &PTR_clone_016cf178;
    if (param_1 != (SpriteFrame *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
    }
    cocos2d::Ref::autorelease((Ref *)this);
  }
  return this;
}

