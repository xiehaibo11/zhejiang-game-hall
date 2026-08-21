
/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLUnknown const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLUnknown *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  PushUnknown(this,pcVar1);
  return 1;
}

