
/* TabItemReader::~TabItemReader() */

void __thiscall TabItemReader::~TabItemReader(TabItemReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

