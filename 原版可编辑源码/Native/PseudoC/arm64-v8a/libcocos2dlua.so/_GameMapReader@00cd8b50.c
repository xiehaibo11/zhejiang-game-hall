
/* cocostudio::GameMapReader::~GameMapReader() */

void __thiscall cocostudio::GameMapReader::~GameMapReader(GameMapReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

