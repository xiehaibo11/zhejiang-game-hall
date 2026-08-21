
/* cocostudio::WidgetPropertiesReader::~WidgetPropertiesReader() */

void __thiscall
cocostudio::WidgetPropertiesReader::~WidgetPropertiesReader(WidgetPropertiesReader *this)

{
  *(undefined ***)this = &PTR__WidgetPropertiesReader_016ca818;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

