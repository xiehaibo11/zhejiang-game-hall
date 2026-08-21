
/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLText const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLText *param_1)

{
  XMLText XVar1;
  char *pcVar2;
  
  pcVar2 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  XVar1 = param_1[0x58];
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  if (XVar1 == (XMLText)0x0) {
    PrintString(this,pcVar2,true);
  }
  else {
    Print((char *)this,&DAT_01868b37);
    Print((char *)this,"%s",pcVar2);
    Print((char *)this,&DAT_01868b41);
  }
  return 1;
}

