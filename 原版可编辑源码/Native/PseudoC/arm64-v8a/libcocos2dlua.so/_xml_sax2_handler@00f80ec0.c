
/* rapidxml::xml_sax2_handler::~xml_sax2_handler() */

void __thiscall rapidxml::xml_sax2_handler::~xml_sax2_handler(xml_sax2_handler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined ***)this = &PTR__xml_sax2_handler_01722198;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

