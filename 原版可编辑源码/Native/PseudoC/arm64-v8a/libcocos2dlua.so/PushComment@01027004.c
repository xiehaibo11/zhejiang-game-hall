
/* tinyxml2::XMLPrinter::PushComment(char const*) */

void __thiscall tinyxml2::XMLPrinter::PushComment(XMLPrinter *this,char *param_1)

{
  int iVar1;
  
                    /* try { // try from 01027008 to 0112700f has its CatchHandler @ 0102707c */
                    /* try { // try from 01027014 to 0112701b has its CatchHandler @ 0102706c */
                    /* try { // try from 0102701c to 0112708f has its CatchHandler @ 01026fcc */
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  if (((*(int *)(this + 0x1c) < 0) && (this[9] == (XMLPrinter)0x0)) &&
     (this[0x21] == (XMLPrinter)0x0)) {
    Print((char *)this,&DAT_013c61e6);
    iVar1 = *(int *)(this + 0x18);
    if (0 < iVar1) {
      do {
                    /* catch() { ... } // from try @ 01027008 with catch @ 0102707c */
        Print((char *)this,&DAT_01408f24);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  this[9] = (XMLPrinter)0x0;
  Print((char *)this,&DAT_01458a82,param_1);
  return;
}

