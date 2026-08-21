
/* cocostudio::GameNode3DReader::~GameNode3DReader() */

void __thiscall cocostudio::GameNode3DReader::~GameNode3DReader(GameNode3DReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

