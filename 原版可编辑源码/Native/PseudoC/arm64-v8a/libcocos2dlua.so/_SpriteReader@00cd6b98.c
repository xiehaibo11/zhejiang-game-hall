
/* cocostudio::SpriteReader::~SpriteReader() */

void __thiscall cocostudio::SpriteReader::~SpriteReader(SpriteReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

