
/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLDeclaration const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLDeclaration *param_1)

{
  char *pcVar1;
  
                    /* try { // try from 01027334 to 0112733f has its CatchHandler @ 0102739c */
                    /* try { // try from 01027340 to 0112735f has its CatchHandler @ 010273a0 */
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(param_1 + 0x18));
  PushDeclaration(this,pcVar1);
                    /* try { // try from 01027360 to 011273b3 has its CatchHandler @ 010272fc */
  return 1;
}

