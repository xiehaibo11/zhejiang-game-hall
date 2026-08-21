
/* tinyxml2::XMLPrinter::PushText(float) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,float param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 01026ef4 to 01126efb has its CatchHandler @ 01026fb8 */
                    /* try { // try from 01026f00 to 01126f03 has its CatchHandler @ 01026fa8 */
                    /* try { // try from 01026f04 to 01126fcb has its CatchHandler @ 01026eb8 */
  FUN_01021478((double)param_1,acStack_f0,200,200,&DAT_012f093a);
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  PrintString(this,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

