
/* tinyxml2::XMLPrinter::PushHeader(bool, bool) */

void __thiscall tinyxml2::XMLPrinter::PushHeader(XMLPrinter *this,bool param_1,bool param_2)

{
  if (param_1) {
    Print((char *)this,"%s",&DAT_01868bb9);
  }
  if (param_2) {
    PushDeclaration(this,"xml version=\"1.0\"");
    return;
  }
  return;
}

