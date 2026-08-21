
/* tinyxml2::XMLElement::~XMLElement() */

void __thiscall tinyxml2::XMLElement::~XMLElement(XMLElement *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR_ToElement_01c68ea8;
  puVar3 = *(undefined8 **)(this + 0x60);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[7];
    plVar2 = (long *)puVar3[8];
    (**(code **)*puVar3)();
    (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(this + 0x60));
    *(undefined8 **)(this + 0x60) = puVar1;
    puVar3 = puVar1;
  }
  XMLNode::~XMLNode((XMLNode *)this);
  return;
}

