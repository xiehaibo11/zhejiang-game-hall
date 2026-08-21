
/* tinyxml2::XMLPrinter::SealElement() */

void __thiscall tinyxml2::XMLPrinter::SealElement(XMLPrinter *this)

{
  this[8] = (XMLPrinter)0x0;
  Print((char *)this,">");
  return;
}

