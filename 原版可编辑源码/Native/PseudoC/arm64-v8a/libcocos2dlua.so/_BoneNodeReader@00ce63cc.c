
/* BoneNodeReader::~BoneNodeReader() */

void __thiscall BoneNodeReader::~BoneNodeReader(BoneNodeReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

