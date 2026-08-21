
/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLComment const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLComment *param_1)

{
  char *pcVar1;
  
                    /* try { // try from 010272fc to 01127333 has its CatchHandler @ 010272fc
                       catch() { ... } // from try @ 010272fc with catch @ 010272fc
                       catch() { ... } // from try @ 01027360 with catch @ 010272fc */
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  PushComment(this,pcVar1);
  return 1;
}

