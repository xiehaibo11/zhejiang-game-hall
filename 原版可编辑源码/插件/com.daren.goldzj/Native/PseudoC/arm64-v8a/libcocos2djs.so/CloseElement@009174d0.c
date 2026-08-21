
/* tinyxml2::XMLPrinter::CloseElement() */

void __thiscall tinyxml2::XMLPrinter::CloseElement(XMLPrinter *this)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x104);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
  *(int *)(this + 0x104) = (int)((long)iVar2 + -1);
  if (this[8] == (XMLPrinter)0x0) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0xa8) + ((long)iVar2 + -1) * 8);
    if ((*(int *)(this + 0x1c) < 0) && (this[0x21] == (XMLPrinter)0x0)) {
      Print((char *)this,&DAT_018938a8);
      iVar2 = *(int *)(this + 0x18);
      if (0 < iVar2) {
        do {
          Print((char *)this,"    ");
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    Print((char *)this,"</%s>",uVar1);
  }
  else {
    Print((char *)this,&DAT_01868b8f);
  }
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
    *(int *)(this + 0x1c) = -1;
  }
  if ((*(int *)(this + 0x18) == 0) && (this[0x21] == (XMLPrinter)0x0)) {
    Print((char *)this,&DAT_018938a8);
  }
  this[8] = (XMLPrinter)0x0;
  return;
}

