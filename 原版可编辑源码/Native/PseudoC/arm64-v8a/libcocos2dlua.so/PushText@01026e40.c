
/* tinyxml2::XMLPrinter::PushText(bool) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,bool param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_01021478(acStack_f0,200,200,"%d",param_1);
                    /* catch() { ... } // from try @ 01026e04 with catch @ 01026e84 */
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
                    /* catch() { ... } // from try @ 01026df8 with catch @ 01026e94 */
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
                    /* catch() { ... } // from try @ 01026dcc with catch @ 01026ea4 */
  PrintString(this,acStack_f0,true);
                    /* try { // try from 01026eb8 to 01126ef3 has its CatchHandler @ 01026eb8
                       catch() { ... } // from try @ 01026eb8 with catch @ 01026eb8
                       catch() { ... } // from try @ 01026f04 with catch @ 01026eb8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

