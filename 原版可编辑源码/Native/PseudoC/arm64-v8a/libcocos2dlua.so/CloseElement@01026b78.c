
/* tinyxml2::XMLPrinter::CloseElement() */

void __thiscall tinyxml2::XMLPrinter::CloseElement(XMLPrinter *this)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x104);
                    /* try { // try from 01026ba4 to 01126baf has its CatchHandler @ 01026d28 */
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
  *(int *)(this + 0x104) = (int)((long)iVar2 + -1);
                    /* try { // try from 01026bb0 to 01126bbb has its CatchHandler @ 01026d18 */
  if (this[8] == (XMLPrinter)0x0) {
                    /* try { // try from 01026bc8 to 01126c93 has its CatchHandler @ 01026960 */
    uVar1 = *(undefined8 *)(*(long *)(this + 0xa8) + ((long)iVar2 + -1) * 8);
    if ((*(int *)(this + 0x1c) < 0) && (this[0x21] == (XMLPrinter)0x0)) {
      Print((char *)this,&DAT_013c61e6);
      iVar2 = *(int *)(this + 0x18);
      if (0 < iVar2) {
        do {
          Print((char *)this,&DAT_01408f24);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    Print((char *)this,"</%s>",uVar1);
  }
  else {
                    /* try { // try from 01026bbc to 01126bc7 has its CatchHandler @ 01026d08 */
    Print((char *)this,&DAT_013cfab0);
  }
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
    *(undefined4 *)(this + 0x1c) = 0xffffffff;
  }
  if ((*(int *)(this + 0x18) == 0) && (this[0x21] == (XMLPrinter)0x0)) {
    Print((char *)this,&DAT_013c61e6);
  }
  this[8] = (XMLPrinter)0x0;
  return;
}

