
/* tinyxml2::XMLElement::~XMLElement() */

void __thiscall tinyxml2::XMLElement::~XMLElement(XMLElement *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 01023f9c to 01123fa3 has its CatchHandler @ 01023fd0 */
                    /* try { // try from 01023fa4 to 01123fd3 has its CatchHandler @ 01023f34 */
  *(undefined ***)this = &PTR_ToElement_01727600;
  puVar3 = *(undefined8 **)(this + 0x60);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[7];
    plVar2 = (long *)puVar3[8];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01023f9c with catch @ 01023fd0
                        */
    (**(code **)*puVar3)();
    (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(this + 0x60));
    *(undefined8 **)(this + 0x60) = puVar1;
    puVar3 = puVar1;
  }
  XMLNode::~XMLNode((XMLNode *)this);
  return;
}

