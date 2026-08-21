
/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLDeclaration const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLDeclaration *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  PushDeclaration(this,pcVar1);
  return 1;
}

