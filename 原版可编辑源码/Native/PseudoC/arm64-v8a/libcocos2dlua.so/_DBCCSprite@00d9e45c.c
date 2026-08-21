
/* dragonBones::DBCCSprite::~DBCCSprite() */

void __thiscall dragonBones::DBCCSprite::~DBCCSprite(DBCCSprite *this)

{
  cocos2d::Sprite::~Sprite((Sprite *)this);
  operator_delete(this);
  return;
}

