
/* cocostudio::WidgetPropertiesReader0300::~WidgetPropertiesReader0300() */

void __thiscall
cocostudio::WidgetPropertiesReader0300::~WidgetPropertiesReader0300
          (WidgetPropertiesReader0300 *this)

{
  *(undefined ***)this = &PTR__WidgetPropertiesReader_016ca818;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

