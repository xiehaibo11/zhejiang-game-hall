
/* tinyxml2::XMLPrinter::~XMLPrinter() */

void __thiscall tinyxml2::XMLPrinter::~XMLPrinter(XMLPrinter *this)

{
  XMLPrinter *pXVar1;
  
  pXVar1 = *(XMLPrinter **)(this + 0x108);
  *(undefined ***)this = &PTR__XMLPrinter_01727740;
  if ((pXVar1 != this + 0x110) && (pXVar1 != (XMLPrinter *)0x0)) {
    operator_delete__(pXVar1);
  }
  pXVar1 = *(XMLPrinter **)(this + 0xa8);
  if ((pXVar1 != this + 0xb0) && (pXVar1 != (XMLPrinter *)0x0)) {
    operator_delete__(pXVar1);
    return;
  }
  return;
}

