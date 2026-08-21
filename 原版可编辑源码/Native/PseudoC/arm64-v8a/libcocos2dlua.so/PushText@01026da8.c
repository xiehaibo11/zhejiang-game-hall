
/* tinyxml2::XMLPrinter::PushText(unsigned int) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,uint param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 01026dcc to 01126de7 has its CatchHandler @ 01026ea4 */
  FUN_01021478(acStack_f0,200,200,"%u",param_1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
                    /* try { // try from 01026df8 to 01126dff has its CatchHandler @ 01026e94 */
                    /* try { // try from 01026e04 to 01126e0b has its CatchHandler @ 01026e84 */
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
                    /* try { // try from 01026e0c to 01126eb7 has its CatchHandler @ 01026d98 */
  PrintString(this,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

