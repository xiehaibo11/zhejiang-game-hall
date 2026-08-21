
/* cocostudio::Sprite3DReader::~Sprite3DReader() */

void __thiscall cocostudio::Sprite3DReader::~Sprite3DReader(Sprite3DReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

