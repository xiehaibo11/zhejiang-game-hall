
/* tinyxml2::XMLAttribute::~XMLAttribute() */

void __thiscall tinyxml2::XMLAttribute::~XMLAttribute(XMLAttribute *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__XMLAttribute_01c691a0;
  if ((((byte)this[0x21] >> 1 & 1) != 0) &&
     (pvVar1 = *(void **)(this + 0x28), pvVar1 != (void *)0x0)) {
    operator_delete__(pvVar1);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if ((((byte)this[9] >> 1 & 1) != 0) && (*(void **)(this + 0x10) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  operator_delete(this);
  return;
}

