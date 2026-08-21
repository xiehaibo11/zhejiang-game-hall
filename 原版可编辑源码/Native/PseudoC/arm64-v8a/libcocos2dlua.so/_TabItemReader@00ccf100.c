
/* non-virtual thunk to TabItemReader::~TabItemReader() */

void __thiscall TabItemReader::~TabItemReader(TabItemReader *this)

{
  cocos2d::Ref::~Ref((Ref *)(this + -0x28));
  operator_delete((Ref *)(this + -0x28));
  return;
}

