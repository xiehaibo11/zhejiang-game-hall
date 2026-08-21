
/* tinyxml2::XMLPrinter::PushDeclaration(char const*) */

void __thiscall tinyxml2::XMLPrinter::PushDeclaration(XMLPrinter *this,char *param_1)

{
  int iVar1;
  
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  if (((*(int *)(this + 0x1c) < 0) && (this[9] == (XMLPrinter)0x0)) &&
     (this[0x21] == (XMLPrinter)0x0)) {
    Print((char *)this,&DAT_018938a8);
    iVar1 = *(int *)(this + 0x18);
    if (0 < iVar1) {
      do {
        Print((char *)this,"    ");
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  this[9] = (XMLPrinter)0x0;
  Print((char *)this,"<?%s?>",param_1);
  return;
}

