
/* non-virtual thunk to dragonBones::DBCCSprite::~DBCCSprite() */

void __thiscall dragonBones::DBCCSprite::~DBCCSprite(DBCCSprite *this)

{
  cocos2d::Sprite::~Sprite((Sprite *)(this + -0x2f8));
  operator_delete((Sprite *)(this + -0x2f8));
  return;
}

