
/* cocos2d::RapidXmlSaxHander::~RapidXmlSaxHander() */

void __thiscall cocos2d::RapidXmlSaxHander::~RapidXmlSaxHander(RapidXmlSaxHander *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined ***)this = &PTR__xml_sax2_handler_01722198;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

