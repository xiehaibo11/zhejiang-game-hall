
/* tinyxml2::XMLPrinter::VisitEnter(tinyxml2::XMLDocument const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::VisitEnter(XMLPrinter *this,XMLDocument *param_1)

{
  this[0x20] = *(XMLPrinter *)(param_1 + 0x59);
  if (param_1[0x58] != (XMLDocument)0x0) {
    Print((char *)this,"%s",&DAT_01458aa6);
  }
  return 1;
}

