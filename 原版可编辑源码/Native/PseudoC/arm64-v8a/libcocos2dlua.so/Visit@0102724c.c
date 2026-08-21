
/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLText const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLText *param_1)

{
  XMLText XVar1;
  char *pcVar2;
  
  pcVar2 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  XVar1 = param_1[0x58];
                    /* try { // try from 0102727c to 01127287 has its CatchHandler @ 010272e4 */
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
                    /* try { // try from 01027288 to 011272a7 has its CatchHandler @ 010272e8 */
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  if (XVar1 == (XMLText)0x0) {
                    /* catch() { ... } // from try @ 0102727c with catch @ 010272e4 */
    PrintString(this,pcVar2,true);
  }
  else {
                    /* try { // try from 010272a8 to 011272fb has its CatchHandler @ 01027244 */
    Print((char *)this,&DAT_01458a24);
    Print((char *)this,"%s",pcVar2);
    Print((char *)this,&DAT_01458a2e);
  }
                    /* catch() { ... } // from try @ 01027288 with catch @ 010272e8 */
  return 1;
}

