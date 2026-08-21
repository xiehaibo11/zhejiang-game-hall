
/* tinyxml2::XMLPrinter::PushText(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,char *param_1,bool param_2)

{
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  if (param_2) {
    Print((char *)this,&DAT_01868b37);
    Print((char *)this,"%s",param_1);
    Print((char *)this,&DAT_01868b41);
    return;
  }
  PrintString(this,param_1,true);
  return;
}

