
/* cocostudio::ComExtensionData::~ComExtensionData() */

void __thiscall cocostudio::ComExtensionData::~ComExtensionData(ComExtensionData *this)

{
  *(undefined ***)this = &PTR__ComExtensionData_016ce200;
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x68));
  }
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  cocos2d::Component::~Component((Component *)this);
  return;
}

