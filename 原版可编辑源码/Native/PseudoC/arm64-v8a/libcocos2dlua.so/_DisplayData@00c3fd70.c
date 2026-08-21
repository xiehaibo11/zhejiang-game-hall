
/* cocostudio::DisplayData::~DisplayData() */

void __thiscall cocostudio::DisplayData::~DisplayData(DisplayData *this)

{
  *(undefined ***)this = &PTR__DisplayData_016c8ce8;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

