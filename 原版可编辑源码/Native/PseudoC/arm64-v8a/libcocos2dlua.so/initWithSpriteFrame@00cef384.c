
/* cocosbuilder::CCBSetSpriteFrame::initWithSpriteFrame(cocos2d::SpriteFrame*) */

undefined8 __thiscall
cocosbuilder::CCBSetSpriteFrame::initWithSpriteFrame(CCBSetSpriteFrame *this,SpriteFrame *param_1)

{
  *(SpriteFrame **)(this + 0x58) = param_1;
  if (param_1 != (SpriteFrame *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
  }
  return 1;
}

