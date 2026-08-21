
/* TabControlReader::~TabControlReader() */

void __thiscall TabControlReader::~TabControlReader(TabControlReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

