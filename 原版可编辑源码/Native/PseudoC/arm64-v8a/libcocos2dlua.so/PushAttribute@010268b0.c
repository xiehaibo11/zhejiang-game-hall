
/* tinyxml2::XMLPrinter::PushAttribute(char const*, char const*) */

void __thiscall tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,char *param_2)

{
  Print((char *)this," %s=\"",param_1);
  PrintString(this,param_2,false);
  Print((char *)this,"\"");
  return;
}

