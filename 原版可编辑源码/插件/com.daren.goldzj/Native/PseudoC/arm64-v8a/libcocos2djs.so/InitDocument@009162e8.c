
/* tinyxml2::XMLDocument::InitDocument() */

void __thiscall tinyxml2::XMLDocument::InitDocument(XMLDocument *this)

{
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  *(undefined8 *)(this + 0x78) = 0;
  return;
}

