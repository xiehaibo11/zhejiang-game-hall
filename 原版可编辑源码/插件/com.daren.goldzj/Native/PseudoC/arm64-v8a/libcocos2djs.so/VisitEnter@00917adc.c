
/* tinyxml2::XMLPrinter::VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*) */

undefined8 __thiscall
tinyxml2::XMLPrinter::VisitEnter(XMLPrinter *this,XMLElement *param_1,XMLAttribute *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  OpenElement(this,pcVar1);
  for (; param_2 != (XMLAttribute *)0x0; param_2 = *(XMLAttribute **)(param_2 + 0x38)) {
    uVar2 = StrPair::GetStr((StrPair *)(param_2 + 8));
    pcVar1 = (char *)StrPair::GetStr((StrPair *)(param_2 + 0x20));
    Print((char *)this," %s=\"",uVar2);
    PrintString(this,pcVar1,false);
    Print((char *)this,&DAT_01a61e87);
  }
  return 1;
}

