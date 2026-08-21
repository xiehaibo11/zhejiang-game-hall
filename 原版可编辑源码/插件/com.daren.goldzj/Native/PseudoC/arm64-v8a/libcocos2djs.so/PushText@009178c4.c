
/* tinyxml2::XMLPrinter::PushText(double) */

void tinyxml2::XMLPrinter::PushText(double param_1)

{
  long lVar1;
  XMLPrinter *in_x0;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_f0,200,"%g");
  *(int *)(in_x0 + 0x1c) = *(int *)(in_x0 + 0x18) + -1;
  if (in_x0[8] != (XMLPrinter)0x0) {
    in_x0[8] = (XMLPrinter)0x0;
    Print((char *)in_x0,">");
  }
  PrintString(in_x0,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

