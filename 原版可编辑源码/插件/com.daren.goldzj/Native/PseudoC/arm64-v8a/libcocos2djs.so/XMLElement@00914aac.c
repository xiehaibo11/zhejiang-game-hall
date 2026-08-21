
/* tinyxml2::XMLElement::XMLElement(tinyxml2::XMLDocument*) */

void __thiscall tinyxml2::XMLElement::XMLElement(XMLElement *this,XMLDocument *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_ToElement_01c68ea8;
  *(XMLDocument **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

