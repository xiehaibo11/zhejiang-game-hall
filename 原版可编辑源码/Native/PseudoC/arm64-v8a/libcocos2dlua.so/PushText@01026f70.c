
/* tinyxml2::XMLPrinter::PushText(double) */

void tinyxml2::XMLPrinter::PushText(double param_1)

{
  long lVar1;
  XMLPrinter *in_x0;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_01021478(acStack_f0,200,200,&DAT_012f093a);
                    /* catch() { ... } // from try @ 01026f00 with catch @ 01026fa8 */
  *(int *)(in_x0 + 0x1c) = *(int *)(in_x0 + 0x18) + -1;
                    /* catch() { ... } // from try @ 01026ef4 with catch @ 01026fb8 */
  if (in_x0[8] != (XMLPrinter)0x0) {
    in_x0[8] = (XMLPrinter)0x0;
                    /* try { // try from 01026fcc to 01127007 has its CatchHandler @ 01026fcc
                       catch() { ... } // from try @ 01026fcc with catch @ 01026fcc
                       catch() { ... } // from try @ 0102701c with catch @ 01026fcc */
    Print((char *)in_x0,">");
  }
  PrintString(in_x0,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

