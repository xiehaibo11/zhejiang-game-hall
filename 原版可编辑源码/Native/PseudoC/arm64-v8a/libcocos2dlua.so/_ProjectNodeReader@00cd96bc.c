
/* cocostudio::ProjectNodeReader::~ProjectNodeReader() */

void __thiscall cocostudio::ProjectNodeReader::~ProjectNodeReader(ProjectNodeReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

