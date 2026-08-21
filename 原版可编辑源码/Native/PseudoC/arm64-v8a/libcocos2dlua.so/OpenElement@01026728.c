
/* tinyxml2::XMLPrinter::OpenElement(char const*) */

void __thiscall tinyxml2::XMLPrinter::OpenElement(XMLPrinter *this,char *param_1)

{
  int iVar1;
  
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  DynArray<char_const*,10>::Push((DynArray<char_const*,10> *)(this + 0xa8),param_1);
  if (((*(int *)(this + 0x1c) < 0) && (this[9] == (XMLPrinter)0x0)) &&
     (this[0x21] == (XMLPrinter)0x0)) {
    Print((char *)this,&DAT_013c61e6);
    iVar1 = *(int *)(this + 0x18);
                    /* try { // try from 01026798 to 011267f3 has its CatchHandler @ 01026798
                       catch() { ... } // from try @ 01026798 with catch @ 01026798
                       catch() { ... } // from try @ 01026848 with catch @ 01026798 */
    if (0 < iVar1) {
      do {
        Print((char *)this,&DAT_01408f24);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  Print((char *)this,&DAT_01458a72,param_1);
  *(undefined2 *)(this + 8) = 1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return;
}

