
/* cocos2d::SpriteFrame::~SpriteFrame() */

void __thiscall cocos2d::SpriteFrame::~SpriteFrame(SpriteFrame *this)

{
  ~SpriteFrame(this);
  operator_delete(this);
  return;
}

