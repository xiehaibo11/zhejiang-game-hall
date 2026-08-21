
/* tinyxml2::XMLPrinter::PushText(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,char *param_1,bool param_2)

{
                    /* try { // try from 01026c94 to 01126c9f has its CatchHandler @ 01026d2c */
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
                    /* try { // try from 01026ca0 to 01126d57 has its CatchHandler @ 01026960 */
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  if (param_2) {
    Print((char *)this,&DAT_01458a24);
    Print((char *)this,"%s",param_1);
    Print((char *)this,&DAT_01458a2e);
    return;
  }
                    /* catch() { ... } // from try @ 01026bbc with catch @ 01026d08 */
  PrintString(this,param_1,true);
  return;
}

