
/* tinyxml2::XMLPrinter::PushText(int) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,int param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
                    /* catch() { ... } // from try @ 01026bb0 with catch @ 01026d18 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 01026ba4 with catch @ 01026d28 */
                    /* catch() { ... } // from try @ 01026c94 with catch @ 01026d2c */
                    /* catch() { ... } // from try @ 01026ab0 with catch @ 01026d30 */
                    /* catch() { ... } // from try @ 01026aa4 with catch @ 01026d40 */
                    /* catch() { ... } // from try @ 010269e4 with catch @ 01026d44 */
  FUN_01021478(acStack_f0,200,200,"%d",param_1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  PrintString(this,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 01026d98 to 01126dcb has its CatchHandler @ 01026d98
                       catch() { ... } // from try @ 01026d98 with catch @ 01026d98
                       catch() { ... } // from try @ 01026e0c with catch @ 01026d98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

